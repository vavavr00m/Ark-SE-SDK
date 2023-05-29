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
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_CreativeModeHelper_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput");
		
		ABuff_CreativeModeHelper_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScaleMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD");
		
		ABuff_CreativeModeHelper_C_BPDrawBuffStatusHUD_Params params {};
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.ScaleMult = ScaleMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer");
		
		ABuff_CreativeModeHelper_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               NotRidingDino                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::IsNotRidingDino(bool* NotRidingDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino");
		
		ABuff_CreativeModeHelper_C_IsNotRidingDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotRidingDino != nullptr)
			*NotRidingDino = params.NotRidingDino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor)
	 */
	void ABuff_CreativeModeHelper_C::ExecConsoleCommand(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand");
		
		ABuff_CreativeModeHelper_C_ExecConsoleCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated");
		
		ABuff_CreativeModeHelper_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated");
		
		ABuff_CreativeModeHelper_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator");
		
		ABuff_CreativeModeHelper_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.UserConstructionScript");
		
		ABuff_CreativeModeHelper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_280
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Jump_K2Node_InputActionEvent_280()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_280");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Jump_K2Node_InputActionEvent_280_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_279
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_279()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_279");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_279_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_278
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_278()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_278");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_278_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_277
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_277()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_277");
		
		ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_277_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_276
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_276()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_276");
		
		ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_276_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_275
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_275()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_275");
		
		ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_275_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_76
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_76()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_76");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_76_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_75
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_75()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_75");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_75_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_74
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_74()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_74");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_74_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_73
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_G_K2Node_InputKeyEvent_73()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_73");
		
		ABuff_CreativeModeHelper_C_InpActEvt_G_K2Node_InputKeyEvent_73_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFlying                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::ServerSetFlight(bool IsFlying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight");
		
		ABuff_CreativeModeHelper_C_ServerSetFlight_Params params {};
		params.IsFlying = IsFlying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::ServerSetFlySpeed(float NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed");
		
		ABuff_CreativeModeHelper_C_ServerSetFlySpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::SetFlySpeed(float NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed");
		
		ABuff_CreativeModeHelper_C_SetFlySpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            StructureToDestroy                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::NetServerDestroyStructure(class APrimalStructure* StructureToDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure");
		
		ABuff_CreativeModeHelper_C_NetServerDestroyStructure_Params params {};
		params.StructureToDestroy = StructureToDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFlying                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::ClientUpdateFlightStatus(bool IsFlying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus");
		
		ABuff_CreativeModeHelper_C_ClientUpdateFlightStatus_Params params {};
		params.IsFlying = IsFlying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHitResult>                          Hits                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FVector>                             HitStarts                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FVector>                             HitEnds                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct UObject_FTransform>                  Chars                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::MultiReplicationDebugData(TArray<struct FHitResult>* Hits, TArray<struct FVector>* HitStarts, TArray<struct FVector>* HitEnds, TArray<struct UObject_FTransform>* Chars, const struct FVector& Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData");
		
		ABuff_CreativeModeHelper_C_MultiReplicationDebugData_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
		if (HitStarts != nullptr)
			*HitStarts = params.HitStarts;
		if (HitEnds != nullptr)
			*HitEnds = params.HitEnds;
		if (Chars != nullptr)
			*Chars = params.Chars;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient");
		
		ABuff_CreativeModeHelper_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::ServerRequestReplicationDebugging(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging");
		
		ABuff_CreativeModeHelper_C_ServerRequestReplicationDebugging_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CreativeModeHelper_C::ExecuteUbergraph_Buff_CreativeModeHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper");
		
		ABuff_CreativeModeHelper_C_ExecuteUbergraph_Buff_CreativeModeHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_CreativeModeHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_CreativeModeHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CreativeModeHelper.Buff_CreativeModeHelper_C");
		return ptr;
	}

}


