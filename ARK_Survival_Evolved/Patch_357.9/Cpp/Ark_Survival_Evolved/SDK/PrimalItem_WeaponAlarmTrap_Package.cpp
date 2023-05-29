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
	 * 		Name   -> Function PrimalItem_WeaponAlarmTrap.PrimalItem_WeaponAlarmTrap_C.ExecuteUbergraph_PrimalItem_WeaponAlarmTrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponAlarmTrap_C::ExecuteUbergraph_PrimalItem_WeaponAlarmTrap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponAlarmTrap.PrimalItem_WeaponAlarmTrap_C.ExecuteUbergraph_PrimalItem_WeaponAlarmTrap");
		
		UPrimalItem_WeaponAlarmTrap_C_ExecuteUbergraph_PrimalItem_WeaponAlarmTrap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponAlarmTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponAlarmTrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponAlarmTrap.PrimalItem_WeaponAlarmTrap_C");
		return ptr;
	}

}


