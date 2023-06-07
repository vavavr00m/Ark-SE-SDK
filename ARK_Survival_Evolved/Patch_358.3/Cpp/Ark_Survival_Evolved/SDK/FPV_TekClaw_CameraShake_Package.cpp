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
	 * 		Name   -> Function FPV_TekClaw_CameraShake.FPV_TekClaw_CameraShake_C.ExecuteUbergraph_FPV_TekClaw_CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPV_TekClaw_CameraShake_C::ExecuteUbergraph_FPV_TekClaw_CameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPV_TekClaw_CameraShake.FPV_TekClaw_CameraShake_C.ExecuteUbergraph_FPV_TekClaw_CameraShake");
		
		UFPV_TekClaw_CameraShake_C_ExecuteUbergraph_FPV_TekClaw_CameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPV_TekClaw_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPV_TekClaw_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FPV_TekClaw_CameraShake.FPV_TekClaw_CameraShake_C");
		return ptr;
	}

}


