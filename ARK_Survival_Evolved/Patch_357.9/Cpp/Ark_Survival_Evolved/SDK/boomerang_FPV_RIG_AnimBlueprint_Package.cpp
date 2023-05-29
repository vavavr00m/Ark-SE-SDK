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
	 * 		Name   -> Function boomerang_FPV_RIG_AnimBlueprint.boomerang_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_boomerang_FPV_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uboomerang_FPV_RIG_AnimBlueprint_C::ExecuteUbergraph_boomerang_FPV_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function boomerang_FPV_RIG_AnimBlueprint.boomerang_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_boomerang_FPV_RIG_AnimBlueprint");
		
		Uboomerang_FPV_RIG_AnimBlueprint_C_ExecuteUbergraph_boomerang_FPV_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uboomerang_FPV_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uboomerang_FPV_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass boomerang_FPV_RIG_AnimBlueprint.boomerang_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}

}


