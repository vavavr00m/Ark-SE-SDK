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
	 * 		Name   -> Function BoneModifiersContainer_ChibiPhiomia.BoneModifiersContainer_ChibiPhiomia_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPhiomia
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiPhiomia_C::ExecuteUbergraph_BoneModifiersContainer_ChibiPhiomia(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiPhiomia.BoneModifiersContainer_ChibiPhiomia_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPhiomia");
		
		UBoneModifiersContainer_ChibiPhiomia_C_ExecuteUbergraph_BoneModifiersContainer_ChibiPhiomia_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiPhiomia_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiPhiomia_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiPhiomia.BoneModifiersContainer_ChibiPhiomia_C");
		return ptr;
	}

}


