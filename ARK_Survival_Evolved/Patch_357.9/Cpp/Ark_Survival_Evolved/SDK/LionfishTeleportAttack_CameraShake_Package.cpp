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
	 * 		Name   -> Function LionfishTeleportAttack_CameraShake.LionfishTeleportAttack_CameraShake_C.ExecuteUbergraph_LionfishTeleportAttack_CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULionfishTeleportAttack_CameraShake_C::ExecuteUbergraph_LionfishTeleportAttack_CameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishTeleportAttack_CameraShake.LionfishTeleportAttack_CameraShake_C.ExecuteUbergraph_LionfishTeleportAttack_CameraShake");
		
		ULionfishTeleportAttack_CameraShake_C_ExecuteUbergraph_LionfishTeleportAttack_CameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULionfishTeleportAttack_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULionfishTeleportAttack_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LionfishTeleportAttack_CameraShake.LionfishTeleportAttack_CameraShake_C");
		return ptr;
	}

}


