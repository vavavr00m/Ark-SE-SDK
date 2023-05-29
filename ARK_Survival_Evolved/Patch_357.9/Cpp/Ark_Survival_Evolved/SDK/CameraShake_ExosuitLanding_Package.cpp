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
	 * 		Name   -> Function CameraShake_ExosuitLanding.CameraShake_ExosuitLanding_C.ExecuteUbergraph_CameraShake_ExosuitLanding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCameraShake_ExosuitLanding_C::ExecuteUbergraph_CameraShake_ExosuitLanding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraShake_ExosuitLanding.CameraShake_ExosuitLanding_C.ExecuteUbergraph_CameraShake_ExosuitLanding");
		
		UCameraShake_ExosuitLanding_C_ExecuteUbergraph_CameraShake_ExosuitLanding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraShake_ExosuitLanding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraShake_ExosuitLanding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraShake_ExosuitLanding.CameraShake_ExosuitLanding_C");
		return ptr;
	}

}


