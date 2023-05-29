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
	 * 		Name   -> Function Buff_MissionData.Buff_MissionData_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MissionData_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.UserConstructionScript");
		
		ABuff_MissionData_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MissionData.Buff_MissionData_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MissionData_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.ReceiveBeginPlay");
		
		ABuff_MissionData_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MissionData.Buff_MissionData_C.OnPlayerRemovedFromMissionEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff_MissionData*                     MissionDataBuff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionType*                                Mission                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MissionData_C::OnPlayerRemovedFromMissionEvent(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.OnPlayerRemovedFromMissionEvent");
		
		ABuff_MissionData_C_OnPlayerRemovedFromMissionEvent_Params params {};
		params.MissionDataBuff = MissionDataBuff;
		params.Mission = Mission;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MissionData.Buff_MissionData_C.OnPlayerAddedToMissionEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff_MissionData*                     MissionDataBuff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionType*                                Mission                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MissionData_C::OnPlayerAddedToMissionEvent(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.OnPlayerAddedToMissionEvent");
		
		ABuff_MissionData_C_OnPlayerAddedToMissionEvent_Params params {};
		params.MissionDataBuff = MissionDataBuff;
		params.Mission = Mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MissionData.Buff_MissionData_C.ExecuteUbergraph_Buff_MissionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MissionData_C::ExecuteUbergraph_Buff_MissionData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.ExecuteUbergraph_Buff_MissionData");
		
		ABuff_MissionData_C_ExecuteUbergraph_Buff_MissionData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MissionData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MissionData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MissionData.Buff_MissionData_C");
		return ptr;
	}

}


