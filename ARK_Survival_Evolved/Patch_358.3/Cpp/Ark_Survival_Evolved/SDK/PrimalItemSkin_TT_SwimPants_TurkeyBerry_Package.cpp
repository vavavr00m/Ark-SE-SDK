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
	 * 		Name   -> Function PrimalItemSkin_TT_SwimPants_TurkeyBerry.PrimalItemSkin_TT_SwimPants_TurkeyBerry_C.ExecuteUbergraph_PrimalItemSkin_TT_SwimPants_TurkeyBerry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TT_SwimPants_TurkeyBerry_C::ExecuteUbergraph_PrimalItemSkin_TT_SwimPants_TurkeyBerry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TT_SwimPants_TurkeyBerry.PrimalItemSkin_TT_SwimPants_TurkeyBerry_C.ExecuteUbergraph_PrimalItemSkin_TT_SwimPants_TurkeyBerry");
		
		UPrimalItemSkin_TT_SwimPants_TurkeyBerry_C_ExecuteUbergraph_PrimalItemSkin_TT_SwimPants_TurkeyBerry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_TT_SwimPants_TurkeyBerry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_TT_SwimPants_TurkeyBerry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TT_SwimPants_TurkeyBerry.PrimalItemSkin_TT_SwimPants_TurkeyBerry_C");
		return ptr;
	}

}


