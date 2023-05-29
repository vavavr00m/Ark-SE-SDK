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
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.GetBuffType
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	int32_t ABuff_FearCourage_C::GetBuffType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GetBuffType");
		
		ABuff_FearCourage_C_GetBuffType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.Process Courage Value
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canSwitch                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               useClientIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              finalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::ProcessCourageValue(float Value, class APrimalCharacter* forCharacter, bool canSwitch, bool useClientIndex, float* finalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Process Courage Value");
		
		ABuff_FearCourage_C_ProcessCourageValue_Params params {};
		params.Value = Value;
		params.forCharacter = forCharacter;
		params.canSwitch = canSwitch;
		params.useClientIndex = useClientIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (finalValue != nullptr)
			*finalValue = params.finalValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.ProcessFearValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canSwitch                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               useClientIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              finalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::ProcessFearValue(float Value, class APrimalCharacter* forCharacter, bool canSwitch, bool useClientIndex, float* finalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ProcessFearValue");
		
		ABuff_FearCourage_C_ProcessFearValue_Params params {};
		params.Value = Value;
		params.forCharacter = forCharacter;
		params.canSwitch = canSwitch;
		params.useClientIndex = useClientIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (finalValue != nullptr)
			*finalValue = params.finalValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.Max Courage ActionsClient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::MaxCourageActionsClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Max Courage ActionsClient");
		
		ABuff_FearCourage_C_MaxCourageActionsClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScaleMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BPDrawBuffStatusHUD");
		
		ABuff_FearCourage_C_BPDrawBuffStatusHUD_Params params {};
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
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.GetBuffDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FStatusValueModifierDescription ABuff_FearCourage_C::GetBuffDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GetBuffDescription");
		
		ABuff_FearCourage_C_GetBuffDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.Add Fear Or CourageClient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amountToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            fearCauser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               switchFromFearToCourageIfNeeded                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFromRoar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::AddFearOrCourageClient(float amountToAdd, bool isFear, class APrimalCharacter* fearCauser, bool switchFromFearToCourageIfNeeded, bool isFromRoar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Add Fear Or CourageClient");
		
		ABuff_FearCourage_C_AddFearOrCourageClient_Params params {};
		params.amountToAdd = amountToAdd;
		params.isFear = isFear;
		params.fearCauser = fearCauser;
		params.switchFromFearToCourageIfNeeded = switchFromFearToCourageIfNeeded;
		params.isFromRoar = isFromRoar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.IsAtMax_f
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               useClientIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Courage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Fear                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::IsAtMax_f(class APrimalCharacter* Character, bool useClientIndex, bool* Courage, bool* Fear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.IsAtMax_f");
		
		ABuff_FearCourage_C_IsAtMax_f_Params params {};
		params.Character = Character;
		params.useClientIndex = useClientIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Courage != nullptr)
			*Courage = params.Courage;
		if (Fear != nullptr)
			*Fear = params.Fear;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.GetTeamColorForParticles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     finalColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::GetTeamColorForParticles(struct FVector* finalColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GetTeamColorForParticles");
		
		ABuff_FearCourage_C_GetTeamColorForParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (finalColor != nullptr)
			*finalColor = params.finalColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.SetMultiplier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        statusValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::SetMultiplier(EPrimalCharacterStatusValue statusValue, int32_t index, bool isFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.SetMultiplier");
		
		ABuff_FearCourage_C_SetMultiplier_Params params {};
		params.statusValue = statusValue;
		params.index = index;
		params.isFear = isFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.isSameTeamOrAlly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            secondTargetingTeam                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            firstTargetingTeamOverride                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAllyOrSameTeam                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::isSameTeamOrAlly(int32_t secondTargetingTeam, int32_t firstTargetingTeamOverride, bool* isAllyOrSameTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.isSameTeamOrAlly");
		
		ABuff_FearCourage_C_isSameTeamOrAlly_Params params {};
		params.secondTargetingTeam = secondTargetingTeam;
		params.firstTargetingTeamOverride = firstTargetingTeamOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isAllyOrSameTeam != nullptr)
			*isAllyOrSameTeam = params.isAllyOrSameTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.CanAddFearOrCourage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanAdd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::CanAddFearOrCourage(bool isFear, bool* CanAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.CanAddFearOrCourage");
		
		ABuff_FearCourage_C_CanAddFearOrCourage_Params params {};
		params.isFear = isFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAdd != nullptr)
			*CanAdd = params.CanAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.UpdateFleePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::UpdateFleePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UpdateFleePoint");
		
		ABuff_FearCourage_C_UpdateFleePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.Send HUDMessage to Rider From Server
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      messageID                                                  (Parm, ZeroConstructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::SendHUDMessagetoRiderFromServer(const class FString& messageID, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Send HUDMessage to Rider From Server");
		
		ABuff_FearCourage_C_SendHUDMessagetoRiderFromServer_Params params {};
		params.messageID = messageID;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_FearCourage_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BPClientHandleNetExecCommand");
		
		ABuff_FearCourage_C_BPClientHandleNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ForPC = ForPC;
		
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
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.ReduceTerror
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::ReduceTerror(float amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ReduceTerror");
		
		ABuff_FearCourage_C_ReduceTerror_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.BPInventoryItemUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InventoryItemObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::BPInventoryItemUsed(class UObject* InventoryItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BPInventoryItemUsed");
		
		ABuff_FearCourage_C_BPInventoryItemUsed_Params params {};
		params.InventoryItemObject = InventoryItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.OnFearAdded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            causer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fearAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::OnFearAdded(class APrimalCharacter* causer, float fearAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnFearAdded");
		
		ABuff_FearCourage_C_OnFearAdded_Params params {};
		params.causer = causer;
		params.fearAmount = fearAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ReceiveDestroyed");
		
		ABuff_FearCourage_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.RestoreVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::RestoreVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.RestoreVariables");
		
		ABuff_FearCourage_C_RestoreVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.ExtendBuffTimeIfNeeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceExtend                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              toDuration                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::ExtendBuffTimeIfNeeded(bool forceExtend, float toDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ExtendBuffTimeIfNeeded");
		
		ABuff_FearCourage_C_ExtendBuffTimeIfNeeded_Params params {};
		params.forceExtend = forceExtend;
		params.toDuration = toDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BuffTickClient");
		
		ABuff_FearCourage_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.CheckDeactivateCondition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::CheckDeactivateCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.CheckDeactivateCondition");
		
		ABuff_FearCourage_C_CheckDeactivateCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_FearCourage_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GetBuffPostprocessIntensity");
		
		ABuff_FearCourage_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.OnDinoDismounted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::OnDinoDismounted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnDinoDismounted");
		
		ABuff_FearCourage_C_OnDinoDismounted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.OnDinoMounted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::OnDinoMounted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnDinoMounted");
		
		ABuff_FearCourage_C_OnDinoMounted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BPDeactivated");
		
		ABuff_FearCourage_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.SendHUDMessageToRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatusValueModifierDescription             Description                                                (Parm)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::SendHUDMessageToRider(const struct FStatusValueModifierDescription& Description, float Scale, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.SendHUDMessageToRider");
		
		ABuff_FearCourage_C_SendHUDMessageToRider_Params params {};
		params.Description = Description;
		params.Scale = Scale;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.TerrorActions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::TerrorActions(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.TerrorActions");
		
		ABuff_FearCourage_C_TerrorActions_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.ActivateUnmountedFlee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::ActivateUnmountedFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ActivateUnmountedFlee");
		
		ABuff_FearCourage_C_ActivateUnmountedFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.ActivateMountedFlee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::ActivateMountedFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ActivateMountedFlee");
		
		ABuff_FearCourage_C_ActivateMountedFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.OnRep_isMounted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::OnRep_isMounted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnRep_isMounted");
		
		ABuff_FearCourage_C_OnRep_isMounted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.UpdateMountedVariable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceUpdate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::UpdateMountedVariable(bool ForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UpdateMountedVariable");
		
		ABuff_FearCourage_C_UpdateMountedVariable_Params params {};
		params.ForceUpdate = ForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.OnCourageRoar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canSwitchToCourage                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              amountOverride                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               useAmountOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               sendMessageToRider                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::OnCourageRoar(bool canSwitchToCourage, float amountOverride, bool useAmountOverride, bool sendMessageToRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnCourageRoar");
		
		ABuff_FearCourage_C_OnCourageRoar_Params params {};
		params.canSwitchToCourage = canSwitchToCourage;
		params.amountOverride = amountOverride;
		params.useAmountOverride = useAmountOverride;
		params.sendMessageToRider = sendMessageToRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.InitializeBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::InitializeBuff(bool isFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InitializeBuff");
		
		ABuff_FearCourage_C_InitializeBuff_Params params {};
		params.isFear = isFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.IncreaseStat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        statusValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalCharacterStatusComponent*             StatusComponent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::IncreaseStat(EPrimalCharacterStatusValue statusValue, int32_t index, class UPrimalCharacterStatusComponent* StatusComponent, float DeltaTime, bool isFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.IncreaseStat");
		
		ABuff_FearCourage_C_IncreaseStat_Params params {};
		params.statusValue = statusValue;
		params.index = index;
		params.StatusComponent = StatusComponent;
		params.DeltaTime = DeltaTime;
		params.isFear = isFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.DrawBuffFloatingHUD");
		
		ABuff_FearCourage_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BuffTickServer");
		
		ABuff_FearCourage_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.Check Terror Condition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            fearCauser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::CheckTerrorCondition(class APrimalCharacter* fearCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Check Terror Condition");
		
		ABuff_FearCourage_C_CheckTerrorCondition_Params params {};
		params.fearCauser = fearCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.On FearRoar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            fearCauser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              amountOverride                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               useAmountOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               switchFromFearToCourageIfNeeded                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               sendMessageToRider                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::OnFearRoar(class APrimalCharacter* fearCauser, float amountOverride, bool useAmountOverride, bool switchFromFearToCourageIfNeeded, bool sendMessageToRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.On FearRoar");
		
		ABuff_FearCourage_C_OnFearRoar_Params params {};
		params.fearCauser = fearCauser;
		params.amountOverride = amountOverride;
		params.useAmountOverride = useAmountOverride;
		params.switchFromFearToCourageIfNeeded = switchFromFearToCourageIfNeeded;
		params.sendMessageToRider = sendMessageToRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.Add FearOrCourage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amountToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            fearCauser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               switchFromFearToCourageIfNeeded                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFromRoar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::AddFearOrCourage(float amountToAdd, bool isFear, class APrimalCharacter* fearCauser, bool switchFromFearToCourageIfNeeded, bool isFromRoar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Add FearOrCourage");
		
		ABuff_FearCourage_C_AddFearOrCourage_Params params {};
		params.amountToAdd = amountToAdd;
		params.isFear = isFear;
		params.fearCauser = fearCauser;
		params.switchFromFearToCourageIfNeeded = switchFromFearToCourageIfNeeded;
		params.isFromRoar = isFromRoar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.Start Terror
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            fearCauser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::StartTerror(class APrimalCharacter* fearCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Start Terror");
		
		ABuff_FearCourage_C_StartTerror_Params params {};
		params.fearCauser = fearCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UserConstructionScript");
		
		ABuff_FearCourage_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_FearCourage_C::DecelerationTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__FinishedFunc");
		
		ABuff_FearCourage_C_DecelerationTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_FearCourage_C::DecelerationTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__UpdateFunc");
		
		ABuff_FearCourage_C_DecelerationTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Fire_K2Node_InputActionEvent_158
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_FearCourage_C::InpActEvt_Fire_K2Node_InputActionEvent_158()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Fire_K2Node_InputActionEvent_158");
		
		ABuff_FearCourage_C_InpActEvt_Fire_K2Node_InputActionEvent_158_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Targeting_K2Node_InputActionEvent_157
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_FearCourage_C::InpActEvt_Targeting_K2Node_InputActionEvent_157()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Targeting_K2Node_InputActionEvent_157");
		
		ABuff_FearCourage_C_InpActEvt_Targeting_K2Node_InputActionEvent_157_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Crouch_K2Node_InputActionEvent_156
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_FearCourage_C::InpActEvt_Crouch_K2Node_InputActionEvent_156()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Crouch_K2Node_InputActionEvent_156");
		
		ABuff_FearCourage_C_InpActEvt_Crouch_K2Node_InputActionEvent_156_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Jump_K2Node_InputActionEvent_155
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_FearCourage_C::InpActEvt_Jump_K2Node_InputActionEvent_155()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Jump_K2Node_InputActionEvent_155");
		
		ABuff_FearCourage_C_InpActEvt_Jump_K2Node_InputActionEvent_155_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ReceiveBeginPlay");
		
		ABuff_FearCourage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.InitializeNonDedi
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::InitializeNonDedi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InitializeNonDedi");
		
		ABuff_FearCourage_C_InitializeNonDedi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.Decelerate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::Decelerate(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Decelerate");
		
		ABuff_FearCourage_C_Decelerate_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.GivePlayerControlAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::GivePlayerControlAfterDelay(class APrimalDinoCharacter* Instigator, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GivePlayerControlAfterDelay");
		
		ABuff_FearCourage_C_GivePlayerControlAfterDelay_Params params {};
		params.Instigator = Instigator;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.UpdatePathingDestination_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     newPathingDestination                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::UpdatePathingDestination_Multicast(const struct FVector& newPathingDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UpdatePathingDestination_Multicast");
		
		ABuff_FearCourage_C_UpdatePathingDestination_Multicast_Params params {};
		params.newPathingDestination = newPathingDestination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.EmitPoopAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::EmitPoopAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.EmitPoopAfterDelay");
		
		ABuff_FearCourage_C_EmitPoopAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::UnrollDoed_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed_Multicast");
		
		ABuff_FearCourage_C_UnrollDoed_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.SetParticlesColorByTeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::SetParticlesColorByTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.SetParticlesColorByTeam");
		
		ABuff_FearCourage_C_SetParticlesColorByTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::UnrollDoed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed");
		
		ABuff_FearCourage_C_UnrollDoed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoedIfNeeded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::UnrollDoedIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoedIfNeeded");
		
		ABuff_FearCourage_C_UnrollDoedIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.InitializeCircleParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FearCourage_C::InitializeCircleParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InitializeCircleParticles");
		
		ABuff_FearCourage_C_InitializeCircleParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FearCourage.Buff_FearCourage_C.ExecuteUbergraph_Buff_FearCourage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FearCourage_C::ExecuteUbergraph_Buff_FearCourage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ExecuteUbergraph_Buff_FearCourage");
		
		ABuff_FearCourage_C_ExecuteUbergraph_Buff_FearCourage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_FearCourage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_FearCourage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FearCourage.Buff_FearCourage_C");
		return ptr;
	}

}


