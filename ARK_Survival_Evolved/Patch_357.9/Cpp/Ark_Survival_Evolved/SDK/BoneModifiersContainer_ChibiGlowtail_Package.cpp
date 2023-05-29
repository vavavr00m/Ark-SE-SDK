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
	 * 		Name   -> Function BoneModifiersContainer_ChibiGlowtail.BoneModifiersContainer_ChibiGlowtail_C.ExecuteUbergraph_BoneModifiersContainer_ChibiGlowtail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiGlowtail_C::ExecuteUbergraph_BoneModifiersContainer_ChibiGlowtail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiGlowtail.BoneModifiersContainer_ChibiGlowtail_C.ExecuteUbergraph_BoneModifiersContainer_ChibiGlowtail");
		
		UBoneModifiersContainer_ChibiGlowtail_C_ExecuteUbergraph_BoneModifiersContainer_ChibiGlowtail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiGlowtail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiGlowtail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiGlowtail.BoneModifiersContainer_ChibiGlowtail_C");
		return ptr;
	}

}


