/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C.ExecuteUbergraph_FPVMeleeHitCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVMeleeHitCameraShake_C::ExecuteUbergraph_FPVMeleeHitCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C.ExecuteUbergraph_FPVMeleeHitCameraShake");
		
		UFPVMeleeHitCameraShake_C_ExecuteUbergraph_FPVMeleeHitCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFPVMeleeHitCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVMeleeHitCameraShake_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C");
		return ptr;
	}

}


