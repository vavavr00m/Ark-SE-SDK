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
	 * 		Name   -> Function BoneModifiersContainer_ChibiKentrosaurus.BoneModifiersContainer_ChibiKentrosaurus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiKentrosaurus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoneModifiersContainer_ChibiKentrosaurus_C::ExecuteUbergraph_BoneModifiersContainer_ChibiKentrosaurus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiKentrosaurus.BoneModifiersContainer_ChibiKentrosaurus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiKentrosaurus");
		
		UBoneModifiersContainer_ChibiKentrosaurus_C_ExecuteUbergraph_BoneModifiersContainer_ChibiKentrosaurus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneModifiersContainer_ChibiKentrosaurus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneModifiersContainer_ChibiKentrosaurus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiKentrosaurus.BoneModifiersContainer_ChibiKentrosaurus_C");
		return ptr;
	}

}


