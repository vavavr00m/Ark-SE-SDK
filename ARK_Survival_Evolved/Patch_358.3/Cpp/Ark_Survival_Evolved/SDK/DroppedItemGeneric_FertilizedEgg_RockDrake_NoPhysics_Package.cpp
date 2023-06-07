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
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics.DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics.DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C.UserConstructionScript");
		
		ADroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics.DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics.DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics");
		
		ADroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics.DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C");
		return ptr;
	}

}


