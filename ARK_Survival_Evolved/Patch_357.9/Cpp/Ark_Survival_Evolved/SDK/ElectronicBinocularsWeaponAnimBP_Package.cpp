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
	 * 		Name   -> Function ElectronicBinocularsWeaponAnimBP.ElectronicBinocularsWeaponAnimBP_C.ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UElectronicBinocularsWeaponAnimBP_C::ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectronicBinocularsWeaponAnimBP.ElectronicBinocularsWeaponAnimBP_C.ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP");
		
		UElectronicBinocularsWeaponAnimBP_C_ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectronicBinocularsWeaponAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectronicBinocularsWeaponAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ElectronicBinocularsWeaponAnimBP.ElectronicBinocularsWeaponAnimBP_C");
		return ptr;
	}

}


