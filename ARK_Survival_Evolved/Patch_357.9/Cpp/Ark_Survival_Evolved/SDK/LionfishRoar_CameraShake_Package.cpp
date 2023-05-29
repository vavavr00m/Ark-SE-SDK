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
	 * 		Name   -> Function LionfishRoar_CameraShake.LionfishRoar_CameraShake_C.ExecuteUbergraph_LionfishRoar_CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULionfishRoar_CameraShake_C::ExecuteUbergraph_LionfishRoar_CameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishRoar_CameraShake.LionfishRoar_CameraShake_C.ExecuteUbergraph_LionfishRoar_CameraShake");
		
		ULionfishRoar_CameraShake_C_ExecuteUbergraph_LionfishRoar_CameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULionfishRoar_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULionfishRoar_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LionfishRoar_CameraShake.LionfishRoar_CameraShake_C");
		return ptr;
	}

}


