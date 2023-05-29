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
	 * 		Name   -> Function PrimalInventoryBP_StorageBox_Small.PrimalInventoryBP_StorageBox_Small_C.ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_StorageBox_Small_C::ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_StorageBox_Small.PrimalInventoryBP_StorageBox_Small_C.ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small");
		
		UPrimalInventoryBP_StorageBox_Small_C_ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_StorageBox_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_StorageBox_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_StorageBox_Small.PrimalInventoryBP_StorageBox_Small_C");
		return ptr;
	}

}


