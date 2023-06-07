/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StorageBox_ChemBench.StorageBox_ChemBench_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_ChemBench_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_ChemBench.StorageBox_ChemBench_C.UserConstructionScript");
		
		AStorageBox_ChemBench_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StorageBox_ChemBench.StorageBox_ChemBench_C.ExecuteUbergraph_StorageBox_ChemBench
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_ChemBench_C::ExecuteUbergraph_StorageBox_ChemBench(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_ChemBench.StorageBox_ChemBench_C.ExecuteUbergraph_StorageBox_ChemBench");
		
		AStorageBox_ChemBench_C_ExecuteUbergraph_StorageBox_ChemBench_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStorageBox_ChemBench_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStorageBox_ChemBench_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_ChemBench.StorageBox_ChemBench_C");
		return ptr;
	}

}


