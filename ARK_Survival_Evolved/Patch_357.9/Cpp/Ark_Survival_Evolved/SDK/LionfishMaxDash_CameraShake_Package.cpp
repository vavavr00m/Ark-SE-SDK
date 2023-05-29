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
	 * 		Name   -> Function LionfishMaxDash_CameraShake.LionfishMaxDash_CameraShake_C.ExecuteUbergraph_LionfishMaxDash_CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULionfishMaxDash_CameraShake_C::ExecuteUbergraph_LionfishMaxDash_CameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishMaxDash_CameraShake.LionfishMaxDash_CameraShake_C.ExecuteUbergraph_LionfishMaxDash_CameraShake");
		
		ULionfishMaxDash_CameraShake_C_ExecuteUbergraph_LionfishMaxDash_CameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULionfishMaxDash_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULionfishMaxDash_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LionfishMaxDash_CameraShake.LionfishMaxDash_CameraShake_C");
		return ptr;
	}

}


