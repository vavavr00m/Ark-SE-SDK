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
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Clear Local Shared Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::ClearLocalSharedTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Clear Local Shared Target");
		
		ABuff_TekStrider_Radar_C_ClearLocalSharedTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.add shared target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::addsharedtarget(class APrimalCharacter* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.add shared target");
		
		ABuff_TekStrider_Radar_C_addsharedtarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Interval Share Server Target to Rider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::IntervalShareServerTargettoRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Interval Share Server Target to Rider");
		
		ABuff_TekStrider_Radar_C_IntervalShareServerTargettoRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Trigger Held
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::TriggerHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Trigger Held");
		
		ABuff_TekStrider_Radar_C_TriggerHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.TriggerReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::TriggerReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.TriggerReleased");
		
		ABuff_TekStrider_Radar_C_TriggerReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Quicktap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::Quicktap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Quicktap");
		
		ABuff_TekStrider_Radar_C_Quicktap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Only Dinos
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::RadarChangeFiltertoOnlyDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Only Dinos");
		
		ABuff_TekStrider_Radar_C_RadarChangeFiltertoOnlyDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Only Humans
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::RadarChangeFiltertoOnlyHumans()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Only Humans");
		
		ABuff_TekStrider_Radar_C_RadarChangeFiltertoOnlyHumans_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Both Dinos And Humans
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::RadarChangeFiltertoBothDinosAndHumans()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Both Dinos And Humans");
		
		ABuff_TekStrider_Radar_C_RadarChangeFiltertoBothDinosAndHumans_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.find targets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::findtargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.find targets");
		
		ABuff_TekStrider_Radar_C_findtargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Flash Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::FlashTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Flash Target");
		
		ABuff_TekStrider_Radar_C_FlashTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekStrider_Radar_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPClientHandleNetExecCommand");
		
		ABuff_TekStrider_Radar_C_BPClientHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.clear rider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           prevrider                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::clearrider(class AShooterCharacter* prevrider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.clear rider");
		
		ABuff_TekStrider_Radar_C_clearrider_Params params {};
		params.prevrider = prevrider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Highlight latest shared target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::Highlightlatestsharedtarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Highlight latest shared target");
		
		ABuff_TekStrider_Radar_C_Highlightlatestsharedtarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.set rider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::setrider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.set rider");
		
		ABuff_TekStrider_Radar_C_setrider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Restrict Sharing Target Info
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::RestrictSharingTargetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Restrict Sharing Target Info");
		
		ABuff_TekStrider_Radar_C_RestrictSharingTargetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Update Shared Target Location
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::UpdateSharedTargetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Update Shared Target Location");
		
		ABuff_TekStrider_Radar_C_UpdateSharedTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Keep Shared Target Visible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::KeepSharedTargetVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Keep Shared Target Visible");
		
		ABuff_TekStrider_Radar_C_KeepSharedTargetVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Restrict Updating Nearby Teammates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::RestrictUpdatingNearbyTeammates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Restrict Updating Nearby Teammates");
		
		ABuff_TekStrider_Radar_C_RestrictUpdatingNearbyTeammates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_TekStrider_Radar_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPServerHandleNetExecCommand");
		
		ABuff_TekStrider_Radar_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Dino Info HUDElement Desired Location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ListPositionIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::GetDinoInfoHUDElementDesiredLocation(int32_t ListPositionIndex, struct FVector2D* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Dino Info HUDElement Desired Location");
		
		ABuff_TekStrider_Radar_C_GetDinoInfoHUDElementDesiredLocation_Params params {};
		params.ListPositionIndex = ListPositionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Set Container HUDElement Size
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DinoInfoListItemQuantity                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::SetContainerHUDElementSize(int32_t DinoInfoListItemQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Set Container HUDElement Size");
		
		ABuff_TekStrider_Radar_C_SetContainerHUDElementSize_Params params {};
		params.DinoInfoListItemQuantity = DinoInfoListItemQuantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.SetActorStencilValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::SetActorStencilValue(class AActor* Actor, int32_t Value, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.SetActorStencilValue");
		
		ABuff_TekStrider_Radar_C_SetActorStencilValue_Params params {};
		params.Actor = Actor;
		params.Value = Value;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Lowered Rate Of Updating Screenspace Loc Of Radar Hud Elems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::LoweredRateOfUpdatingScreenspaceLocOfRadarHudElems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Lowered Rate Of Updating Screenspace Loc Of Radar Hud Elems");
		
		ABuff_TekStrider_Radar_C_LoweredRateOfUpdatingScreenspaceLocOfRadarHudElems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.update radar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::updateradar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.update radar");
		
		ABuff_TekStrider_Radar_C_updateradar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Can Fire
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fromanimbp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::CanFire(bool fromanimbp, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Can Fire");
		
		ABuff_TekStrider_Radar_C_CanFire_Params params {};
		params.fromanimbp = fromanimbp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BuffTickClient");
		
		ABuff_TekStrider_Radar_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Clear Radar Characters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::ClearRadarCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Clear Radar Characters");
		
		ABuff_TekStrider_Radar_C_ClearRadarCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Delay Before Fadeout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::DelayBeforeFadeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Delay Before Fadeout");
		
		ABuff_TekStrider_Radar_C_DelayBeforeFadeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.OnRep_IsAlertActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::OnRep_IsAlertActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.OnRep_IsAlertActive");
		
		ABuff_TekStrider_Radar_C_OnRep_IsAlertActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Small Creature
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        creature                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSmall                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::IsSmallCreature(class APrimalDinoCharacter* creature, bool* IsSmall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Small Creature");
		
		ABuff_TekStrider_Radar_C_IsSmallCreature_Params params {};
		params.creature = creature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSmall != nullptr)
			*IsSmall = params.IsSmall;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Dino Hostile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FleeingCountsAsHostile                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHostile                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::IsDinoHostile(class APrimalDinoCharacter* Dino, bool FleeingCountsAsHostile, bool* IsHostile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Dino Hostile");
		
		ABuff_TekStrider_Radar_C_IsDinoHostile_Params params {};
		params.Dino = Dino;
		params.FleeingCountsAsHostile = FleeingCountsAsHostile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsHostile != nullptr)
			*IsHostile = params.IsHostile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Classify Scanning Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ScanTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPara_WarningMode                                  WarningMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FleeingCountsAsHostile                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsEnemy                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSmallCreature                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::ClassifyScanningTarget(class AActor* ScanTarget, EPara_WarningMode WarningMode, bool FleeingCountsAsHostile, bool* IsEnemy, bool* IsSmallCreature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Classify Scanning Target");
		
		ABuff_TekStrider_Radar_C_ClassifyScanningTarget_Params params {};
		params.ScanTarget = ScanTarget;
		params.WarningMode = WarningMode;
		params.FleeingCountsAsHostile = FleeingCountsAsHostile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnemy != nullptr)
			*IsEnemy = params.IsEnemy;
		if (IsSmallCreature != nullptr)
			*IsSmallCreature = params.IsSmallCreature;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Nearby Enemies
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekStrider_Radar_C::GetNearbyEnemies(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Nearby Enemies");
		
		ABuff_TekStrider_Radar_C_GetNearbyEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Notify Player About Alert
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::NotifyPlayerAboutAlert(class AShooterCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Notify Player About Alert");
		
		ABuff_TekStrider_Radar_C_NotifyPlayerAboutAlert_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekStrider_Radar_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPGetHUDElements");
		
		ABuff_TekStrider_Radar_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Dino in Cone?
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHitResult>                          Hits                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               IsInCone                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::IsDinoinCone(class APrimalCharacter* Dino, TArray<struct FHitResult>* Hits, bool* IsInCone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Dino in Cone?");
		
		ABuff_TekStrider_Radar_C_IsDinoinCone_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
		if (IsInCone != nullptr)
			*IsInCone = params.IsInCone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Cone Forward
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::GetConeForward(struct FVector* Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Cone Forward");
		
		ABuff_TekStrider_Radar_C_GetConeForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Forward != nullptr)
			*Forward = params.Forward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Cone Origin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     ConeOrigin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::GetConeOrigin(struct FVector* ConeOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Cone Origin");
		
		ABuff_TekStrider_Radar_C_GetConeOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConeOrigin != nullptr)
			*ConeOrigin = params.ConeOrigin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Deactivate Attachment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::DeactivateAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Deactivate Attachment");
		
		ABuff_TekStrider_Radar_C_DeactivateAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Trigger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Trigger");
		
		ABuff_TekStrider_Radar_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPSetupForInstigator");
		
		ABuff_TekStrider_Radar_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.UserConstructionScript");
		
		ABuff_TekStrider_Radar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Timeline_0__FinishedFunc");
		
		ABuff_TekStrider_Radar_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Timeline_0__UpdateFunc");
		
		ABuff_TekStrider_Radar_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Multicast_Activate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::Multicast_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Multicast_Activate");
		
		ABuff_TekStrider_Radar_C_Multicast_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Multicast_Deactivate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::Multicast_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Multicast_Deactivate");
		
		ABuff_TekStrider_Radar_C_Multicast_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.StopAlertTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::StopAlertTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.StopAlertTick");
		
		ABuff_TekStrider_Radar_C_StopAlertTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Fadeout Hud Elem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::FadeoutHudElem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Fadeout Hud Elem");
		
		ABuff_TekStrider_Radar_C_FadeoutHudElem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.multicast toggle shared target
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::multicasttogglesharedtarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.multicast toggle shared target");
		
		ABuff_TekStrider_Radar_C_multicasttogglesharedtarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.MulticastSetHasScannerListSorted
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::MulticastSetHasScannerListSorted(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.MulticastSetHasScannerListSorted");
		
		ABuff_TekStrider_Radar_C_MulticastSetHasScannerListSorted_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.MulticastSetSortedFoundCharacters
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Radar_C::MulticastSetSortedFoundCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.MulticastSetSortedFoundCharacters");
		
		ABuff_TekStrider_Radar_C_MulticastSetSortedFoundCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.ExecuteUbergraph_Buff_TekStrider_Radar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Radar_C::ExecuteUbergraph_Buff_TekStrider_Radar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.ExecuteUbergraph_Buff_TekStrider_Radar");
		
		ABuff_TekStrider_Radar_C_ExecuteUbergraph_Buff_TekStrider_Radar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStrider_Radar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStrider_Radar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_Radar.Buff_TekStrider_Radar_C");
		return ptr;
	}

}


