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
	 * 		Name   -> Function PrimalItemConsumable_UnlockEmote_Hungry.PrimalItemConsumable_UnlockEmote_Hungry_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Hungry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_UnlockEmote_Hungry_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Hungry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Hungry.PrimalItemConsumable_UnlockEmote_Hungry_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Hungry");
		
		UPrimalItemConsumable_UnlockEmote_Hungry_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Hungry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_UnlockEmote_Hungry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_UnlockEmote_Hungry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Hungry.PrimalItemConsumable_UnlockEmote_Hungry_C");
		return ptr;
	}

}


