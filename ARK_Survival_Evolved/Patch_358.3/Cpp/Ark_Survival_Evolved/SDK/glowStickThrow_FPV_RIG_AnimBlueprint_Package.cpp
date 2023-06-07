/**
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
	 * 		Name   -> Function glowStickThrow_FPV_RIG_AnimBlueprint.glowStickThrow_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UglowStickThrow_FPV_RIG_AnimBlueprint_C::ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function glowStickThrow_FPV_RIG_AnimBlueprint.glowStickThrow_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint");
		
		UglowStickThrow_FPV_RIG_AnimBlueprint_C_ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UglowStickThrow_FPV_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UglowStickThrow_FPV_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass glowStickThrow_FPV_RIG_AnimBlueprint.glowStickThrow_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}

}


