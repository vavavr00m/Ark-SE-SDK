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
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.Get Extra Taming Effectiveness Modifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ExtraEffectiveness                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::GetExtraTamingEffectivenessModifier(float* ExtraEffectiveness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.Get Extra Taming Effectiveness Modifier");
		
		ABuff_TekWyvernTameRiding_C_GetExtraTamingEffectivenessModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExtraEffectiveness != nullptr)
			*ExtraEffectiveness = params.ExtraEffectiveness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetTimeBasedAlpha
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Alpha                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::GetTimeBasedAlpha(float* Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetTimeBasedAlpha");
		
		ABuff_TekWyvernTameRiding_C_GetTimeBasedAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alpha != nullptr)
			*Alpha = params.Alpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetBuffDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FStatusValueModifierDescription ABuff_TekWyvernTameRiding_C::GetBuffDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetBuffDescription");
		
		ABuff_TekWyvernTameRiding_C_GetBuffDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.DrawActiveStateText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ActiveState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::DrawActiveStateText(int32_t ActiveState, class AShooterHUD* HUD, float XPos, float YPos, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.DrawActiveStateText");
		
		ABuff_TekWyvernTameRiding_C_DrawActiveStateText_Params params {};
		params.ActiveState = ActiveState;
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetActiveTameState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        MyRidingDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            IsInState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::GetActiveTameState(class APrimalDinoCharacter* MyRidingDino, int32_t* IsInState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetActiveTameState");
		
		ABuff_TekWyvernTameRiding_C_GetActiveTameState_Params params {};
		params.MyRidingDino = MyRidingDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInState != nullptr)
			*IsInState = params.IsInState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScaleMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPDrawBuffStatusHUD");
		
		ABuff_TekWyvernTameRiding_C_BPDrawBuffStatusHUD_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BuffTickServer");
		
		ABuff_TekWyvernTameRiding_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekWyvernTameRiding_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPCheckPreventInput");
		
		ABuff_TekWyvernTameRiding_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekWyvernTameRiding_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.UserConstructionScript");
		
		ABuff_TekWyvernTameRiding_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_410
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekWyvernTameRiding_C::InpActEvt_Jump_K2Node_InputActionEvent_410()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_410");
		
		ABuff_TekWyvernTameRiding_C_InpActEvt_Jump_K2Node_InputActionEvent_410_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_409
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekWyvernTameRiding_C::InpActEvt_Use_K2Node_InputActionEvent_409()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_409");
		
		ABuff_TekWyvernTameRiding_C_InpActEvt_Use_K2Node_InputActionEvent_409_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekWyvernTameRiding_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86");
		
		ABuff_TekWyvernTameRiding_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekWyvernTameRiding_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ReceiveBeginPlay");
		
		ABuff_TekWyvernTameRiding_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125");
		
		ABuff_TekWyvernTameRiding_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ServerTameEvent
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekWyvernTameRiding_C::ServerTameEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ServerTameEvent");
		
		ABuff_TekWyvernTameRiding_C_ServerTameEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_58(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58");
		
		ABuff_TekWyvernTameRiding_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_58_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_77(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77");
		
		ABuff_TekWyvernTameRiding_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_77_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ExecuteUbergraph_Buff_TekWyvernTameRiding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvernTameRiding_C::ExecuteUbergraph_Buff_TekWyvernTameRiding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ExecuteUbergraph_Buff_TekWyvernTameRiding");
		
		ABuff_TekWyvernTameRiding_C_ExecuteUbergraph_Buff_TekWyvernTameRiding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekWyvernTameRiding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekWyvernTameRiding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C");
		return ptr;
	}

}


