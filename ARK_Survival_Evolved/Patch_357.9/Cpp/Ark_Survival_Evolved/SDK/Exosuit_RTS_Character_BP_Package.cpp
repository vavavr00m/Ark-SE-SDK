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
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_RTS_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPNotifyClearRider");
		
		AExosuit_RTS_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPOrderedMoveToLoc
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DestLoc                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_RTS_Character_BP_C::BPOrderedMoveToLoc(struct FVector* DestLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPOrderedMoveToLoc");
		
		AExosuit_RTS_Character_BP_C_BPOrderedMoveToLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DestLoc != nullptr)
			*DestLoc = params.DestLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AExosuit_RTS_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		AExosuit_RTS_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.OnRep_IsInRtsMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_RTS_Character_BP_C::OnRep_IsInRtsMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.OnRep_IsInRtsMode");
		
		AExosuit_RTS_Character_BP_C_OnRep_IsInRtsMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AExosuit_RTS_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPServerHandleNetExecCommand");
		
		AExosuit_RTS_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AExosuit_RTS_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPHandleUseButtonPress");
		
		AExosuit_RTS_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ServerStartRTS
	 * 		Flags  -> (Net, NetReliable, Public, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_RTS_Character_BP_C::ServerStartRTS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ServerStartRTS");
		
		AExosuit_RTS_Character_BP_C_ServerStartRTS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_RTS_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.UserConstructionScript");
		
		AExosuit_RTS_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_406
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AExosuit_RTS_Character_BP_C::InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_406()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_406");
		
		AExosuit_RTS_Character_BP_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_406_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_405
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AExosuit_RTS_Character_BP_C::InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_405()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_405");
		
		AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_405_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_404
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AExosuit_RTS_Character_BP_C::InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_404()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_404");
		
		AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_404_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_403
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AExosuit_RTS_Character_BP_C::InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_403()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_403");
		
		AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_403_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ExecuteUbergraph_Exosuit_RTS_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_RTS_Character_BP_C::ExecuteUbergraph_Exosuit_RTS_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ExecuteUbergraph_Exosuit_RTS_Character_BP");
		
		AExosuit_RTS_Character_BP_C_ExecuteUbergraph_Exosuit_RTS_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExosuit_RTS_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExosuit_RTS_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C");
		return ptr;
	}

}


