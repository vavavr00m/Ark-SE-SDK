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
	 * 		Name   -> Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.MaybeCutGrapplingHooks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTask_ShakeOffBasedPlayers_C::MaybeCutGrapplingHooks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.MaybeCutGrapplingHooks");
		
		UTask_ShakeOffBasedPlayers_C_MaybeCutGrapplingHooks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ShakeOffBasedPlayers_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveExecute");
		
		UTask_ShakeOffBasedPlayers_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveAbort
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ShakeOffBasedPlayers_C::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveAbort");
		
		UTask_ShakeOffBasedPlayers_C_ReceiveAbort_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ExecuteUbergraph_Task_ShakeOffBasedPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ShakeOffBasedPlayers_C::ExecuteUbergraph_Task_ShakeOffBasedPlayers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ExecuteUbergraph_Task_ShakeOffBasedPlayers");
		
		UTask_ShakeOffBasedPlayers_C_ExecuteUbergraph_Task_ShakeOffBasedPlayers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_ShakeOffBasedPlayers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_ShakeOffBasedPlayers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C");
		return ptr;
	}

}


