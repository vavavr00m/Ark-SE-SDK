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
	 * 		Name   -> Function Task_FindTargetLocationAboveGround_WanderZ.Task_FindTargetLocationAboveGround_WanderZ_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_FindTargetLocationAboveGround_WanderZ_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_FindTargetLocationAboveGround_WanderZ.Task_FindTargetLocationAboveGround_WanderZ_C.ReceiveExecute");
		
		UTask_FindTargetLocationAboveGround_WanderZ_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_FindTargetLocationAboveGround_WanderZ.Task_FindTargetLocationAboveGround_WanderZ_C.ExecuteUbergraph_Task_FindTargetLocationAboveGround_WanderZ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_FindTargetLocationAboveGround_WanderZ_C::ExecuteUbergraph_Task_FindTargetLocationAboveGround_WanderZ(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_FindTargetLocationAboveGround_WanderZ.Task_FindTargetLocationAboveGround_WanderZ_C.ExecuteUbergraph_Task_FindTargetLocationAboveGround_WanderZ");
		
		UTask_FindTargetLocationAboveGround_WanderZ_C_ExecuteUbergraph_Task_FindTargetLocationAboveGround_WanderZ_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_FindTargetLocationAboveGround_WanderZ_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_FindTargetLocationAboveGround_WanderZ_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_FindTargetLocationAboveGround_WanderZ.Task_FindTargetLocationAboveGround_WanderZ_C");
		return ptr;
	}

}


