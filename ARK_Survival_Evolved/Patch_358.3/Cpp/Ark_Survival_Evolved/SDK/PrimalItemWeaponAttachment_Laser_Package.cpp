﻿/**
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
	 * 		Name   -> Function PrimalItemWeaponAttachment_Laser.PrimalItemWeaponAttachment_Laser_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Laser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemWeaponAttachment_Laser_C::ExecuteUbergraph_PrimalItemWeaponAttachment_Laser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponAttachment_Laser.PrimalItemWeaponAttachment_Laser_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Laser");
		
		UPrimalItemWeaponAttachment_Laser_C_ExecuteUbergraph_PrimalItemWeaponAttachment_Laser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemWeaponAttachment_Laser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemWeaponAttachment_Laser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponAttachment_Laser.PrimalItemWeaponAttachment_Laser_C");
		return ptr;
	}

}


