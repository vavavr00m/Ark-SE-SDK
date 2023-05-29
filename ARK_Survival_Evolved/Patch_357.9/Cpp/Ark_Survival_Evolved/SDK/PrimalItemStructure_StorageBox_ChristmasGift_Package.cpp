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
	 * 		Name   -> Function PrimalItemStructure_StorageBox_ChristmasGift.PrimalItemStructure_StorageBox_ChristmasGift_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_ChristmasGift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_StorageBox_ChristmasGift_C::ExecuteUbergraph_PrimalItemStructure_StorageBox_ChristmasGift(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StorageBox_ChristmasGift.PrimalItemStructure_StorageBox_ChristmasGift_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_ChristmasGift");
		
		UPrimalItemStructure_StorageBox_ChristmasGift_C_ExecuteUbergraph_PrimalItemStructure_StorageBox_ChristmasGift_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_StorageBox_ChristmasGift_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_StorageBox_ChristmasGift_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StorageBox_ChristmasGift.PrimalItemStructure_StorageBox_ChristmasGift_C");
		return ptr;
	}

}


