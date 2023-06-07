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
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.safely release carried character
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               skipclearingcall                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            overriddensetcharacter                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::safelyreleasecarriedcharacter(bool skipclearingcall, class APrimalCharacter* overriddensetcharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.safely release carried character");
		
		ATekHoverSkiff_Character_BP_C_safelyreleasecarriedcharacter_Params params {};
		params.skipclearingcall = skipclearingcall;
		params.overriddensetcharacter = overriddensetcharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Closest Beam Location Not Blocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DidHit                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               linetracehit                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               boxtracehit                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               keepmomentumuponrelease                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetClosestBeamLocationNotBlocked(const struct FVector& End, const struct FVector& Offset, struct FVector* Location, bool* DidHit, bool* linetracehit, bool* boxtracehit, bool* keepmomentumuponrelease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Closest Beam Location Not Blocked");
		
		ATekHoverSkiff_Character_BP_C_GetClosestBeamLocationNotBlocked_Params params {};
		params.End = End;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (DidHit != nullptr)
			*DidHit = params.DidHit;
		if (linetracehit != nullptr)
			*linetracehit = params.linetracehit;
		if (boxtracehit != nullptr)
			*boxtracehit = params.boxtracehit;
		if (keepmomentumuponrelease != nullptr)
			*keepmomentumuponrelease = params.keepmomentumuponrelease;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ModifySkiffHorizontalInputs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewInput                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::ModifySkiffHorizontalInputs(const struct FVector& Input, struct FVector* NewInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ModifySkiffHorizontalInputs");
		
		ATekHoverSkiff_Character_BP_C_ModifySkiffHorizontalInputs_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewInput != nullptr)
			*NewInput = params.NewInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentHoverFloorZ
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bUseAverage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bValidFloor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FloorZ                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetCurrentHoverFloorZ(bool bUseAverage, bool* bValidFloor, float* FloorZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentHoverFloorZ");
		
		ATekHoverSkiff_Character_BP_C_GetCurrentHoverFloorZ_Params params {};
		params.bUseAverage = bUseAverage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidFloor != nullptr)
			*bValidFloor = params.bValidFloor;
		if (FloorZ != nullptr)
			*FloorZ = params.FloorZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio_PURE
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bAdjustWithMax                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetHoverSlopeDeltaRatio_PURE(bool bAdjustWithMax, float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio_PURE");
		
		ATekHoverSkiff_Character_BP_C_GetHoverSlopeDeltaRatio_PURE_Params params {};
		params.bAdjustWithMax = bAdjustWithMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAdjustWithMax                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetHoverSlopeDeltaRatio(bool bAdjustWithMax, float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio");
		
		ATekHoverSkiff_Character_BP_C_GetHoverSlopeDeltaRatio_Params params {};
		params.bAdjustWithMax = bAdjustWithMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoHoverSlopeCheck
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::DoHoverSlopeCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoHoverSlopeCheck");
		
		ATekHoverSkiff_Character_BP_C_DoHoverSlopeCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanCryo");
		
		ATekHoverSkiff_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairModeCooldownActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPost                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RemainingTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsSkiffRepairModeCooldownActive(bool* bResult, bool* bIsPost, float* RemainingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairModeCooldownActive");
		
		ATekHoverSkiff_Character_BP_C_IsSkiffRepairModeCooldownActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (bIsPost != nullptr)
			*bIsPost = params.bIsPost;
		if (RemainingTime != nullptr)
			*RemainingTime = params.RemainingTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairDisabledFromDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RemainingTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsSkiffRepairDisabledFromDamage(bool* bResult, float* RemainingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairDisabledFromDamage");
		
		ATekHoverSkiff_Character_BP_C_IsSkiffRepairDisabledFromDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (RemainingTime != nullptr)
			*RemainingTime = params.RemainingTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAcknowledgeServerCorrection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeStamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewVel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         NewBase                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewBaseBoneName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHasBase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBaseRelativePosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      ServerMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPAcknowledgeServerCorrection(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAcknowledgeServerCorrection");
		
		ATekHoverSkiff_Character_BP_C_BPAcknowledgeServerCorrection_Params params {};
		params.TimeStamp = TimeStamp;
		params.NewLoc = NewLoc;
		params.NewVel = NewVel;
		params.NewBase = NewBase;
		params.NewBaseBoneName = NewBaseBoneName;
		params.bHasBase = bHasBase;
		params.bBaseRelativePosition = bBaseRelativePosition;
		params.ServerMovementMode = ServerMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStopJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPOnStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStopJump");
		
		ATekHoverSkiff_Character_BP_C_BPOnStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStartJump");
		
		ATekHoverSkiff_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyToggleHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHudHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPNotifyToggleHUD(bool bHudHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyToggleHUD");
		
		ATekHoverSkiff_Character_BP_C_BPNotifyToggleHUD_Params params {};
		params.bHudHidden = bHudHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateTotalAlternateFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TotalAltFuel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CalculateTotalAlternateFuel(float* TotalAltFuel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateTotalAlternateFuel");
		
		ATekHoverSkiff_Character_BP_C_CalculateTotalAlternateFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalAltFuel != nullptr)
			*TotalAltFuel = params.TotalAltFuel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetRepairModeHudMessage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, OutParm, ZeroConstructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetRepairModeHudMessage(class FString* Message, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetRepairModeHudMessage");
		
		ATekHoverSkiff_Character_BP_C_GetRepairModeHudMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageDamageFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ManageDamageFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageDamageFX");
		
		ATekHoverSkiff_Character_BP_C_Tick_ManageDamageFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetCachedLandedRootRotationOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::NetSetCachedLandedRootRotationOffset(const struct FRotator& NewOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetCachedLandedRootRotationOffset");
		
		ATekHoverSkiff_Character_BP_C_NetSetCachedLandedRootRotationOffset_Params params {};
		params.NewOffset = NewOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnRemovedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RemovedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BP_OnBasedPawnRemovedNotify(class AActor* RemovedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnRemovedNotify");
		
		ATekHoverSkiff_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params params {};
		params.RemovedActor = RemovedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnAddedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AddedActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BP_OnBasedPawnAddedNotify(class AActor* AddedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnAddedNotify");
		
		ATekHoverSkiff_Character_BP_C_BP_OnBasedPawnAddedNotify_Params params {};
		params.AddedActor = AddedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetFuelConversionRateForClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ForClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetFuelConversionRateForClass(class UClass* ForClass, float* Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetFuelConversionRateForClass");
		
		ATekHoverSkiff_Character_BP_C_GetFuelConversionRateForClass_Params params {};
		params.ForClass = ForClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rate != nullptr)
			*Rate = params.Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffRepairModeStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffRepairModeStateChanged(bool bNewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffRepairModeStateChanged");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffRepairModeStateChanged_Params params {};
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffRepairModeActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::NetSetSkiffRepairModeActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffRepairModeActive");
		
		ATekHoverSkiff_Character_BP_C_NetSetSkiffRepairModeActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffUseRepairMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanSkiffUseRepairMode(bool bForStart, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffUseRepairMode");
		
		ATekHoverSkiff_Character_BP_C_CanSkiffUseRepairMode_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTryMultiUse");
		
		ATekHoverSkiff_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Repair Mode Hud Message_PURE
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, OutParm, ZeroConstructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetRepairModeHudMessage_PURE(class FString* Message, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Repair Mode Hud Message_PURE");
		
		ATekHoverSkiff_Character_BP_C_GetRepairModeHudMessage_PURE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintDrawFloatingHUD");
		
		ATekHoverSkiff_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ATekHoverSkiff_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetMultiUseEntries");
		
		ATekHoverSkiff_Character_BP_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageAutoRepair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ManageAutoRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageAutoRepair");
		
		ATekHoverSkiff_Character_BP_C_Tick_ManageAutoRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ForceAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BP_ForceAllowAddBuff(class UClass* BuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ForceAllowAddBuff");
		
		ATekHoverSkiff_Character_BP_C_BP_ForceAllowAddBuff_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BlueprintPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintPlayDying");
		
		ATekHoverSkiff_Character_BP_C_BlueprintPlayDying_Params params {};
		params.KillingDamage = KillingDamage;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharAttachedToSkiffMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsCharAttachedToSkiffMesh(class APrimalCharacter* forChar, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharAttachedToSkiffMesh");
		
		ATekHoverSkiff_Character_BP_C_IsCharAttachedToSkiffMesh_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideCarriedCharacterTransform
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForCarriedChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BP_OverrideCarriedCharacterTransform(class APrimalCharacter* ForCarriedChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideCarriedCharacterTransform");
		
		ATekHoverSkiff_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params params {};
		params.ForCarriedChar = ForCarriedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiffHudWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDestroyNow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::DestroySkiffHudWidget(bool bDestroyNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiffHudWidget");
		
		ATekHoverSkiff_Character_BP_C_DestroySkiffHudWidget_Params params {};
		params.bDestroyNow = bDestroyNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPServerHandleNetExecCommand");
		
		ATekHoverSkiff_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCameraCeilingZ
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CeilingZ                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetBeamCameraCeilingZ(float* CeilingZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCameraCeilingZ");
		
		ATekHoverSkiff_Character_BP_C_GetBeamCameraCeilingZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CeilingZ != nullptr)
			*CeilingZ = params.CeilingZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanFireBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanFireBeam(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanFireBeam");
		
		ATekHoverSkiff_Character_BP_C_CanFireBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ConsumeFuel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MulticastFuel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::ConsumeFuel(float amount, bool MulticastFuel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ConsumeFuel");
		
		ATekHoverSkiff_Character_BP_C_ConsumeFuel_Params params {};
		params.amount = amount;
		params.MulticastFuel = MulticastFuel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasEnoughFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RequiredFuel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::HasEnoughFuel(float RequiredFuel, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasEnoughFuel");
		
		ATekHoverSkiff_Character_BP_C_HasEnoughFuel_Params params {};
		params.RequiredFuel = RequiredFuel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryRefillCurrentFuelUnit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::TryRefillCurrentFuelUnit(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryRefillCurrentFuelUnit");
		
		ATekHoverSkiff_Character_BP_C_TryRefillCurrentFuelUnit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasAnyFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentFuel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::HasAnyFuel(bool* bResult, float* CurrentFuel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasAnyFuel");
		
		ATekHoverSkiff_Character_BP_C_HasAnyFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (CurrentFuel != nullptr)
			*CurrentFuel = params.CurrentFuel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPInventoryItemDropped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InventoryItemObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPInventoryItemDropped(class UObject* InventoryItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPInventoryItemDropped");
		
		ATekHoverSkiff_Character_BP_C_BPInventoryItemDropped_Params params {};
		params.InventoryItemObject = InventoryItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyInventoryItemChange");
		
		ATekHoverSkiff_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffInventoryUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 UpdatedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffInventoryUpdated(class UPrimalItem* UpdatedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffInventoryUpdated");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffInventoryUpdated_Params params {};
		params.UpdatedItem = UpdatedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPSetupTamed");
		
		ATekHoverSkiff_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DisableLevelUps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::DisableLevelUps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DisableLevelUps");
		
		ATekHoverSkiff_Character_BP_C_DisableLevelUps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BSetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::BSetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BSetupDinoTameable");
		
		ATekHoverSkiff_Character_BP_C_BSetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ShowDropDinoIndicator
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ShowDropDinoIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ShowDropDinoIndicator");
		
		ATekHoverSkiff_Character_BP_C_Tick_ShowDropDinoIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetupSkiffThrusters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::SetupSkiffThrusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetupSkiffThrusters");
		
		ATekHoverSkiff_Character_BP_C_SetupSkiffThrusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffAcceleration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetSkiffAcceleration(struct FVector* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffAcceleration");
		
		ATekHoverSkiff_Character_BP_C_GetSkiffAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateSkiffThruster
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_HoverSkiffThrusterData              WithThrusterData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            DataIntex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_UpdateSkiffThruster(struct FStruct_HoverSkiffThrusterData* WithThrusterData, int32_t DataIntex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateSkiffThruster");
		
		ATekHoverSkiff_Character_BP_C_Tick_UpdateSkiffThruster_Params params {};
		params.DataIntex = DataIntex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithThrusterData != nullptr)
			*WithThrusterData = params.WithThrusterData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeamSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_UpdateBeamSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeamSFX");
		
		ATekHoverSkiff_Character_BP_C_Tick_UpdateBeamSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsValidHoverTraceHit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ForHit                                                     (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsValidHoverTraceHit(struct FHitResult* ForHit, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsValidHoverTraceHit");
		
		ATekHoverSkiff_Character_BP_C_IsValidHoverTraceHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForHit != nullptr)
			*ForHit = params.ForHit;
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRunning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsSkiffRunning(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRunning");
		
		ATekHoverSkiff_Character_BP_C_IsSkiffRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoesSkiffWantToRun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::DoesSkiffWantToRun(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoesSkiffWantToRun");
		
		ATekHoverSkiff_Character_BP_C_DoesSkiffWantToRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnSetRunning
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsRunning                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BP_OnSetRunning(bool bNewIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnSetRunning");
		
		ATekHoverSkiff_Character_BP_C_BP_OnSetRunning_Params params {};
		params.bNewIsRunning = bNewIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetCurrentBeamChar_(class APrimalCharacter** Char)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_");
		
		ATekHoverSkiff_Character_BP_C_GetCurrentBeamChar__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Char != nullptr)
			*Char = params.Char;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnTriedBeamGrab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnTriedBeamGrab(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnTriedBeamGrab");
		
		ATekHoverSkiff_Character_BP_C_OnTriedBeamGrab_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AttachCharToBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CharToAttach                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::AttachCharToBeam(class APrimalCharacter* CharToAttach, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AttachCharToBeam");
		
		ATekHoverSkiff_Character_BP_C_AttachCharToBeam_Params params {};
		params.CharToAttach = CharToAttach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryBeamGrab
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::TryBeamGrab(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryBeamGrab");
		
		ATekHoverSkiff_Character_BP_C_TryBeamGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetBeam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::ResetBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetBeam");
		
		ATekHoverSkiff_Character_BP_C_ResetBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanActivateBeamCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanActivateBeamCamera(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanActivateBeamCamera");
		
		ATekHoverSkiff_Character_BP_C_CanActivateBeamCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnReceiveSkiff2dMovementInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InputAxisVal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bright                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShouldIntercept                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnReceiveSkiff2dMovementInput(float InputAxisVal, bool bright, bool* bShouldIntercept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnReceiveSkiff2dMovementInput");
		
		ATekHoverSkiff_Character_BP_C_OnReceiveSkiff2dMovementInput_Params params {};
		params.InputAxisVal = InputAxisVal;
		params.bright = bright;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldIntercept != nullptr)
			*bShouldIntercept = params.bShouldIntercept;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseHeadlights
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanUseHeadlights(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseHeadlights");
		
		ATekHoverSkiff_Character_BP_C_CanUseHeadlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanBeBaseForCharacter");
		
		ATekHoverSkiff_Character_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSkiff_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardDirection");
		
		ATekHoverSkiff_Character_BP_C_BPGetRiderUnboardDirection_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSkiff_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardLocation");
		
		ATekHoverSkiff_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanHover
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanHover(bool bForStart, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanHover");
		
		ATekHoverSkiff_Character_BP_C_CanHover_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnTamedOrderReceived
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnTamedOrderReceived");
		
		ATekHoverSkiff_Character_BP_C_BP_OnTamedOrderReceived_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.WantsToFlyUp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::WantsToFlyUp(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.WantsToFlyUp");
		
		ATekHoverSkiff_Character_BP_C_WantsToFlyUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ShouldDisableBasedCharactersCameraInterpolation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForBasedChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BP_ShouldDisableBasedCharactersCameraInterpolation(class APrimalCharacter* ForBasedChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ShouldDisableBasedCharactersCameraInterpolation");
		
		ATekHoverSkiff_Character_BP_C_BP_ShouldDisableBasedCharactersCameraInterpolation_Params params {};
		params.ForBasedChar = ForBasedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamCharManipulation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::UpdateBeamCharManipulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamCharManipulation");
		
		ATekHoverSkiff_Character_BP_C_UpdateBeamCharManipulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_CheckSkiffInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_CheckSkiffInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_CheckSkiffInputs");
		
		ATekHoverSkiff_Character_BP_C_Tick_CheckSkiffInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSyncedFuelAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::UpdateSyncedFuelAmount(bool* bWasChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSyncedFuelAmount");
		
		ATekHoverSkiff_Character_BP_C_UpdateSyncedFuelAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bWasChanged != nullptr)
			*bWasChanged = params.bWasChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffBlockersTraceIgnoreActors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              IgnoreActors                                               (Parm, OutParm, ZeroConstructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetSkiffBlockersTraceIgnoreActors(TArray<class AActor*>* IgnoreActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffBlockersTraceIgnoreActors");
		
		ATekHoverSkiff_Character_BP_C_GetSkiffBlockersTraceIgnoreActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IgnoreActors != nullptr)
			*IgnoreActors = params.IgnoreActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageSkiffCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ManageSkiffCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageSkiffCamera");
		
		ATekHoverSkiff_Character_BP_C_Tick_ManageSkiffCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideBasedCharactersCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForBasedChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVCameraSpeedInterpMultiplier                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpMultiplier                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BP_OverrideBasedCharactersCameraInterpSpeed(class APrimalCharacter* ForBasedChar, float DefaultTPVCameraSpeedInterpMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideBasedCharactersCameraInterpSpeed");
		
		ATekHoverSkiff_Character_BP_C_BP_OverrideBasedCharactersCameraInterpSpeed_Params params {};
		params.ForBasedChar = ForBasedChar;
		params.DefaultTPVCameraSpeedInterpMultiplier = DefaultTPVCameraSpeedInterpMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpMultiplier != nullptr)
			*TPVCameraSpeedInterpMultiplier = params.TPVCameraSpeedInterpMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsPhysicsVolumeLava
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APhysicsVolume*                              CheckVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLava                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsPhysicsVolumeLava(class APhysicsVolume* CheckVolume, bool* bIsLava)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsPhysicsVolumeLava");
		
		ATekHoverSkiff_Character_BP_C_IsPhysicsVolumeLava_Params params {};
		params.CheckVolume = CheckVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLava != nullptr)
			*bIsLava = params.bIsLava;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffTryToTrulyLand
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithFlyingVelocity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanSkiffTryToTrulyLand(const struct FVector& WithFlyingVelocity, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffTryToTrulyLand");
		
		ATekHoverSkiff_Character_BP_C_CanSkiffTryToTrulyLand_Params params {};
		params.WithFlyingVelocity = WithFlyingVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandFailed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ReasonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BP_OnStartLandFailed(int32_t ReasonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandFailed");
		
		ATekHoverSkiff_Character_BP_C_BP_OnStartLandFailed_Params params {};
		params.ReasonIndex = ReasonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetSkiffInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::ResetSkiffInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetSkiffInputs");
		
		ATekHoverSkiff_Character_BP_C_ResetSkiffInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InitHeadlights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::InitHeadlights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InitHeadlights");
		
		ATekHoverSkiff_Character_BP_C_InitHeadlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ActivateSkiffBeamVfxByState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffBeamState                              NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::ActivateSkiffBeamVfxByState(E_HoverSkiffBeamState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ActivateSkiffBeamVfxByState");
		
		ATekHoverSkiff_Character_BP_C_ActivateSkiffBeamVfxByState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageBeamFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForceClearAll                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ManageBeamFX(bool bForceClearAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageBeamFX");
		
		ATekHoverSkiff_Character_BP_C_Tick_ManageBeamFX_Params params {};
		params.bForceClearAll = bForceClearAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetCurrentBeamChar_Pure(class APrimalCharacter** Char)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_Pure");
		
		ATekHoverSkiff_Character_BP_C_GetCurrentBeamChar_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Char != nullptr)
			*Char = params.Char;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetEnvironmentalParticleTraceDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ForSocketName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              traceDist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetEnvironmentalParticleTraceDistance(const class FName& ForSocketName, float* traceDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetEnvironmentalParticleTraceDistance");
		
		ATekHoverSkiff_Character_BP_C_GetEnvironmentalParticleTraceDistance_Params params {};
		params.ForSocketName = ForSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceDist != nullptr)
			*traceDist = params.traceDist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveDestroyed");
		
		ATekHoverSkiff_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageHoverGroundFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ManageHoverGroundFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageHoverGroundFX");
		
		ATekHoverSkiff_Character_BP_C_Tick_ManageHoverGroundFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateHeadlights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_UpdateHeadlights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateHeadlights");
		
		ATekHoverSkiff_Character_BP_C_Tick_UpdateHeadlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetHeadlightsOn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::SetHeadlightsOn(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetHeadlightsOn");
		
		ATekHoverSkiff_Character_BP_C_SetHeadlightsOn_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ToggleHeadlights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::ToggleHeadlights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ToggleHeadlights");
		
		ATekHoverSkiff_Character_BP_C_ToggleHeadlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffFailedTakeoff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffFailedTakeoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffFailedTakeoff");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffFailedTakeoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AllowSkiffBeamInputs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAllow                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::AllowSkiffBeamInputs(bool* bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AllowSkiffBeamInputs");
		
		ATekHoverSkiff_Character_BP_C_AllowSkiffBeamInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAllow != nullptr)
			*bAllow = params.bAllow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTargetHoverHeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::SetTargetHoverHeight(float NewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTargetHoverHeight");
		
		ATekHoverSkiff_Character_BP_C_SetTargetHoverHeight_Params params {};
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSkiffHoverState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::UpdateSkiffHoverState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSkiffHoverState");
		
		ATekHoverSkiff_Character_BP_C_UpdateSkiffHoverState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffHoverStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffHoverState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_HoverSkiffHoverState                             PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffHoverStateChanged(E_HoverSkiffHoverState NewState, E_HoverSkiffHoverState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffHoverStateChanged");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffHoverStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffHoverState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffHoverState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::NetSetSkiffHoverState(E_HoverSkiffHoverState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffHoverState");
		
		ATekHoverSkiff_Character_BP_C_NetSetSkiffHoverState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekHoverSkiff_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ATekHoverSkiff_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamCharBlockers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::TraceForBeamCharBlockers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamCharBlockers");
		
		ATekHoverSkiff_Character_BP_C_TraceForBeamCharBlockers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetMinHoverHeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MinHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetMinHoverHeight(float* MinHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetMinHoverHeight");
		
		ATekHoverSkiff_Character_BP_C_GetMinHoverHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinHeight != nullptr)
			*MinHeight = params.MinHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffChangingHoverHeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsSkiffChangingHoverHeight(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffChangingHoverHeight");
		
		ATekHoverSkiff_Character_BP_C_IsSkiffChangingHoverHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCharGrabOffsetZ
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              OffsetZ                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetBeamCharGrabOffsetZ(float* OffsetZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCharGrabOffsetZ");
		
		ATekHoverSkiff_Character_BP_C_GetBeamCharGrabOffsetZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OffsetZ != nullptr)
			*OffsetZ = params.OffsetZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartedGrabbingChar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamStartedGrabbingChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartedGrabbingChar");
		
		ATekHoverSkiff_Character_BP_C_OnBeamStartedGrabbingChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_CanFly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSkiff_Character_BP_C::BP_CanFly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_CanFly");
		
		ATekHoverSkiff_Character_BP_C_BP_CanFly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamEndPoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::UpdateBeamEndPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamEndPoint");
		
		ATekHoverSkiff_Character_BP_C_UpdateBeamEndPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_UpdateBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeam");
		
		ATekHoverSkiff_Character_BP_C_Tick_UpdateBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageFuel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ManageFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageFuel");
		
		ATekHoverSkiff_Character_BP_C_Tick_ManageFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetHUDElements");
		
		ATekHoverSkiff_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharStruggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamCharStruggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharStruggle");
		
		ATekHoverSkiff_Character_BP_C_OnBeamCharStruggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharBreakFree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamCharBreakFree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharBreakFree");
		
		ATekHoverSkiff_Character_BP_C_OnBeamCharBreakFree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveAnyDamage");
		
		ATekHoverSkiff_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideTerminalVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekHoverSkiff_Character_BP_C::BP_OverrideTerminalVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideTerminalVelocity");
		
		ATekHoverSkiff_Character_BP_C_BP_OverrideTerminalVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoThrusterEngineBurst
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UParticleSystemComponent*>            ForThrusterParticles                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UParticleSystem*                             OverrideBurstParticle                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventAutoScaling                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundCue*                                   OverrideBurstSound                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   OverrideVolumeAndPitch                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::DoThrusterEngineBurst(TArray<class UParticleSystemComponent*>* ForThrusterParticles, class UParticleSystem* OverrideBurstParticle, bool bPreventAutoScaling, class USoundCue* OverrideBurstSound, const struct FVector2D& OverrideVolumeAndPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoThrusterEngineBurst");
		
		ATekHoverSkiff_Character_BP_C_DoThrusterEngineBurst_Params params {};
		params.OverrideBurstParticle = OverrideBurstParticle;
		params.bPreventAutoScaling = bPreventAutoScaling;
		params.OverrideBurstSound = OverrideBurstSound;
		params.OverrideVolumeAndPitch = OverrideVolumeAndPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForThrusterParticles != nullptr)
			*ForThrusterParticles = params.ForThrusterParticles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.KillSkiff
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::KillSkiff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.KillSkiff");
		
		ATekHoverSkiff_Character_BP_C_KillSkiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffCrash
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromImpact                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffCrash(bool bFromImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffCrash");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffCrash_Params params {};
		params.bFromImpact = bFromImpact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_PreventMovementMode");
		
		ATekHoverSkiff_Character_BP_C_BP_PreventMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_Crashing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_Crashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_Crashing");
		
		ATekHoverSkiff_Character_BP_C_Tick_Crashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffStartedCrashing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffStartedCrashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffStartedCrashing");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffStartedCrashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ATekHoverSkiff_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAdjustDamage");
		
		ATekHoverSkiff_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifySetRider");
		
		ATekHoverSkiff_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCameraActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::SetBeamCameraActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCameraActive");
		
		ATekHoverSkiff_Character_BP_C_SetBeamCameraActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartMoving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamStartMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartMoving");
		
		ATekHoverSkiff_Character_BP_C_OnBeamStartMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartRetracting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamStartRetracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartRetracting");
		
		ATekHoverSkiff_Character_BP_C_OnBeamStartRetracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamTurretOpened
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamTurretOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamTurretOpened");
		
		ATekHoverSkiff_Character_BP_C_OnBeamTurretOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartOpeningBeam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnStartOpeningBeam(bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartOpeningBeam");
		
		ATekHoverSkiff_Character_BP_C_OnStartOpeningBeam_Params params {};
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateOwningClientReplicatedInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::UpdateOwningClientReplicatedInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateOwningClientReplicatedInputs");
		
		ATekHoverSkiff_Character_BP_C_UpdateOwningClientReplicatedInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetSkiffMovementInputAxisValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Newval                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::SetSkiffMovementInputAxisValue(int32_t Axis, float Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetSkiffMovementInputAxisValue");
		
		ATekHoverSkiff_Character_BP_C_SetSkiffMovementInputAxisValue_Params params {};
		params.Axis = Axis;
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamLocked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamLocked");
		
		ATekHoverSkiff_Character_BP_C_OnBeamLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPointRelative
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LaserEndPoint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetBeamEndPointRelative(struct FVector* LaserEndPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPointRelative");
		
		ATekHoverSkiff_Character_BP_C_GetBeamEndPointRelative_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaserEndPoint != nullptr)
			*LaserEndPoint = params.LaserEndPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamStartPointRelative
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bAdjustForCarriedChar                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LaserStartPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetBeamStartPointRelative(bool bAdjustForCarriedChar, struct FVector* LaserStartPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamStartPointRelative");
		
		ATekHoverSkiff_Character_BP_C_GetBeamStartPointRelative_Params params {};
		params.bAdjustForCarriedChar = bAdjustForCarriedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaserStartPoint != nullptr)
			*LaserStartPoint = params.LaserStartPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamGrabbedChar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     GrabbedCharLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamGrabbedChar(const struct FVector& GrabbedCharLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamGrabbedChar");
		
		ATekHoverSkiff_Character_BP_C_OnBeamGrabbedChar_Params params {};
		params.GrabbedCharLocation = GrabbedCharLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAllowCarryCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            checkCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter* checkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAllowCarryCharacter");
		
		ATekHoverSkiff_Character_BP_C_BPAllowCarryCharacter_Params params {};
		params.checkCharacter = checkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidClearCarriedCharacter");
		
		ATekHoverSkiff_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidSetCarriedCharacter");
		
		ATekHoverSkiff_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamBeingManipulated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsBeamMoving                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsBeamBeingManipulated(bool* IsBeamMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamBeingManipulated");
		
		ATekHoverSkiff_Character_BP_C_IsBeamBeingManipulated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBeamMoving != nullptr)
			*IsBeamMoving = params.IsBeamMoving;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveRight");
		
		ATekHoverSkiff_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveForward");
		
		ATekHoverSkiff_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsMovingAllyWithBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsMovingAllyWithBeam(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsMovingAllyWithBeam");
		
		ATekHoverSkiff_Character_BP_C_IsMovingAllyWithBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyRightDirectionInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     directionInput                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSkiff_Character_BP_C::BPModifyRightDirectionInput(struct FVector* directionInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyRightDirectionInput");
		
		ATekHoverSkiff_Character_BP_C_BPModifyRightDirectionInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (directionInput != nullptr)
			*directionInput = params.directionInput;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitRightDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPShouldLimitRightDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitRightDirection");
		
		ATekHoverSkiff_Character_BP_C_BPShouldLimitRightDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_AllowWalkableSlopeOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ForComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BP_AllowWalkableSlopeOverride(class UPrimitiveComponent* ForComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_AllowWalkableSlopeOverride");
		
		ATekHoverSkiff_Character_BP_C_BP_AllowWalkableSlopeOverride_Params params {};
		params.ForComponent = ForComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnMovementModeChangedNotify");
		
		ATekHoverSkiff_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageThrusterFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ManageThrusterFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageThrusterFX");
		
		ATekHoverSkiff_Character_BP_C_Tick_ManageThrusterFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetThrustersActive
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::SetThrustersActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetThrustersActive");
		
		ATekHoverSkiff_Character_BP_C_SetThrustersActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffSetFlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFly                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffSetFlight(bool bFly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffSetFlight");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffSetFlight_Params params {};
		params.bFly = bFly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnSetFlight
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFly                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPOnSetFlight(bool bFly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnSetFlight");
		
		ATekHoverSkiff_Character_BP_C_BPOnSetFlight_Params params {};
		params.bFly = bFly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSelfMoved                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ATekHoverSkiff_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveHit");
		
		ATekHoverSkiff_Character_BP_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoSkiffHoverTraces
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForceTraces                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::DoSkiffHoverTraces(bool bForceTraces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoSkiffHoverTraces");
		
		ATekHoverSkiff_Character_BP_C_DoSkiffHoverTraces_Params params {};
		params.bForceTraces = bForceTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ATekHoverSkiff_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnLanded");
		
		ATekHoverSkiff_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffLandingStageChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLanding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffLandingStageChanged(bool bLanding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffLandingStageChanged");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffLandingStageChanged_Params params {};
		params.bLanding = bLanding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandingNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::BP_OnStartLandingNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandingNotify");
		
		ATekHoverSkiff_Character_BP_C_BP_OnStartLandingNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharBeamFriendly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsCharBeamFriendly(class APrimalCharacter* forChar, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharBeamFriendly");
		
		ATekHoverSkiff_Character_BP_C_IsCharBeamFriendly_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartClosingBeamTurret
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnStartClosingBeamTurret()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartClosingBeamTurret");
		
		ATekHoverSkiff_Character_BP_C_OnStartClosingBeamTurret_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSendInputRPC
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanSendInputRPC(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSendInputRPC");
		
		ATekHoverSkiff_Character_BP_C_CanSendInputRPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffBeamStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffBeamState                              NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_HoverSkiffBeamState                              PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::OnSkiffBeamStateChanged(E_HoverSkiffBeamState NewState, E_HoverSkiffBeamState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffBeamStateChanged");
		
		ATekHoverSkiff_Character_BP_C_OnSkiffBeamStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffBeamState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffBeamState                              NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::NetSetSkiffBeamState(E_HoverSkiffBeamState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffBeamState");
		
		ATekHoverSkiff_Character_BP_C_NetSetSkiffBeamState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CurrentCameraMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DesiredCameraLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraRotation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DesiredFOV                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraRotation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraFOV                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraFOV                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideCameraViewTarget");
		
		ATekHoverSkiff_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
		params.CurrentCameraMode = CurrentCameraMode;
		params.DesiredCameraLocation = DesiredCameraLocation;
		params.DesiredCameraRotation = DesiredCameraRotation;
		params.DesiredFOV = DesiredFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverrideCameraLocation != nullptr)
			*bOverrideCameraLocation = params.bOverrideCameraLocation;
		if (CameraLocation != nullptr)
			*CameraLocation = params.CameraLocation;
		if (bOverrideCameraRotation != nullptr)
			*bOverrideCameraRotation = params.bOverrideCameraRotation;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
		if (bOverrideCameraFOV != nullptr)
			*bOverrideCameraFOV = params.bOverrideCameraFOV;
		if (CameraFOV != nullptr)
			*CameraFOV = params.CameraFOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsRetractBeamPressed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsRetractBeamPressed(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsRetractBeamPressed");
		
		ATekHoverSkiff_Character_BP_C_IsRetractBeamPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsShootBeamPressed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsShootBeamPressed(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsShootBeamPressed");
		
		ATekHoverSkiff_Character_BP_C_IsShootBeamPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		ATekHoverSkiff_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
		params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpolationMultiplier != nullptr)
			*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekHoverSkiff_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		ATekHoverSkiff_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideFlyingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSkiff_Character_BP_C::BPOverrideFlyingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideFlyingVelocity");
		
		ATekHoverSkiff_Character_BP_C_BPOverrideFlyingVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ATekHoverSkiff_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetCrosshairColor");
		
		ATekHoverSkiff_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamTurretOpening
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsBeamTurretOpening(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamTurretOpening");
		
		ATekHoverSkiff_Character_BP_C_IsBeamTurretOpening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIncludeActivating                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsBeamActive(bool bIncludeActivating, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamActive");
		
		ATekHoverSkiff_Character_BP_C_IsBeamActive_Params params {};
		params.bIncludeActivating = bIncludeActivating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Is Beam Moving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsBeamMoving                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsBeamMoving(bool* IsBeamMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Is Beam Moving");
		
		ATekHoverSkiff_Character_BP_C_IsBeamMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBeamMoving != nullptr)
			*IsBeamMoving = params.IsBeamMoving;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamRetracting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::IsBeamRetracting(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamRetracting");
		
		ATekHoverSkiff_Character_BP_C_IsBeamRetracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamLock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanBeamLock(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamLock");
		
		ATekHoverSkiff_Character_BP_C_CanBeamLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_BeamSearch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_BeamSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_BeamSearch");
		
		ATekHoverSkiff_Character_BP_C_Tick_BeamSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Can Instantly Grab Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanInstantlyGrab                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanInstantlyGrabCharacter(class APrimalCharacter* Character, bool* CanInstantlyGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Can Instantly Grab Character");
		
		ATekHoverSkiff_Character_BP_C_CanInstantlyGrabCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInstantlyGrab != nullptr)
			*CanInstantlyGrab = params.CanInstantlyGrab;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanMoveBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanMoveBeam(bool bForStart, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanMoveBeam");
		
		ATekHoverSkiff_Character_BP_C_CanMoveBeam_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam StartPointExternal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAdjustForCarriedChar                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BeamStartPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetBeamStartPointExternal(bool bAdjustForCarriedChar, struct FVector* BeamStartPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam StartPointExternal");
		
		ATekHoverSkiff_Character_BP_C_GetBeamStartPointExternal_Params params {};
		params.bAdjustForCarriedChar = bAdjustForCarriedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BeamStartPoint != nullptr)
			*BeamStartPoint = params.BeamStartPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPoint_External
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BeamEndPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetBeamEndPoint_External(struct FVector* BeamEndPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPoint_External");
		
		ATekHoverSkiff_Character_BP_C_GetBeamEndPoint_External_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BeamEndPoint != nullptr)
			*BeamEndPoint = params.BeamEndPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Visuals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::UpdateBeamVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Visuals");
		
		ATekHoverSkiff_Character_BP_C_UpdateBeamVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanLookForTargets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canLook                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanLookForTargets(bool* canLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanLookForTargets");
		
		ATekHoverSkiff_Character_BP_C_CanLookForTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canLook != nullptr)
			*canLook = params.canLook;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanUse                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanUseBeam(bool bForStart, bool* bCanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseBeam");
		
		ATekHoverSkiff_Character_BP_C_CanUseBeam_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanUse != nullptr)
			*bCanUse = params.bCanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyDesiredRotation");
		
		ATekHoverSkiff_Character_BP_C_BPModifyDesiredRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDesiredRotation != nullptr)
			*InDesiredRotation = params.InDesiredRotation;
		if (OutDesiredRotation != nullptr)
			*OutDesiredRotation = params.OutDesiredRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCharacterAttachedToBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            theChar                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHasCharAttached                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetCharacterAttachedToBeam(class APrimalCharacter** theChar, bool* bHasCharAttached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCharacterAttachedToBeam");
		
		ATekHoverSkiff_Character_BP_C_GetCharacterAttachedToBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (theChar != nullptr)
			*theChar = params.theChar;
		if (bHasCharAttached != nullptr)
			*bHasCharAttached = params.bHasCharAttached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetForceSkiffDescend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::SetForceSkiffDescend(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetForceSkiffDescend");
		
		ATekHoverSkiff_Character_BP_C_SetForceSkiffDescend_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCharLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRelativeSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::SetBeamCharLocation(const struct FVector& Location, bool bRelativeSpace, bool bReplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCharLocation");
		
		ATekHoverSkiff_Character_BP_C_SetBeamCharLocation_Params params {};
		params.Location = Location;
		params.bRelativeSpace = bRelativeSpace;
		params.bReplicate = bReplicate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamEndPoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewBeamEnd                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHitObstacle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::TraceForBeamEndPoint(struct FVector* NewBeamEnd, bool* bHitObstacle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamEndPoint");
		
		ATekHoverSkiff_Character_BP_C_TraceForBeamEndPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewBeamEnd != nullptr)
			*NewBeamEnd = params.NewBeamEnd;
		if (bHitObstacle != nullptr)
			*bHitObstacle = params.bHitObstacle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManipulateBeam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Tick_ManipulateBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManipulateBeam");
		
		ATekHoverSkiff_Character_BP_C_Tick_ManipulateBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get BeamEndPoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LaserEndPoint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetBeamEndPoint(struct FVector* LaserEndPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get BeamEndPoint");
		
		ATekHoverSkiff_Character_BP_C_GetBeamEndPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaserEndPoint != nullptr)
			*LaserEndPoint = params.LaserEndPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Particles End Point
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::UpdateBeamParticlesEndPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Particles End Point");
		
		ATekHoverSkiff_Character_BP_C_UpdateBeamParticlesEndPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Find BeamTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            foundPawn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::FindBeamTarget(class APrimalCharacter** foundPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Find BeamTarget");
		
		ATekHoverSkiff_Character_BP_C_FindBeamTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foundPawn != nullptr)
			*foundPawn = params.foundPawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.StopHovering
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::StopHovering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.StopHovering");
		
		ATekHoverSkiff_Character_BP_C_StopHovering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTimerIntervals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::SetTimerIntervals(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTimerIntervals");
		
		ATekHoverSkiff_Character_BP_C_SetTimerIntervals_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitForwardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSkiff_Character_BP_C::BPShouldLimitForwardDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitForwardDirection");
		
		ATekHoverSkiff_Character_BP_C_BPShouldLimitForwardDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyForwardDirectionInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     directionInput                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSkiff_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyForwardDirectionInput");
		
		ATekHoverSkiff_Character_BP_C_BPModifyForwardDirectionInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (directionInput != nullptr)
			*directionInput = params.directionInput;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyClearRider");
		
		ATekHoverSkiff_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam BoneRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewEndPoint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ResetRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::UpdateBeamBoneRotation(const struct FVector& NewEndPoint, bool Reset, const struct FRotator& ResetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam BoneRotation");
		
		ATekHoverSkiff_Character_BP_C_UpdateBeamBoneRotation_Params params {};
		params.NewEndPoint = NewEndPoint;
		params.Reset = Reset;
		params.ResetRotation = ResetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam Start Point
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bAdjustForCarriedChar                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LaserStartPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::GetBeamStartPoint(bool bAdjustForCarriedChar, struct FVector* LaserStartPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam Start Point");
		
		ATekHoverSkiff_Character_BP_C_GetBeamStartPoint_Params params {};
		params.bAdjustForCarriedChar = bAdjustForCarriedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaserStartPoint != nullptr)
			*LaserStartPoint = params.LaserStartPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartSearching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnBeamStartSearching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartSearching");
		
		ATekHoverSkiff_Character_BP_C_OnBeamStartSearching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateBeamViewTracePoints
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bUseCurrentBeamLength                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ViewStart                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ViewEnd                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CalculateBeamViewTracePoints(bool bUseCurrentBeamLength, struct FVector* ViewStart, struct FVector* ViewEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateBeamViewTracePoints");
		
		ATekHoverSkiff_Character_BP_C_CalculateBeamViewTracePoints_Params params {};
		params.bUseCurrentBeamLength = bUseCurrentBeamLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewStart != nullptr)
			*ViewStart = params.ViewStart;
		if (ViewEnd != nullptr)
			*ViewEnd = params.ViewEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ClearAllBeamChars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOnlyClearBeamingChar                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::ClearAllBeamChars(bool bOnlyClearBeamingChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ClearAllBeamChars");
		
		ATekHoverSkiff_Character_BP_C_ClearAllBeamChars_Params params {};
		params.bOnlyClearBeamingChar = bOnlyClearBeamingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamGrabCharacter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventTraces                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::CanBeamGrabCharacter(class APrimalCharacter* forChar, bool bPreventTraces, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamGrabCharacter");
		
		ATekHoverSkiff_Character_BP_C_CanBeamGrabCharacter_Params params {};
		params.forChar = forChar;
		params.bPreventTraces = bPreventTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerServer");
		
		ATekHoverSkiff_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerNonDedicated");
		
		ATekHoverSkiff_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartActivatingBeam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnStartActivatingBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartActivatingBeam");
		
		ATekHoverSkiff_Character_BP_C_OnStartActivatingBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnCloseBeamTurret
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::OnCloseBeamTurret()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnCloseBeamTurret");
		
		ATekHoverSkiff_Character_BP_C_OnCloseBeamTurret_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UserConstructionScript");
		
		ATekHoverSkiff_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");
		
		ATekHoverSkiff_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ATekHoverSkiff_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InterceptInputEvent");
		
		ATekHoverSkiff_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_RequestBraking
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_RequestBraking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_RequestBraking");
		
		ATekHoverSkiff_Character_BP_C_Server_RequestBraking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveBeginPlay");
		
		ATekHoverSkiff_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPUnstasis");
		
		ATekHoverSkiff_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffBeamStateChanged
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffBeamState                              NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_HoverSkiffBeamState                              PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffBeamStateChanged(E_HoverSkiffBeamState NewState, E_HoverSkiffBeamState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffBeamStateChanged");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnSkiffBeamStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffBeamState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffBeamState                              NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_SetSkiffBeamState(E_HoverSkiffBeamState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffBeamState");
		
		ATekHoverSkiff_Character_BP_C_Server_SetSkiffBeamState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoActivateBeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Timer_DoActivateBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoActivateBeam");
		
		ATekHoverSkiff_Character_BP_C_Timer_DoActivateBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoDeactivateBeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Timer_DoDeactivateBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoDeactivateBeam");
		
		ATekHoverSkiff_Character_BP_C_Timer_DoDeactivateBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnStartSkiffLanding
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLanding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnStartSkiffLanding(bool bLanding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnStartSkiffLanding");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnStartSkiffLanding_Params params {};
		params.bLanding = bLanding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffSetFlight
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFly                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffSetFlight(bool bFly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffSetFlight");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnSkiffSetFlight_Params params {};
		params.bFly = bFly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SyncMovementInputs
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MoveInputs                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_SyncMovementInputs(const struct FVector& MoveInputs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SyncMovementInputs");
		
		ATekHoverSkiff_Character_BP_C_Server_SyncMovementInputs_Params params {};
		params.MoveInputs = MoveInputs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetBeamCameraLockState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_SetBeamCameraLockState(bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetBeamCameraLockState");
		
		ATekHoverSkiff_Character_BP_C_Server_SetBeamCameraLockState_Params params {};
		params.bLocked = bLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamGrabCharacter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     GrabRelativeLocation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnBeamGrabCharacter(const struct FVector& GrabRelativeLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamGrabCharacter");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnBeamGrabCharacter_Params params {};
		params.GrabRelativeLocation = GrabRelativeLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoOpenBeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Timer_DoOpenBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoOpenBeam");
		
		ATekHoverSkiff_Character_BP_C_Timer_DoOpenBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleCameraLocked
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsCameraLocked                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_ToggleCameraLocked(bool IsCameraLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleCameraLocked");
		
		ATekHoverSkiff_Character_BP_C_Multi_ToggleCameraLocked_Params params {};
		params.IsCameraLocked = IsCameraLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnFireInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_OnFireInputPressed(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnFireInputPressed");
		
		ATekHoverSkiff_Character_BP_C_Server_OnFireInputPressed_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTargetingInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_OnTargetingInputPressed(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTargetingInputPressed");
		
		ATekHoverSkiff_Character_BP_C_Server_OnTargetingInputPressed_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffStartedCrashing
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffStartedCrashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffStartedCrashing");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnSkiffStartedCrashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffCrash
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromImpact                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffCrash(bool bFromImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffCrash");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnSkiffCrash_Params params {};
		params.bFromImpact = bFromImpact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::DestroySkiff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiff");
		
		ATekHoverSkiff_Character_BP_C_DestroySkiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CrashTimeout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::CrashTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CrashTimeout");
		
		ATekHoverSkiff_Character_BP_C_CrashTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamStartGrabbingChar
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnBeamStartGrabbingChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamStartGrabbingChar");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnBeamStartGrabbingChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SetBeamCharLocation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRelativeSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_SetBeamCharLocation(const struct FVector& Location, bool bRelativeSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SetBeamCharLocation");
		
		ATekHoverSkiff_Character_BP_C_Multi_SetBeamCharLocation_Params params {};
		params.Location = Location;
		params.bRelativeSpace = bRelativeSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffHoverStateChanged
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffHoverState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_HoverSkiffHoverState                             PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffHoverStateChanged(E_HoverSkiffHoverState NewState, E_HoverSkiffHoverState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffHoverStateChanged");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnSkiffHoverStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffHoverState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffHoverState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_SetSkiffHoverState(E_HoverSkiffHoverState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffHoverState");
		
		ATekHoverSkiff_Character_BP_C_Server_SetSkiffHoverState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffFailedTakeoff
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffFailedTakeoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffFailedTakeoff");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnSkiffFailedTakeoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_ToggleHeadlights
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_ToggleHeadlights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_ToggleHeadlights");
		
		ATekHoverSkiff_Character_BP_C_Server_ToggleHeadlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleHeadlights
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_ToggleHeadlights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleHeadlights");
		
		ATekHoverSkiff_Character_BP_C_Multi_ToggleHeadlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_TryBeamGrab
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_TryBeamGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_TryBeamGrab");
		
		ATekHoverSkiff_Character_BP_C_Server_TryBeamGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnTriedBeamGrab
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnTriedBeamGrab(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnTriedBeamGrab");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnTriedBeamGrab_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.FlashBeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::FlashBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.FlashBeam");
		
		ATekHoverSkiff_Character_BP_C_FlashBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTriedBeamGrab
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_OnTriedBeamGrab(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTriedBeamGrab");
		
		ATekHoverSkiff_Character_BP_C_Server_OnTriedBeamGrab_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffRepairModeStateChanged
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffRepairModeStateChanged(bool bNewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffRepairModeStateChanged");
		
		ATekHoverSkiff_Character_BP_C_Multi_OnSkiffRepairModeStateChanged_Params params {};
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SyncFuelPercent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Multi_SyncFuelPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SyncFuelPercent");
		
		ATekHoverSkiff_Character_BP_C_Multi_SyncFuelPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffFlight
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewFlight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_SetSkiffFlight(bool NewFlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffFlight");
		
		ATekHoverSkiff_Character_BP_C_Server_SetSkiffFlight_Params params {};
		params.NewFlight = NewFlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_StartSkiffLanding
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSkiff_Character_BP_C::Server_StartSkiffLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_StartSkiffLanding");
		
		ATekHoverSkiff_Character_BP_C_Server_StartSkiffLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ExecuteUbergraph_TekHoverSkiff_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSkiff_Character_BP_C::ExecuteUbergraph_TekHoverSkiff_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ExecuteUbergraph_TekHoverSkiff_Character_BP");
		
		ATekHoverSkiff_Character_BP_C_ExecuteUbergraph_TekHoverSkiff_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekHoverSkiff_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekHoverSkiff_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C");
		return ptr;
	}

}


