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
	 * 		Name   -> Function BoneModifiersContainer_ChibiLymantria.BoneModifiersContainer_ChibiLymantria_C.ExecuteUbergraph_BoneModifiersContainer_ChibiLymantria
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiLymantria_C::ExecuteUbergraph_BoneModifiersContainer_ChibiLymantria(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiLymantria.BoneModifiersContainer_ChibiLymantria_C.ExecuteUbergraph_BoneModifiersContainer_ChibiLymantria");
		
		UBoneModifiersContainer_ChibiLymantria_C_ExecuteUbergraph_BoneModifiersContainer_ChibiLymantria_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiLymantria_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiLymantria_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiLymantria.BoneModifiersContainer_ChibiLymantria_C");
		return ptr;
	}

}


