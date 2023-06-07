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
	 * 		Name   -> Function PrimalItemConsumable_UnlockEmote_Santa.PrimalItemConsumable_UnlockEmote_Santa_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Santa
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_UnlockEmote_Santa_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Santa(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Santa.PrimalItemConsumable_UnlockEmote_Santa_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Santa");
		
		UPrimalItemConsumable_UnlockEmote_Santa_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Santa_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_UnlockEmote_Santa_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_UnlockEmote_Santa_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Santa.PrimalItemConsumable_UnlockEmote_Santa_C");
		return ptr;
	}

}


