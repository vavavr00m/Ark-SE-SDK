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
	 * 		Name   -> Function PrimalItem_WeaponAdminBlinkRifle.PrimalItem_WeaponAdminBlinkRifle_C.ExecuteUbergraph_PrimalItem_WeaponAdminBlinkRifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponAdminBlinkRifle_C::ExecuteUbergraph_PrimalItem_WeaponAdminBlinkRifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponAdminBlinkRifle.PrimalItem_WeaponAdminBlinkRifle_C.ExecuteUbergraph_PrimalItem_WeaponAdminBlinkRifle");
		
		UPrimalItem_WeaponAdminBlinkRifle_C_ExecuteUbergraph_PrimalItem_WeaponAdminBlinkRifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponAdminBlinkRifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponAdminBlinkRifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponAdminBlinkRifle.PrimalItem_WeaponAdminBlinkRifle_C");
		return ptr;
	}

}


