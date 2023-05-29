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
	 * 		Name   -> Function PrimalItemSkin_SwimShirt_MurderTurkey.PrimalItemSkin_SwimShirt_MurderTurkey_C.ExecuteUbergraph_PrimalItemSkin_SwimShirt_MurderTurkey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_SwimShirt_MurderTurkey_C::ExecuteUbergraph_PrimalItemSkin_SwimShirt_MurderTurkey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SwimShirt_MurderTurkey.PrimalItemSkin_SwimShirt_MurderTurkey_C.ExecuteUbergraph_PrimalItemSkin_SwimShirt_MurderTurkey");
		
		UPrimalItemSkin_SwimShirt_MurderTurkey_C_ExecuteUbergraph_PrimalItemSkin_SwimShirt_MurderTurkey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_SwimShirt_MurderTurkey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_SwimShirt_MurderTurkey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_SwimShirt_MurderTurkey.PrimalItemSkin_SwimShirt_MurderTurkey_C");
		return ptr;
	}

}


