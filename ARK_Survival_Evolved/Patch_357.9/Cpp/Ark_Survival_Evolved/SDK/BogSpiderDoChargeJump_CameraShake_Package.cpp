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
	 * 		Name   -> Function BogSpiderDoChargeJump_CameraShake.BogSpiderDoChargeJump_CameraShake_C.ExecuteUbergraph_BogSpiderDoChargeJump_CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBogSpiderDoChargeJump_CameraShake_C::ExecuteUbergraph_BogSpiderDoChargeJump_CameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpiderDoChargeJump_CameraShake.BogSpiderDoChargeJump_CameraShake_C.ExecuteUbergraph_BogSpiderDoChargeJump_CameraShake");
		
		UBogSpiderDoChargeJump_CameraShake_C_ExecuteUbergraph_BogSpiderDoChargeJump_CameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBogSpiderDoChargeJump_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBogSpiderDoChargeJump_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BogSpiderDoChargeJump_CameraShake.BogSpiderDoChargeJump_CameraShake_C");
		return ptr;
	}

}


