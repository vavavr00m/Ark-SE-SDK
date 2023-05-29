/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function EngramEntry_DedicatedStorage.EngramEntry_DedicatedStorage_C.ExecuteUbergraph_EngramEntry_DedicatedStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_DedicatedStorage_C::ExecuteUbergraph_EngramEntry_DedicatedStorage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_DedicatedStorage.EngramEntry_DedicatedStorage_C.ExecuteUbergraph_EngramEntry_DedicatedStorage");
		
		UEngramEntry_DedicatedStorage_C_ExecuteUbergraph_EngramEntry_DedicatedStorage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_DedicatedStorage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_DedicatedStorage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_DedicatedStorage.EngramEntry_DedicatedStorage_C");
		return ptr;
	}

}


