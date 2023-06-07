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
	 * 		Name   -> Function PrimalItemSkin_MasterControllerHelmet.PrimalItemSkin_MasterControllerHelmet_C.ExecuteUbergraph_PrimalItemSkin_MasterControllerHelmet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_MasterControllerHelmet_C::ExecuteUbergraph_PrimalItemSkin_MasterControllerHelmet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MasterControllerHelmet.PrimalItemSkin_MasterControllerHelmet_C.ExecuteUbergraph_PrimalItemSkin_MasterControllerHelmet");
		
		UPrimalItemSkin_MasterControllerHelmet_C_ExecuteUbergraph_PrimalItemSkin_MasterControllerHelmet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_MasterControllerHelmet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_MasterControllerHelmet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_MasterControllerHelmet.PrimalItemSkin_MasterControllerHelmet_C");
		return ptr;
	}

}


