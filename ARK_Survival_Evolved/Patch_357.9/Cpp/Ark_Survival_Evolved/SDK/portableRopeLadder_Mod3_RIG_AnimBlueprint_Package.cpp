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
	 * 		Name   -> Function portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UportableRopeLadder_Mod3_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UportableRopeLadder_Mod3_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C.ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UportableRopeLadder_Mod3_RIG_AnimBlueprint_C::ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C.ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint");
		
		UportableRopeLadder_Mod3_RIG_AnimBlueprint_C_ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UportableRopeLadder_Mod3_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UportableRopeLadder_Mod3_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C");
		return ptr;
	}

}


