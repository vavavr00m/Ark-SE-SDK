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
	 * 		Name   -> Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_Cruise_Missile_MaintainCameraServer_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.BPServerHandleNetExecCommand");
		
		ABuff_Cruise_Missile_MaintainCameraServer_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.BPHandleOnStartFire
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Cruise_Missile_MaintainCameraServer_C::BPHandleOnStartFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.BPHandleOnStartFire");
		
		ABuff_Cruise_Missile_MaintainCameraServer_C_BPHandleOnStartFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Cruise_Missile_MaintainCameraServer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.UserConstructionScript");
		
		ABuff_Cruise_Missile_MaintainCameraServer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Cruise_Missile_MaintainCameraServer_C::ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer");
		
		ABuff_Cruise_Missile_MaintainCameraServer_C_ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Cruise_Missile_MaintainCameraServer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Cruise_Missile_MaintainCameraServer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C");
		return ptr;
	}

}


