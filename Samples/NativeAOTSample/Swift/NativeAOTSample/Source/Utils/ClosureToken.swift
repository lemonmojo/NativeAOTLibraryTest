import Foundation

public final class ClosureToken<SwiftHandler, NativeHandler> {
	internal var closureBox: NativeBox<SwiftHandler>?
	internal var handler: NativeHandler?
	
	internal func retainedPointerToClosureBox() -> UnsafeRawPointer? {
		closureBox?.retainedPointer()
	}
	
	internal func unretainedPointerToClosureBox() -> UnsafeRawPointer? {
		closureBox?.unretainedPointer()
	}
	
	public var isValid: Bool {
		closureBox != nil &&
		handler != nil
	}
	
	private init(closureBox: NativeBox<SwiftHandler>,
				 handler: NativeHandler) {
		self.closureBox = closureBox
		self.handler = handler
	}
	
	internal convenience init(closure: SwiftHandler,
							  handler: NativeHandler) {
		self.init(closureBox: .init(value: closure),
				  handler: handler)
	}
	
	internal func invalidate(andReleasePointerToClosureBox pointerToClosureBox: UnsafeRawPointer?) {
		if let pointerToClosureBox {
			closureBox?.release(pointerToClosureBox)
		}
		
		self.closureBox = nil
		self.handler = nil
	}
	
	deinit {
		Debug.log("Deinitializing \(Self.self)")
	}
}
