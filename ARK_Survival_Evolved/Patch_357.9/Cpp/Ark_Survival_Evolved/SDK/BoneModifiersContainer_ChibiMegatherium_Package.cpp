﻿/**
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
	 * 		Name   -> Function BoneModifiersContainer_ChibiMegatherium.BoneModifiersContainer_ChibiMegatherium_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiMegatherium_C::ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiMegatherium.BoneModifiersContainer_ChibiMegatherium_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium");
		
		UBoneModifiersContainer_ChibiMegatherium_C_ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiMegatherium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiMegatherium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiMegatherium.BoneModifiersContainer_ChibiMegatherium_C");
		return ptr;
	}

}

