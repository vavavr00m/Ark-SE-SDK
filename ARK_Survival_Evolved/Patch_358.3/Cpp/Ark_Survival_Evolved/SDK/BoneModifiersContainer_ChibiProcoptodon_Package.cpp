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
	 * 		Name   -> Function BoneModifiersContainer_ChibiProcoptodon.BoneModifiersContainer_ChibiProcoptodon_C.ExecuteUbergraph_BoneModifiersContainer_ChibiProcoptodon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiProcoptodon_C::ExecuteUbergraph_BoneModifiersContainer_ChibiProcoptodon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiProcoptodon.BoneModifiersContainer_ChibiProcoptodon_C.ExecuteUbergraph_BoneModifiersContainer_ChibiProcoptodon");
		
		UBoneModifiersContainer_ChibiProcoptodon_C_ExecuteUbergraph_BoneModifiersContainer_ChibiProcoptodon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiProcoptodon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiProcoptodon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiProcoptodon.BoneModifiersContainer_ChibiProcoptodon_C");
		return ptr;
	}

}


