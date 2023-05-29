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
	 * 		Name   -> Function PrimalItemSkin_EasterEggHat.PrimalItemSkin_EasterEggHat_C.ExecuteUbergraph_PrimalItemSkin_EasterEggHat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_EasterEggHat_C::ExecuteUbergraph_PrimalItemSkin_EasterEggHat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_EasterEggHat.PrimalItemSkin_EasterEggHat_C.ExecuteUbergraph_PrimalItemSkin_EasterEggHat");
		
		UPrimalItemSkin_EasterEggHat_C_ExecuteUbergraph_PrimalItemSkin_EasterEggHat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_EasterEggHat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_EasterEggHat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_EasterEggHat.PrimalItemSkin_EasterEggHat_C");
		return ptr;
	}

}


