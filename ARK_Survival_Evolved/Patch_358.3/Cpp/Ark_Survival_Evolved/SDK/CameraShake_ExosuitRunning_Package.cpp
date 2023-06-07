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
	 * 		Name   -> Function CameraShake_ExosuitRunning.CameraShake_ExosuitRunning_C.ExecuteUbergraph_CameraShake_ExosuitRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCameraShake_ExosuitRunning_C::ExecuteUbergraph_CameraShake_ExosuitRunning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraShake_ExosuitRunning.CameraShake_ExosuitRunning_C.ExecuteUbergraph_CameraShake_ExosuitRunning");
		
		UCameraShake_ExosuitRunning_C_ExecuteUbergraph_CameraShake_ExosuitRunning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraShake_ExosuitRunning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraShake_ExosuitRunning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraShake_ExosuitRunning.CameraShake_ExosuitRunning_C");
		return ptr;
	}

}


