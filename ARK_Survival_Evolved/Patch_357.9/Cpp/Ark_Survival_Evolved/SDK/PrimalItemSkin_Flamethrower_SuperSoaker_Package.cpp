﻿/**
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
	 * 		Name   -> Function PrimalItemSkin_Flamethrower_SuperSoaker.PrimalItemSkin_Flamethrower_SuperSoaker_C.ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_Flamethrower_SuperSoaker_C::ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Flamethrower_SuperSoaker.PrimalItemSkin_Flamethrower_SuperSoaker_C.ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker");
		
		UPrimalItemSkin_Flamethrower_SuperSoaker_C_ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_Flamethrower_SuperSoaker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_Flamethrower_SuperSoaker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Flamethrower_SuperSoaker.PrimalItemSkin_Flamethrower_SuperSoaker_C");
		return ptr;
	}

}

