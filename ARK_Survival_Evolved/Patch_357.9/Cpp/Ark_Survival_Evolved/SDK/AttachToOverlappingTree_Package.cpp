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
	 * 		Name   -> Function AttachToOverlappingTree.AttachToOverlappingTree_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAttachToOverlappingTree_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttachToOverlappingTree.AttachToOverlappingTree_C.ReceiveExecute");
		
		UAttachToOverlappingTree_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function AttachToOverlappingTree.AttachToOverlappingTree_C.ExecuteUbergraph_AttachToOverlappingTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAttachToOverlappingTree_C::ExecuteUbergraph_AttachToOverlappingTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttachToOverlappingTree.AttachToOverlappingTree_C.ExecuteUbergraph_AttachToOverlappingTree");
		
		UAttachToOverlappingTree_C_ExecuteUbergraph_AttachToOverlappingTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttachToOverlappingTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttachToOverlappingTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AttachToOverlappingTree.AttachToOverlappingTree_C");
		return ptr;
	}

}


