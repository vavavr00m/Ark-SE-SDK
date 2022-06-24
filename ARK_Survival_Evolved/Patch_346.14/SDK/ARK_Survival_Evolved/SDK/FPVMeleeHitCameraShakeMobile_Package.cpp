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
	 * 		Name   -> Function FPVMeleeHitCameraShakeMobile.FPVMeleeHitCameraShakeMobile_C.ExecuteUbergraph_FPVMeleeHitCameraShakeMobile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVMeleeHitCameraShakeMobile_C::ExecuteUbergraph_FPVMeleeHitCameraShakeMobile(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FPVMeleeHitCameraShakeMobile.FPVMeleeHitCameraShakeMobile_C.ExecuteUbergraph_FPVMeleeHitCameraShakeMobile");
		
		UFPVMeleeHitCameraShakeMobile_C_ExecuteUbergraph_FPVMeleeHitCameraShakeMobile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFPVMeleeHitCameraShakeMobile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVMeleeHitCameraShakeMobile_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FPVMeleeHitCameraShakeMobile.FPVMeleeHitCameraShakeMobile_C");
		return ptr;
	}

}


