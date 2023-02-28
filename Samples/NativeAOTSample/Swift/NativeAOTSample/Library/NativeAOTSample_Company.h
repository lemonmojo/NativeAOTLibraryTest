#ifndef NativeAOTSample_Company_h
#define NativeAOTSample_Company_h

#import <stdlib.h>
#import "TypeDefs.h"

System_Type_t NativeAOTSample_Company_TypeOf(void);

NativeAOTSample_Company_t NativeAOTSample_Company_Create(const char* name);

char* NativeAOTSample_Company_Name_Get(NativeAOTSample_Company_t instance);
void NativeAOTSample_Company_Name_Set(NativeAOTSample_Company_t instance, const char* name);

int32_t NativeAOTSample_Company_NumberOfEmployees_Get(NativeAOTSample_Company_t instance);

CStatus NativeAOTSample_Company_AddEmployee(NativeAOTSample_Company_t instance,
											NativeAOTSample_Person_t employee);

CStatus NativeAOTSample_Company_RemoveEmployee(NativeAOTSample_Company_t instance,
											   NativeAOTSample_Person_t employee);

CBool NativeAOTSample_Company_ContainsEmployee(NativeAOTSample_Company_t instance,
											   NativeAOTSample_Person_t employee);

NativeAOTSample_Company_t NativeAOTSample_Company_GetEmployeeAtIndex(NativeAOTSample_Company_t instance,
																	 const int32_t index);

CStatus NativeAOTSample_Company_NumberOfEmployeesChanged_Get(NativeAOTSample_Company_t instance,
															 const void** outContext,
															 ContextDelegate_t* outDelegate);

void NativeAOTSample_Company_NumberOfEmployeesChanged_Set(NativeAOTSample_Company_t instance,
														  const void* context,
														  ContextDelegate_t delegate);

#endif /* NativeAOTSample_Company_h */
