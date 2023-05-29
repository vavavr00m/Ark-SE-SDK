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
	 * 		Name   -> Function PrimalItemSkin_TT_ActualTurkeyHat.PrimalItemSkin_TT_ActualTurkeyHat_C.ExecuteUbergraph_PrimalItemSkin_TT_ActualTurkeyHat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TT_ActualTurkeyHat_C::ExecuteUbergraph_PrimalItemSkin_TT_ActualTurkeyHat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TT_ActualTurkeyHat.PrimalItemSkin_TT_ActualTurkeyHat_C.ExecuteUbergraph_PrimalItemSkin_TT_ActualTurkeyHat");
		
		UPrimalItemSkin_TT_ActualTurkeyHat_C_ExecuteUbergraph_PrimalItemSkin_TT_ActualTurkeyHat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_TT_ActualTurkeyHat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_TT_ActualTurkeyHat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TT_ActualTurkeyHat.PrimalItemSkin_TT_ActualTurkeyHat_C");
		return ptr;
	}

}


