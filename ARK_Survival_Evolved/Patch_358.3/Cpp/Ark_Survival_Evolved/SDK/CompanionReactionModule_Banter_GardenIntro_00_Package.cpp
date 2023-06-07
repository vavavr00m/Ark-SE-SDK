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
	 * 		Name   -> Function CompanionReactionModule_Banter_GardenIntro_00.CompanionReactionModule_Banter_GardenIntro_00_C.ExecuteUbergraph_CompanionReactionModule_Banter_GardenIntro_00
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCompanionReactionModule_Banter_GardenIntro_00_C::ExecuteUbergraph_CompanionReactionModule_Banter_GardenIntro_00(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CompanionReactionModule_Banter_GardenIntro_00.CompanionReactionModule_Banter_GardenIntro_00_C.ExecuteUbergraph_CompanionReactionModule_Banter_GardenIntro_00");
		
		UCompanionReactionModule_Banter_GardenIntro_00_C_ExecuteUbergraph_CompanionReactionModule_Banter_GardenIntro_00_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompanionReactionModule_Banter_GardenIntro_00_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompanionReactionModule_Banter_GardenIntro_00_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CompanionReactionModule_Banter_GardenIntro_00.CompanionReactionModule_Banter_GardenIntro_00_C");
		return ptr;
	}

}


