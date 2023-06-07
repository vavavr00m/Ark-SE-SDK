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
	 * 		Name   -> Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIsWithinDistanceOfTree_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ReceiveTick");
		
		UIsWithinDistanceOfTree_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ExecuteUbergraph_IsWithinDistanceOfTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIsWithinDistanceOfTree_C::ExecuteUbergraph_IsWithinDistanceOfTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ExecuteUbergraph_IsWithinDistanceOfTree");
		
		UIsWithinDistanceOfTree_C_ExecuteUbergraph_IsWithinDistanceOfTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsWithinDistanceOfTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsWithinDistanceOfTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IsWithinDistanceOfTree.IsWithinDistanceOfTree_C");
		return ptr;
	}

}


