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
	 * 		Name   -> Function DinoSettings_Carnivore_Large_CrystalWyvern_Adult.DinoSettings_Carnivore_Large_CrystalWyvern_Adult_C.ExecuteUbergraph_DinoSettings_Carnivore_Large_CrystalWyvern_Adult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Carnivore_Large_CrystalWyvern_Adult_C::ExecuteUbergraph_DinoSettings_Carnivore_Large_CrystalWyvern_Adult(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Large_CrystalWyvern_Adult.DinoSettings_Carnivore_Large_CrystalWyvern_Adult_C.ExecuteUbergraph_DinoSettings_Carnivore_Large_CrystalWyvern_Adult");
		
		UDinoSettings_Carnivore_Large_CrystalWyvern_Adult_C_ExecuteUbergraph_DinoSettings_Carnivore_Large_CrystalWyvern_Adult_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Carnivore_Large_CrystalWyvern_Adult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Carnivore_Large_CrystalWyvern_Adult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Large_CrystalWyvern_Adult.DinoSettings_Carnivore_Large_CrystalWyvern_Adult_C");
		return ptr;
	}

}


