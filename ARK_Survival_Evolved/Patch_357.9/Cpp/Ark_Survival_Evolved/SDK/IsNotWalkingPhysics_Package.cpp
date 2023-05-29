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
	 * 		Name   -> Function IsNotWalkingPhysics.IsNotWalkingPhysics_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIsNotWalkingPhysics_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsNotWalkingPhysics.IsNotWalkingPhysics_C.ReceiveConditionCheck");
		
		UIsNotWalkingPhysics_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function IsNotWalkingPhysics.IsNotWalkingPhysics_C.ExecuteUbergraph_IsNotWalkingPhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIsNotWalkingPhysics_C::ExecuteUbergraph_IsNotWalkingPhysics(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsNotWalkingPhysics.IsNotWalkingPhysics_C.ExecuteUbergraph_IsNotWalkingPhysics");
		
		UIsNotWalkingPhysics_C_ExecuteUbergraph_IsNotWalkingPhysics_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsNotWalkingPhysics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsNotWalkingPhysics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IsNotWalkingPhysics.IsNotWalkingPhysics_C");
		return ptr;
	}

}


