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
	 * 		Name   -> Function BoneModifiersContainer_ChibiRockDrake.BoneModifiersContainer_ChibiRockDrake_C.ExecuteUbergraph_BoneModifiersContainer_ChibiRockDrake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiRockDrake_C::ExecuteUbergraph_BoneModifiersContainer_ChibiRockDrake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiRockDrake.BoneModifiersContainer_ChibiRockDrake_C.ExecuteUbergraph_BoneModifiersContainer_ChibiRockDrake");
		
		UBoneModifiersContainer_ChibiRockDrake_C_ExecuteUbergraph_BoneModifiersContainer_ChibiRockDrake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiRockDrake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiRockDrake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiRockDrake.BoneModifiersContainer_ChibiRockDrake_C");
		return ptr;
	}

}


