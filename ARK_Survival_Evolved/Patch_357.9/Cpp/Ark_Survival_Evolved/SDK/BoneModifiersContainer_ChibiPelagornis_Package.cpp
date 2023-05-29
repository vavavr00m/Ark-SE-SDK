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
	 * 		Name   -> Function BoneModifiersContainer_ChibiPelagornis.BoneModifiersContainer_ChibiPelagornis_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPelagornis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiPelagornis_C::ExecuteUbergraph_BoneModifiersContainer_ChibiPelagornis(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiPelagornis.BoneModifiersContainer_ChibiPelagornis_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPelagornis");
		
		UBoneModifiersContainer_ChibiPelagornis_C_ExecuteUbergraph_BoneModifiersContainer_ChibiPelagornis_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiPelagornis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiPelagornis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiPelagornis.BoneModifiersContainer_ChibiPelagornis_C");
		return ptr;
	}

}


