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
	 * 		Name   -> Function BoneModifiersContainer_ChibiMegalodon.BoneModifiersContainer_ChibiMegalodon_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMegalodon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiMegalodon_C::ExecuteUbergraph_BoneModifiersContainer_ChibiMegalodon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiMegalodon.BoneModifiersContainer_ChibiMegalodon_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMegalodon");
		
		UBoneModifiersContainer_ChibiMegalodon_C_ExecuteUbergraph_BoneModifiersContainer_ChibiMegalodon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiMegalodon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiMegalodon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiMegalodon.BoneModifiersContainer_ChibiMegalodon_C");
		return ptr;
	}

}


