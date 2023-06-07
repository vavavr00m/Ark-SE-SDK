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
	 * 		Name   -> Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Client_GiantTurtleRaftState_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.BuffTickClient");
		
		ABuff_Client_GiantTurtleRaftState_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Client_GiantTurtleRaftState_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.UserConstructionScript");
		
		ABuff_Client_GiantTurtleRaftState_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.ExecuteUbergraph_Buff_Client_GiantTurtleRaftState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Client_GiantTurtleRaftState_C::ExecuteUbergraph_Buff_Client_GiantTurtleRaftState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.ExecuteUbergraph_Buff_Client_GiantTurtleRaftState");
		
		ABuff_Client_GiantTurtleRaftState_C_ExecuteUbergraph_Buff_Client_GiantTurtleRaftState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Client_GiantTurtleRaftState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Client_GiantTurtleRaftState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C");
		return ptr;
	}

}


