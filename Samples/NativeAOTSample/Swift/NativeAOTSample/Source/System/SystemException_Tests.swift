import XCTest
@testable import NativeAOTSample

final class SystemExceptionTests: XCTestCase {
	func testSystemException() {
		let systemExceptionTypeName = "Exception"
		let systemExceptionTypeFullName = "System.Exception"
		
		guard let systemExceptionType = SystemType(typeName: systemExceptionTypeFullName) else {
			XCTFail("Failed to get type of \(systemExceptionTypeFullName) via name")
			
			return
		}
		
		let systemExceptionTypeViaObject = SystemException.type
		
		XCTAssertTrue(systemExceptionType == systemExceptionTypeViaObject)
		XCTAssertEqual(systemExceptionType.name, systemExceptionTypeName)
		XCTAssertEqual(systemExceptionType.fullName, systemExceptionTypeFullName)
		
		XCTAssertTrue(systemExceptionType.isAssignableFrom(systemExceptionTypeViaObject))
		XCTAssertTrue(systemExceptionType.isAssignableTo(systemExceptionTypeViaObject))
		
		let exceptionMessage = "Oh no, Exceptions are never good, are they?"
		let exception = SystemException(message: exceptionMessage)
		
		XCTAssertTrue(exception.type == systemExceptionType)
		XCTAssertEqual(exceptionMessage, exception.message)
		XCTAssertNil(exception.stackTrace)
		XCTAssertTrue(exception.is(of: SystemException.self))
		XCTAssertTrue(exception.is(of: SystemObject.self))
		XCTAssertFalse(exception.is(of: SystemType.self))
		
		let exceptionWithoutMessage = SystemException(message: nil)
		
		XCTAssertTrue(exceptionWithoutMessage.type == systemExceptionTypeViaObject)
		XCTAssertEqual("Exception of type 'System.Exception' was thrown.", exceptionWithoutMessage.message)
		XCTAssertNil(exceptionWithoutMessage.stackTrace)
	}
	
	func testSystemExceptionCreationPerformance() {
		let debugLoggingWasEnabled = Debug.isLoggingEnabled
		Debug.isLoggingEnabled = false
		defer { Debug.isLoggingEnabled = debugLoggingWasEnabled }
		
		let iterations = 100_000
		
		let message = "Oh no!"
		
		measure {
			for _ in 0..<iterations {
				_ = SystemException(message: message)
			}
		}
	}
}
