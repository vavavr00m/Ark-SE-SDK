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
	 * 		Name   -> Function BoneModifiersContainer_ChibiMesopithecus.BoneModifiersContainer_ChibiMesopithecus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMesopithecus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiMesopithecus_C::ExecuteUbergraph_BoneModifiersContainer_ChibiMesopithecus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiMesopithecus.BoneModifiersContainer_ChibiMesopithecus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMesopithecus");
		
		UBoneModifiersContainer_ChibiMesopithecus_C_ExecuteUbergraph_BoneModifiersContainer_ChibiMesopithecus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiMesopithecus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiMesopithecus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiMesopithecus.BoneModifiersContainer_ChibiMesopithecus_C");
		return ptr;
	}

}


