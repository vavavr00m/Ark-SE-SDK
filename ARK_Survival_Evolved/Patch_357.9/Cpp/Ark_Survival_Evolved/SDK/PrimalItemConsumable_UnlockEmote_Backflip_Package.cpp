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
	 * 		Name   -> Function PrimalItemConsumable_UnlockEmote_Backflip.PrimalItemConsumable_UnlockEmote_Backflip_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Backflip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_UnlockEmote_Backflip_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Backflip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Backflip.PrimalItemConsumable_UnlockEmote_Backflip_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Backflip");
		
		UPrimalItemConsumable_UnlockEmote_Backflip_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Backflip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_UnlockEmote_Backflip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_UnlockEmote_Backflip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Backflip.PrimalItemConsumable_UnlockEmote_Backflip_C");
		return ptr;
	}

}

