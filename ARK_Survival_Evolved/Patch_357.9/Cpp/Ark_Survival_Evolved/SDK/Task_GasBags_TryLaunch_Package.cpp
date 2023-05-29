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
	 * 		Name   -> Function Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_GasBags_TryLaunch_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C.ReceiveExecute");
		
		UTask_GasBags_TryLaunch_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C.ExecuteUbergraph_Task_GasBags_TryLaunch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_GasBags_TryLaunch_C::ExecuteUbergraph_Task_GasBags_TryLaunch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C.ExecuteUbergraph_Task_GasBags_TryLaunch");
		
		UTask_GasBags_TryLaunch_C_ExecuteUbergraph_Task_GasBags_TryLaunch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_GasBags_TryLaunch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_GasBags_TryLaunch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C");
		return ptr;
	}

}


