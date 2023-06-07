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
	 * 		Name   -> Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.HandleMissionModuleBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t UMissionModule_zSubmodule_CompanionReaction_Base_C::HandleMissionModuleBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.HandleMissionModuleBegin");
		
		UMissionModule_zSubmodule_CompanionReaction_Base_C_HandleMissionModuleBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.TriggerMissionModuleBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionModule_zSubmodule_CompanionReaction_Base_C::TriggerMissionModuleBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.TriggerMissionModuleBegin");
		
		UMissionModule_zSubmodule_CompanionReaction_Base_C_TriggerMissionModuleBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionModule_zSubmodule_CompanionReaction_Base_C::ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base");
		
		UMissionModule_zSubmodule_CompanionReaction_Base_C_ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionModule_zSubmodule_CompanionReaction_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionModule_zSubmodule_CompanionReaction_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C");
		return ptr;
	}

}


