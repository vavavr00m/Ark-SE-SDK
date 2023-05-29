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
	 * 		Name   -> Function BoneModifiersContainer_ChibiCnidaria.BoneModifiersContainer_ChibiCnidaria_C.ExecuteUbergraph_BoneModifiersContainer_ChibiCnidaria
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiCnidaria_C::ExecuteUbergraph_BoneModifiersContainer_ChibiCnidaria(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiCnidaria.BoneModifiersContainer_ChibiCnidaria_C.ExecuteUbergraph_BoneModifiersContainer_ChibiCnidaria");
		
		UBoneModifiersContainer_ChibiCnidaria_C_ExecuteUbergraph_BoneModifiersContainer_ChibiCnidaria_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiCnidaria_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiCnidaria_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiCnidaria.BoneModifiersContainer_ChibiCnidaria_C");
		return ptr;
	}

}


