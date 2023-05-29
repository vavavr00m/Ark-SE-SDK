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
	 * 		Name   -> Function StorageBox_AnvilBench.StorageBox_AnvilBench_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_AnvilBench_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_AnvilBench.StorageBox_AnvilBench_C.UserConstructionScript");
		
		AStorageBox_AnvilBench_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StorageBox_AnvilBench.StorageBox_AnvilBench_C.ExecuteUbergraph_StorageBox_AnvilBench
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_AnvilBench_C::ExecuteUbergraph_StorageBox_AnvilBench(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_AnvilBench.StorageBox_AnvilBench_C.ExecuteUbergraph_StorageBox_AnvilBench");
		
		AStorageBox_AnvilBench_C_ExecuteUbergraph_StorageBox_AnvilBench_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStorageBox_AnvilBench_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStorageBox_AnvilBench_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_AnvilBench.StorageBox_AnvilBench_C");
		return ptr;
	}

}


