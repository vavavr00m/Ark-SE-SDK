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
	 * 		Name   -> Function Task_GasBags_GetRandomLaunchDirection.Task_GasBags_GetRandomLaunchDirection_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_GasBags_GetRandomLaunchDirection_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_GasBags_GetRandomLaunchDirection.Task_GasBags_GetRandomLaunchDirection_C.ReceiveExecute");
		
		UTask_GasBags_GetRandomLaunchDirection_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Task_GasBags_GetRandomLaunchDirection.Task_GasBags_GetRandomLaunchDirection_C.ExecuteUbergraph_Task_GasBags_GetRandomLaunchDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_GasBags_GetRandomLaunchDirection_C::ExecuteUbergraph_Task_GasBags_GetRandomLaunchDirection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_GasBags_GetRandomLaunchDirection.Task_GasBags_GetRandomLaunchDirection_C.ExecuteUbergraph_Task_GasBags_GetRandomLaunchDirection");
		
		UTask_GasBags_GetRandomLaunchDirection_C_ExecuteUbergraph_Task_GasBags_GetRandomLaunchDirection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_GasBags_GetRandomLaunchDirection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_GasBags_GetRandomLaunchDirection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_GasBags_GetRandomLaunchDirection.Task_GasBags_GetRandomLaunchDirection_C");
		return ptr;
	}

}


