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
	 * 		Name   -> Function SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_HLNA_ExplorerNote_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		USK_HLNA_ExplorerNote_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C.ExecuteUbergraph_SK_HLN-A_ExplorerNote_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_HLNA_ExplorerNote_AnimBlueprint_C::ExecuteUbergraph_SK_HLNA_ExplorerNote_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C.ExecuteUbergraph_SK_HLN-A_ExplorerNote_AnimBlueprint");
		
		USK_HLNA_ExplorerNote_AnimBlueprint_C_ExecuteUbergraph_SK_HLNA_ExplorerNote_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USK_HLNA_ExplorerNote_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_HLNA_ExplorerNote_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_HLN_A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C");
		return ptr;
	}

}


