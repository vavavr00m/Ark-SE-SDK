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
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpooderInSPACE
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsSpooderInSPACE(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpooderInSPACE");
		
		ABogSpider_Character_BP_C_IsSpooderInSPACE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWallJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     wallJumpVelocity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnWallJump(const struct FVector& wallJumpVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWallJump");
		
		ABogSpider_Character_BP_C_OnWallJump_Params params {};
		params.wallJumpVelocity = wallJumpVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnClimberFinishedAttaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::OnClimberFinishedAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnClimberFinishedAttaching");
		
		ABogSpider_Character_BP_C_OnClimberFinishedAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.StoreClimb Trace Socket Offsets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::StoreClimbTraceSocketOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StoreClimb Trace Socket Offsets");
		
		ABogSpider_Character_BP_C_StoreClimbTraceSocketOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderClimbingTraceTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            traceIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct UObject_FTransform                          TraceTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetSpiderClimbingTraceTransform(int32_t traceIndex, bool bWorldSpace, struct UObject_FTransform* TraceTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderClimbingTraceTransform");
		
		ABogSpider_Character_BP_C_GetSpiderClimbingTraceTransform_Params params {};
		params.traceIndex = traceIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceTransform != nullptr)
			*TraceTransform = params.TraceTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimbingTraceHitResultValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bValidHit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     TraceStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TraceEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            traceIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TraceRetryNum                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsClimbingTraceHitResultValid(bool bValidHit, struct FHitResult* Hit, const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t traceIndex, int32_t TraceRetryNum, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimbingTraceHitResultValid");
		
		ABogSpider_Character_BP_C_IsClimbingTraceHitResultValid_Params params {};
		params.bValidHit = bValidHit;
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		params.traceIndex = traceIndex;
		params.TraceRetryNum = TraceRetryNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberOverrideRetriedTraceResult
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  WithHit                                                    (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanClimberOverrideRetriedTraceResult(struct FHitResult* WithHit, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberOverrideRetriedTraceResult");
		
		ABogSpider_Character_BP_C_CanClimberOverrideRetriedTraceResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithHit != nullptr)
			*WithHit = params.WithHit;
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderStopNonDediTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanSpiderStopNonDediTick(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderStopNonDediTick");
		
		ABogSpider_Character_BP_C_CanSpiderStopNonDediTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_NonControlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanClimberStopNonDediTick_NonControlled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_NonControlled");
		
		ABogSpider_Character_BP_C_CanClimberStopNonDediTick_NonControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_Controlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanClimberStopNonDediTick_Controlled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_Controlled");
		
		ABogSpider_Character_BP_C_CanClimberStopNonDediTick_Controlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can ClimberContinueClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanClimberContinueClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can ClimberContinueClimbing");
		
		ABogSpider_Character_BP_C_CanClimberContinueClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderUseAbilities
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanSpiderUseAbilities(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderUseAbilities");
		
		ABogSpider_Character_BP_C_CanSpiderUseAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateSpiderRandomTickDelay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::UpdateSpiderRandomTickDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateSpiderRandomTickDelay");
		
		ABogSpider_Character_BP_C_UpdateSpiderRandomTickDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllSpiderCameraShake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForRider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::StopAllSpiderCameraShake(class APrimalCharacter* ForRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllSpiderCameraShake");
		
		ABogSpider_Character_BP_C_StopAllSpiderCameraShake_Params params {};
		params.ForRider = ForRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateNonControlledClimber
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::UpdateNonControlledClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateNonControlledClimber");
		
		ABogSpider_Character_BP_C_UpdateNonControlledClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsPlayingJumpDetachAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsPlayingJumpDetachAnim(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsPlayingJumpDetachAnim");
		
		ABogSpider_Character_BP_C_IsPlayingJumpDetachAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanPrimalCharBeUsedForTaming
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanPrimalCharBeUsedForTaming(class APrimalCharacter** Char, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanPrimalCharBeUsedForTaming");
		
		ABogSpider_Character_BP_C_CanPrimalCharBeUsedForTaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Char != nullptr)
			*Char = params.Char;
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddTamingAffinityFromLifeSteal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForPlayer                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::AddTamingAffinityFromLifeSteal(class AShooterCharacter** ForPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddTamingAffinityFromLifeSteal");
		
		ABogSpider_Character_BP_C_AddTamingAffinityFromLifeSteal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForPlayer != nullptr)
			*ForPlayer = params.ForPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPClientDoMultiUse");
		
		ABogSpider_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshSpiderVision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::RefreshSpiderVision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshSpiderVision");
		
		ABogSpider_Character_BP_C_RefreshSpiderVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CacheWebTracePreviewHits
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHitResult>                          TraceHits                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABogSpider_Character_BP_C::Tick_CacheWebTracePreviewHits(TArray<struct FHitResult>* TraceHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CacheWebTracePreviewHits");
		
		ABogSpider_Character_BP_C_Tick_CacheWebTracePreviewHits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceHits != nullptr)
			*TraceHits = params.TraceHits;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CalcAirJumpVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   WithInputs                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WithVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    WithControlRot                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABogSpider_Character_BP_C::CalcAirJumpVelocity(const struct FVector2D& WithInputs, const struct FVector& WithVelocity, struct FRotator* WithControlRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CalcAirJumpVelocity");
		
		ABogSpider_Character_BP_C_CalcAirJumpVelocity_Params params {};
		params.WithInputs = WithInputs;
		params.WithVelocity = WithVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithControlRot != nullptr)
			*WithControlRot = params.WithControlRot;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABogSpider_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetMultiUseEntries");
		
		ABogSpider_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderAnimBP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBogSpider_AnimBlueprint_C*                  animBP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetSpiderAnimBP(class UBogSpider_AnimBlueprint_C** animBP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderAnimBP");
		
		ABogSpider_Character_BP_C_GetSpiderAnimBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (animBP != nullptr)
			*animBP = params.animBP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddChargeJumpVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              WithChargeRatio                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::AddChargeJumpVelocity(float WithChargeRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddChargeJumpVelocity");
		
		ABogSpider_Character_BP_C_AddChargeJumpVelocity_Params params {};
		params.WithChargeRatio = WithChargeRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ClientTimestamp                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::DoChargeJump_Server(double ClientTimestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Server");
		
		ABogSpider_Character_BP_C_DoChargeJump_Server_Params params {};
		params.ClientTimestamp = ClientTimestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ClientTimestamp                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::StartChargeJump_Server(double ClientTimestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Server");
		
		ABogSpider_Character_BP_C_StartChargeJump_Server_Params params {};
		params.ClientTimestamp = ClientTimestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateClientWaterWalkingBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateClientWaterWalkingBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateClientWaterWalkingBuff");
		
		ABogSpider_Character_BP_C_Tick_UpdateClientWaterWalkingBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAcknowledgeServerCorrection
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
	bool ABogSpider_Character_BP_C::BPAcknowledgeServerCorrection(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAcknowledgeServerCorrection");
		
		ABogSpider_Character_BP_C_BPAcknowledgeServerCorrection_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SpiderPrintShippingMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor)
	 */
	void ABogSpider_Character_BP_C::SpiderPrintShippingMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SpiderPrintShippingMessage");
		
		ABogSpider_Character_BP_C_SpiderPrintShippingMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnDinoCheat");
		
		ABogSpider_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideRiderCameraCollisionSweep
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SweepStart                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SweepEnd                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FHitResult ABogSpider_Character_BP_C::BP_OverrideRiderCameraCollisionSweep(struct FVector* SweepStart, struct FVector* SweepEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideRiderCameraCollisionSweep");
		
		ABogSpider_Character_BP_C_BP_OverrideRiderCameraCollisionSweep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepStart != nullptr)
			*SweepStart = params.SweepStart;
		if (SweepEnd != nullptr)
			*SweepEnd = params.SweepEnd;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.AdjustClimbTraceTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WithSocketName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct UObject_FTransform                          WithTraceTransform                                         (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct UObject_FTransform                          climberTransform                                           (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct UObject_FTransform                          AdjustedTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::AdjustClimbTraceTransform(const class FName& WithSocketName, struct UObject_FTransform* WithTraceTransform, struct UObject_FTransform* climberTransform, struct UObject_FTransform* AdjustedTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AdjustClimbTraceTransform");
		
		ABogSpider_Character_BP_C_AdjustClimbTraceTransform_Params params {};
		params.WithSocketName = WithSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithTraceTransform != nullptr)
			*WithTraceTransform = params.WithTraceTransform;
		if (climberTransform != nullptr)
			*climberTransform = params.climberTransform;
		if (AdjustedTransform != nullptr)
			*AdjustedTransform = params.AdjustedTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsRiderLookDirParallelWithClimbUp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   WithinAngleRange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              angleDelta                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsRiderLookDirParallelWithClimbUp(const struct FVector2D& WithinAngleRange, bool* bResult, float* angleDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsRiderLookDirParallelWithClimbUp");
		
		ABogSpider_Character_BP_C_IsRiderLookDirParallelWithClimbUp_Params params {};
		params.WithinAngleRange = WithinAngleRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (angleDelta != nullptr)
			*angleDelta = params.angleDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderTransformForEnsnare
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct UObject_FTransform                          Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetSpiderTransformForEnsnare(struct UObject_FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderTransformForEnsnare");
		
		ABogSpider_Character_BP_C_GetSpiderTransformForEnsnare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideCarriedCharacterTransform
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForCarriedChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::BP_OverrideCarriedCharacterTransform(class APrimalCharacter* ForCarriedChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideCarriedCharacterTransform");
		
		ABogSpider_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params params {};
		params.ForCarriedChar = ForCarriedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToAirBrake
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::WantsToAirBrake(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToAirBrake");
		
		ABogSpider_Character_BP_C_WantsToAirBrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimberOverrideFallVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::UpdateClimberOverrideFallVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimberOverrideFallVelocity");
		
		ABogSpider_Character_BP_C_UpdateClimberOverrideFallVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ModifySpiderFallingVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ModifySpiderFallingVelocity(struct FVector* Velocity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ModifySpiderFallingVelocity");
		
		ABogSpider_Character_BP_C_ModifySpiderFallingVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate RotatorForwardVector to Target Constant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    currentRotator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     targetForward                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotationRate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    newRotator                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::RotateRotatorForwardVectortoTargetConstant(const struct FRotator& currentRotator, const struct FVector& targetForward, float RotationRate, struct FRotator* newRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate RotatorForwardVector to Target Constant");
		
		ABogSpider_Character_BP_C_RotateRotatorForwardVectortoTargetConstant_Params params {};
		params.currentRotator = currentRotator;
		params.targetForward = targetForward;
		params.RotationRate = RotationRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newRotator != nullptr)
			*newRotator = params.newRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentClimbingRotationSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RotationSpeed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetCurrentClimbingRotationSpeed(float* RotationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentClimbingRotationSpeed");
		
		ABogSpider_Character_BP_C_GetCurrentClimbingRotationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RotationSpeed != nullptr)
			*RotationSpeed = params.RotationSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate Climber To TargetClimbingRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::RotateClimberToTargetClimbingRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate Climber To TargetClimbingRotation");
		
		ABogSpider_Character_BP_C_RotateClimberToTargetClimbingRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidSetCarriedCharacter");
		
		ABogSpider_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberRestoreToSeeking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABogSpider_Character_BP_C::CanClimberRestoreToSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberRestoreToSeeking");
		
		ABogSpider_Character_BP_C_CanClimberRestoreToSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderClimbRunning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABogSpider_Character_BP_C::IsSpiderClimbRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderClimbRunning");
		
		ABogSpider_Character_BP_C_IsSpiderClimbRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SimulateClimbingBetweenFrames
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_SimulateClimbingBetweenFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SimulateClimbingBetweenFrames");
		
		ABogSpider_Character_BP_C_Tick_SimulateClimbingBetweenFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimberGrounded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsClimberGrounded(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimberGrounded");
		
		ABogSpider_Character_BP_C_IsClimberGrounded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ABogSpider_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetCrosshairColor");
		
		ABogSpider_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CorrectDetachAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetCorrectDetachAnim(class UAnimMontage** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CorrectDetachAnim");
		
		ABogSpider_Character_BP_C_GetCorrectDetachAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderRunSeek
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanSpiderRunSeek(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderRunSeek");
		
		ABogSpider_Character_BP_C_CanSpiderRunSeek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderRunSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateSpiderRunSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderRunSeeking");
		
		ABogSpider_Character_BP_C_Tick_UpdateSpiderRunSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCameraShake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateSpiderCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCameraShake");
		
		ABogSpider_Character_BP_C_Tick_UpdateSpiderCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClimberCheckForAboveWalkableGround
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ClimberCheckForAboveWalkableGround(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClimberCheckForAboveWalkableGround");
		
		ABogSpider_Character_BP_C_ClimberCheckForAboveWalkableGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get Correct Surface Trace OffsetTransforms
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideUseMap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<bool>                                       newUseMp                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct UObject_FTransform>                  offsetTransforms                                           (Parm, OutParm, ZeroConstructor)
	 * 		TArray<int32_t>                                    TraceIndeces                                               (Parm, OutParm, ZeroConstructor)
	 */
	void ABogSpider_Character_BP_C::GetCorrectSurfaceTraceOffsetTransforms(bool overrideUseMap, TArray<bool>* newUseMp, TArray<struct UObject_FTransform>* offsetTransforms, TArray<int32_t>* TraceIndeces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get Correct Surface Trace OffsetTransforms");
		
		ABogSpider_Character_BP_C_GetCorrectSurfaceTraceOffsetTransforms_Params params {};
		params.overrideUseMap = overrideUseMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newUseMp != nullptr)
			*newUseMp = params.newUseMp;
		if (offsetTransforms != nullptr)
			*offsetTransforms = params.offsetTransforms;
		if (TraceIndeces != nullptr)
			*TraceIndeces = params.TraceIndeces;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DisplaySpiderHudNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Notification                                               (Parm, ZeroConstructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   DisplayScaleAndTime                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::DisplaySpiderHudNotification(const class FString& Notification, const struct FLinearColor& Color, const struct FVector2D& DisplayScaleAndTime, class UTexture2D* Icon, class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DisplaySpiderHudNotification");
		
		ABogSpider_Character_BP_C_DisplaySpiderHudNotification_Params params {};
		params.Notification = Notification;
		params.Color = Color;
		params.DisplayScaleAndTime = DisplayScaleAndTime;
		params.Icon = Icon;
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageBloodSuckingClientBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_ManageBloodSuckingClientBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageBloodSuckingClientBuff");
		
		ABogSpider_Character_BP_C_Tick_ManageBloodSuckingClientBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnriddenSpiderTryBioGrappleTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::UnriddenSpiderTryBioGrappleTarget(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnriddenSpiderTryBioGrappleTarget");
		
		ABogSpider_Character_BP_C_UnriddenSpiderTryBioGrappleTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AllowMovementWhileClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Climber_AllowMovementWhileClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AllowMovementWhileClimbing");
		
		ABogSpider_Character_BP_C_Climber_AllowMovementWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AI_OnSetTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Climber_AI_OnSetTarget(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AI_OnSetTarget");
		
		ABogSpider_Character_BP_C_Climber_AI_OnSetTarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimbingClimber
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IgnoreFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canKeepClimbing                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::UpdateClimbingClimber(bool IgnoreFailure, bool* canKeepClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimbingClimber");
		
		ABogSpider_Character_BP_C_UpdateClimbingClimber_Params params {};
		params.IgnoreFailure = IgnoreFailure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canKeepClimbing != nullptr)
			*canKeepClimbing = params.canKeepClimbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetSpiderVisionActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionActive");
		
		ABogSpider_Character_BP_C_SetSpiderVisionActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleSpiderVision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ToggleSpiderVision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleSpiderVision");
		
		ABogSpider_Character_BP_C_ToggleSpiderVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberSeek
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanClimberSeek(bool isForStart, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberSeek");
		
		ABogSpider_Character_BP_C_CanClimberSeek_Params params {};
		params.isForStart = isForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CurrentClimbingVelocityMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetCurrentClimbingVelocityMax(float* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CurrentClimbingVelocityMax");
		
		ABogSpider_Character_BP_C_GetCurrentClimbingVelocityMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can Climber Rotate to Target Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanClimberRotatetoTargetRotation(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can Climber Rotate to Target Rotation");
		
		ABogSpider_Character_BP_C_CanClimberRotatetoTargetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClimbingMoveDirFromRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     moveDir                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetClimbingMoveDirFromRotation(const struct FRotator& Rotation, struct FVector* moveDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClimbingMoveDirFromRotation");
		
		ABogSpider_Character_BP_C_GetClimbingMoveDirFromRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (moveDir != nullptr)
			*moveDir = params.moveDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForUpdateSpiderClimbMoving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::CheckForUpdateSpiderClimbMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForUpdateSpiderClimbMoving");
		
		ABogSpider_Character_BP_C_CheckForUpdateSpiderClimbMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimber Inputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::UpdateClimberInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimber Inputs");
		
		ABogSpider_Character_BP_C_UpdateClimberInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Init Climber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::InitClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Init Climber");
		
		ABogSpider_Character_BP_C_InitClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsNormalClimbable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAverageNormal                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsNormalClimbable");
		
		ABogSpider_Character_BP_C_IsNormalClimbable_Params params {};
		params.Normal = Normal;
		params.isAverageNormal = isAverageNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Replicate Index Update Server And Client Climber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ReplicateIndexUpdateServerAndClientClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Replicate Index Update Server And Client Climber");
		
		ABogSpider_Character_BP_C_ReplicateIndexUpdateServerAndClientClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Check For Prevent Stop Climbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       traceHitsArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            numValidHits                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            numTraces                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowClimbing                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CheckForPreventStopClimbing(TArray<bool>* traceHitsArray, int32_t numValidHits, int32_t numTraces, bool* AllowClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Check For Prevent Stop Climbing");
		
		ABogSpider_Character_BP_C_CheckForPreventStopClimbing_Params params {};
		params.numValidHits = numValidHits;
		params.numTraces = numTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceHitsArray != nullptr)
			*traceHitsArray = params.traceHitsArray;
		if (AllowClimbing != nullptr)
			*AllowClimbing = params.AllowClimbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCorrectSurfaceTraceDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForRetry                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              traceDist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetCorrectSurfaceTraceDistance(bool isForRetry, float* traceDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCorrectSurfaceTraceDistance");
		
		ABogSpider_Character_BP_C_GetCorrectSurfaceTraceDistance_Params params {};
		params.isForRetry = isForRetry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceDist != nullptr)
			*traceDist = params.traceDist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpolateClimberMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshToInterpolate                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::InterpolateClimberMesh(class USkeletalMeshComponent* meshToInterpolate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpolateClimberMesh");
		
		ABogSpider_Character_BP_C_InterpolateClimberMesh_Params params {};
		params.meshToInterpolate = meshToInterpolate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABogSpider_Character_BP_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCharacterNewFallVelocity");
		
		ABogSpider_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsWebSprinting(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting");
		
		ABogSpider_Character_BP_C_IsWebSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Both
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithHitLocation_A                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WithHitLocation_B                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::FireQuickWebs_Both(const struct FVector& WithHitLocation_A, const struct FVector& WithHitLocation_B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Both");
		
		ABogSpider_Character_BP_C_FireQuickWebs_Both_Params params {};
		params.WithHitLocation_A = WithHitLocation_A;
		params.WithHitLocation_B = WithHitLocation_B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanQuickFireWebs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSingle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanQuickFireWebs(bool bSingle, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanQuickFireWebs");
		
		ABogSpider_Character_BP_C_CanQuickFireWebs_Params params {};
		params.bSingle = bSingle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Single
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithHitLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            WithBioGrappleTarget                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::FireQuickWebs_Single(const struct FVector& WithHitLocation, class APrimalCharacter* WithBioGrappleTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Single");
		
		ABogSpider_Character_BP_C_FireQuickWebs_Single_Params params {};
		params.WithHitLocation = WithHitLocation;
		params.WithBioGrappleTarget = WithBioGrappleTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Both
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    ViewRot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundAny                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundOne                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FoundHitLoc_A                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      FoundHitActor_A                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FoundHitLoc_B                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      FoundHitActor_B                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::DoWebSearch_Both(const struct FRotator& ViewRot, bool* bFoundAny, bool* bFoundOne, struct FVector* FoundHitLoc_A, class AActor** FoundHitActor_A, struct FVector* FoundHitLoc_B, class AActor** FoundHitActor_B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Both");
		
		ABogSpider_Character_BP_C_DoWebSearch_Both_Params params {};
		params.ViewRot = ViewRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundAny != nullptr)
			*bFoundAny = params.bFoundAny;
		if (bFoundOne != nullptr)
			*bFoundOne = params.bFoundOne;
		if (FoundHitLoc_A != nullptr)
			*FoundHitLoc_A = params.FoundHitLoc_A;
		if (FoundHitActor_A != nullptr)
			*FoundHitActor_A = params.FoundHitActor_A;
		if (FoundHitLoc_B != nullptr)
			*FoundHitLoc_B = params.FoundHitLoc_B;
		if (FoundHitActor_B != nullptr)
			*FoundHitActor_B = params.FoundHitActor_B;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Single
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    ViewRot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FoundHitLoc                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      FoundHitActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::DoWebSearch_Single(const struct FRotator& ViewRot, bool* bFoundHit, struct FVector* FoundHitLoc, class AActor** FoundHitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Single");
		
		ABogSpider_Character_BP_C_DoWebSearch_Single_Params params {};
		params.ViewRot = ViewRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundHit != nullptr)
			*bFoundHit = params.bFoundHit;
		if (FoundHitLoc != nullptr)
			*FoundHitLoc = params.FoundHitLoc;
		if (FoundHitActor != nullptr)
			*FoundHitActor = params.FoundHitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetAirJumpVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::SetAirJumpVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetAirJumpVelocity");
		
		ABogSpider_Character_BP_C_SetAirJumpVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoAirJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   WithMoveInputs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WithVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    WithControlRot                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::DoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoAirJump");
		
		ABogSpider_Character_BP_C_DoAirJump_Params params {};
		params.WithMoveInputs = WithMoveInputs;
		params.WithVelocity = WithVelocity;
		params.WithControlRot = WithControlRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAirJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanAirJump(bool bForStart, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAirJump");
		
		ABogSpider_Character_BP_C_CanAirJump_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryDoAirJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   WithMoveInputs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WithVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    WithControlRot                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::TryDoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryDoAirJump");
		
		ABogSpider_Character_BP_C_TryDoAirJump_Params params {};
		params.WithMoveInputs = WithMoveInputs;
		params.WithVelocity = WithVelocity;
		params.WithControlRot = WithControlRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAttachWebsToCharInPVE
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ToChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanAttachWebsToCharInPVE(class APrimalCharacter* ToChar, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAttachWebsToCharInPVE");
		
		ABogSpider_Character_BP_C_CanAttachWebsToCharInPVE_Params params {};
		params.ToChar = ToChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bBreakLeft                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BreakWebVisually(bool bBreakLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually");
		
		ABogSpider_Character_BP_C_BreakWebVisually_Params params {};
		params.bBreakLeft = bBreakLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherImpact
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  WithHit                                                    (Parm, OutParm, ReferenceParm)
	 */
	void ABogSpider_Character_BP_C::OnWebTetherImpact(struct FHitResult* WithHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherImpact");
		
		ABogSpider_Character_BP_C_OnWebTetherImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithHit != nullptr)
			*WithHit = params.WithHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderBloodHangry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsSpiderBloodHangry(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderBloodHangry");
		
		ABogSpider_Character_BP_C_IsSpiderBloodHangry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptRiderEmoteAnim
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                EmoteAnim                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::InterceptRiderEmoteAnim(class UAnimMontage* EmoteAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptRiderEmoteAnim");
		
		ABogSpider_Character_BP_C_InterceptRiderEmoteAnim_Params params {};
		params.EmoteAnim = EmoteAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.NetSyncInputBitmask
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TriggeredByInput                                           (Parm, ZeroConstructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::NetSyncInputBitmask(const class FString& TriggeredByInput, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.NetSyncInputBitmask");
		
		ABogSpider_Character_BP_C_NetSyncInputBitmask_Params params {};
		params.TriggeredByInput = TriggeredByInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsBioGrappleOnCooldown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsBioGrappleOnCooldown(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsBioGrappleOnCooldown");
		
		ABogSpider_Character_BP_C_IsBioGrappleOnCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnStartCarried
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        aDino                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BP_OnStartCarried(class APrimalDinoCharacter* aDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnStartCarried");
		
		ABogSpider_Character_BP_C_BP_OnStartCarried_Params params {};
		params.aDino = aDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebShootybangFailed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::OnWebShootybangFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebShootybangFailed");
		
		ABogSpider_Character_BP_C_OnWebShootybangFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddBioGrappledBuffToChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ToChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 AddedBuff                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::AddBioGrappledBuffToChar(class APrimalCharacter* ToChar, class APrimalBuff** AddedBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddBioGrappledBuffToChar");
		
		ABogSpider_Character_BP_C_AddBioGrappledBuffToChar_Params params {};
		params.ToChar = ToChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AddedBuff != nullptr)
			*AddedBuff = params.AddedBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReleaseEnsnaredChar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ReleaseEnsnaredChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReleaseEnsnaredChar");
		
		ABogSpider_Character_BP_C_ReleaseEnsnaredChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledCharBreakWeb
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BreakingChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnBioGrappledCharBreakWeb(class APrimalCharacter* BreakingChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledCharBreakWeb");
		
		ABogSpider_Character_BP_C_OnBioGrappledCharBreakWeb_Params params {};
		params.BreakingChar = BreakingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetEnsnaredCharRef
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            NewCharRef                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetEnsnaredCharRef(class APrimalCharacter* NewCharRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetEnsnaredCharRef");
		
		ABogSpider_Character_BP_C_SetEnsnaredCharRef_Params params {};
		params.NewCharRef = NewCharRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetWebVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebVisibility");
		
		ABogSpider_Character_BP_C_SetWebVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopSpiderJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::StopSpiderJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopSpiderJump");
		
		ABogSpider_Character_BP_C_StopSpiderJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoRealSpiderJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::DoRealSpiderJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoRealSpiderJump");
		
		ABogSpider_Character_BP_C_DoRealSpiderJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldPreventWebShootWhileHoldingInputs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ShouldPreventWebShootWhileHoldingInputs(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldPreventWebShootWhileHoldingInputs");
		
		ABogSpider_Character_BP_C_ShouldPreventWebShootWhileHoldingInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetChargeJumpRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetChargeJumpRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetChargeJumpRatio");
		
		ABogSpider_Character_BP_C_GetChargeJumpRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnKillEnsnaredDino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        KilledDino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnKillEnsnaredDino(class APrimalDinoCharacter* KilledDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnKillEnsnaredDino");
		
		ABogSpider_Character_BP_C_OnKillEnsnaredDino_Params params {};
		params.KilledDino = KilledDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetMeshRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ResetMeshRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetMeshRotation");
		
		ABogSpider_Character_BP_C_ResetMeshRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCameraViewTarget
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
	void ABogSpider_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCameraViewTarget");
		
		ABogSpider_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideStencilAllianceForTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetDino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EStencilAlliance ABogSpider_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter* TargetDino, class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideStencilAllianceForTarget");
		
		ABogSpider_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params {};
		params.TargetDino = TargetDino;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideTerminalVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABogSpider_Character_BP_C::BP_OverrideTerminalVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideTerminalVelocity");
		
		ABogSpider_Character_BP_C_BP_OverrideTerminalVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetImpendingLand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetImpendingLand(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetImpendingLand");
		
		ABogSpider_Character_BP_C_SetImpendingLand_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanChargeJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanChargeJump(bool bForStart, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanChargeJump");
		
		ABogSpider_Character_BP_C_CanChargeJump_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CancelChargeJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::CancelChargeJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CancelChargeJump");
		
		ABogSpider_Character_BP_C_CancelChargeJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Client
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::DoChargeJump_Client()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Client");
		
		ABogSpider_Character_BP_C_DoChargeJump_Client_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Client
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::StartChargeJump_Client()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Client");
		
		ABogSpider_Character_BP_C_StartChargeJump_Client_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderChargeJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateSpiderChargeJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderChargeJump");
		
		ABogSpider_Character_BP_C_Tick_UpdateSpiderChargeJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartBioGrappleCooldown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::StartBioGrappleCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartBioGrappleCooldown");
		
		ABogSpider_Character_BP_C_StartBioGrappleCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherBroken
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLeft                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGrappleTether                              BrokenTether                                               (Parm, OutParm, ReferenceParm)
	 */
	void ABogSpider_Character_BP_C::OnWebTetherBroken(bool bIsLeft, struct FGrappleTether* BrokenTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherBroken");
		
		ABogSpider_Character_BP_C_OnWebTetherBroken_Params params {};
		params.bIsLeft = bIsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrokenTether != nullptr)
			*BrokenTether = params.BrokenTether;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageSpiderSounds
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_ManageSpiderSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageSpiderSounds");
		
		ABogSpider_Character_BP_C_Tick_ManageSpiderSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateDirToTargetWithLimit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     RotateDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ToTargetDir                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotatingLimitDegrees                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewDir                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::RotateDirToTargetWithLimit(const struct FVector& RotateDir, const struct FVector& ToTargetDir, float RotatingLimitDegrees, struct FVector* NewDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateDirToTargetWithLimit");
		
		ABogSpider_Character_BP_C_RotateDirToTargetWithLimit_Params params {};
		params.RotateDir = RotateDir;
		params.ToTargetDir = ToTargetDir;
		params.RotatingLimitDegrees = RotatingLimitDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewDir != nullptr)
			*NewDir = params.NewDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForInstantHarvestDeadEnsnaredChar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CheckForInstantHarvestDeadEnsnaredChar(class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForInstantHarvestDeadEnsnaredChar");
		
		ABogSpider_Character_BP_C_CheckForInstantHarvestDeadEnsnaredChar_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderRotating
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsSpiderRotating(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderRotating");
		
		ABogSpider_Character_BP_C_IsSpiderRotating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Net_OnWebTethersCreated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  TetherHits_Left                                            (Parm, OutParm, ReferenceParm)
	 * 		struct FHitResult                                  TetherHits_Right                                           (Parm, OutParm, ReferenceParm)
	 */
	void ABogSpider_Character_BP_C::Net_OnWebTethersCreated(struct FHitResult* TetherHits_Left, struct FHitResult* TetherHits_Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Net_OnWebTethersCreated");
		
		ABogSpider_Character_BP_C_Net_OnWebTethersCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TetherHits_Left != nullptr)
			*TetherHits_Left = params.TetherHits_Left;
		if (TetherHits_Right != nullptr)
			*TetherHits_Right = params.TetherHits_Right;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLeft                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CreateWebVisually(bool bIsLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually");
		
		ABogSpider_Character_BP_C_CreateWebVisually_Params params {};
		params.bIsLeft = bIsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetReelingCables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ResetReelingCables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetReelingCables");
		
		ABogSpider_Character_BP_C_ResetReelingCables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffActiveStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnGrappleBuffActiveStateChanged(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffActiveStateChanged");
		
		ABogSpider_Character_BP_C_OnGrappleBuffActiveStateChanged_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderTargetSet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnSpiderTargetSet(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderTargetSet");
		
		ABogSpider_Character_BP_C_OnSpiderTargetSet_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InterpSpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetMeshInterpSpeed_Rotation(float* InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Rotation");
		
		ABogSpider_Character_BP_C_GetMeshInterpSpeed_Rotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterpSpeed != nullptr)
			*InterpSpeed = params.InterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InterpSpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetMeshInterpSpeed_Location(float* InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Location");
		
		ABogSpider_Character_BP_C_GetMeshInterpSpeed_Location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterpSpeed != nullptr)
			*InterpSpeed = params.InterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoStupidThings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::DoStupidThings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoStupidThings");
		
		ABogSpider_Character_BP_C_DoStupidThings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldShowStupid Name
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ShouldShowStupidName(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldShowStupid Name");
		
		ABogSpider_Character_BP_C_ShouldShowStupidName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideDinoName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      CurrentDinoName                                            (Parm, ZeroConstructor)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString ABogSpider_Character_BP_C::BP_OverrideDinoName(const class FString& CurrentDinoName, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideDinoName");
		
		ABogSpider_Character_BP_C_BP_OverrideDinoName_Params params {};
		params.CurrentDinoName = CurrentDinoName;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateSpiderTargetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetLocation");
		
		ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetRotOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    TargetRotOffset                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetMeshTargetRotOffset(struct FRotator* TargetRotOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetRotOffset");
		
		ABogSpider_Character_BP_C_GetMeshTargetRotOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetRotOffset != nullptr)
			*TargetRotOffset = params.TargetRotOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetLocOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocOffset                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetMeshTargetLocOffset(struct FVector* TargetLocOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetLocOffset");
		
		ABogSpider_Character_BP_C_GetMeshTargetLocOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocOffset != nullptr)
			*TargetLocOffset = params.TargetLocOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VelocitySize                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VelocityDir                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Velocity2D                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VelocitySize2D                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetSpiderVelocityVars_Pure(struct FVector* Velocity, float* VelocitySize, struct FVector* VelocityDir, struct FVector2D* Velocity2D, float* VelocitySize2D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars_Pure");
		
		ABogSpider_Character_BP_C_GetSpiderVelocityVars_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
		if (VelocitySize != nullptr)
			*VelocitySize = params.VelocitySize;
		if (VelocityDir != nullptr)
			*VelocityDir = params.VelocityDir;
		if (Velocity2D != nullptr)
			*Velocity2D = params.Velocity2D;
		if (VelocitySize2D != nullptr)
			*VelocitySize2D = params.VelocitySize2D;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VelocitySize                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VelocityDir                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Velocity2D                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VelocitySize2D                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetSpiderVelocityVars(struct FVector* Velocity, float* VelocitySize, struct FVector* VelocityDir, struct FVector2D* Velocity2D, float* VelocitySize2D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars");
		
		ABogSpider_Character_BP_C_GetSpiderVelocityVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
		if (VelocitySize != nullptr)
			*VelocitySize = params.VelocitySize;
		if (VelocityDir != nullptr)
			*VelocityDir = params.VelocityDir;
		if (Velocity2D != nullptr)
			*Velocity2D = params.Velocity2D;
		if (VelocitySize2D != nullptr)
			*VelocitySize2D = params.VelocitySize2D;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsAirBraking(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking");
		
		ABogSpider_Character_BP_C_IsAirBraking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.HideWebCables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::HideWebCables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.HideWebCables");
		
		ABogSpider_Character_BP_C_HideWebCables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsInterpolatingMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsInterpolatingMesh(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsInterpolatingMesh");
		
		ABogSpider_Character_BP_C_IsInterpolatingMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClearBioGrappledBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ClearBioGrappledBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClearBioGrappledBuff");
		
		ABogSpider_Character_BP_C_ClearBioGrappledBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappleReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ReleasedChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnBioGrappleReleased(class APrimalCharacter* ReleasedChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappleReleased");
		
		ABogSpider_Character_BP_C_OnBioGrappleReleased_Params params {};
		params.ReleasedChar = ReleasedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledChar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            GrappledChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnBioGrappledChar(class APrimalCharacter* GrappledChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledChar");
		
		ABogSpider_Character_BP_C_OnBioGrappledChar_Params params {};
		params.GrappledChar = GrappledChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanTraceForLandingImpact
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanTraceForLandingImpact(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanTraceForLandingImpact");
		
		ABogSpider_Character_BP_C_CanTraceForLandingImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetLastFallingVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ResetLastFallingVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetLastFallingVelocity");
		
		ABogSpider_Character_BP_C_ResetLastFallingVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetIsAirBraking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewAirBraking                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetIsAirBraking(bool NewAirBraking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetIsAirBraking");
		
		ABogSpider_Character_BP_C_SetIsAirBraking_Params params {};
		params.NewAirBraking = NewAirBraking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetSpiderVelocity(const struct FVector& NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVelocity");
		
		ABogSpider_Character_BP_C_SetSpiderVelocity_Params params {};
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheLastVelocityVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::CacheLastVelocityVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheLastVelocityVars");
		
		ABogSpider_Character_BP_C_CacheLastVelocityVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheCurrentVelocityVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::CacheCurrentVelocityVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheCurrentVelocityVars");
		
		ABogSpider_Character_BP_C_CacheCurrentVelocityVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPSetupTamed");
		
		ABogSpider_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateTimerIntervals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateTimerIntervals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateTimerIntervals");
		
		ABogSpider_Character_BP_C_Tick_UpdateTimerIntervals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanHardLand
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanHardLand(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanHardLand");
		
		ABogSpider_Character_BP_C_CanHardLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForLandingImpact
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_TraceForLandingImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForLandingImpact");
		
		ABogSpider_Character_BP_C_Tick_TraceForLandingImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderLanded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::OnSpiderLanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderLanded");
		
		ABogSpider_Character_BP_C_OnSpiderLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllWebDetachAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::StopAllWebDetachAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllWebDetachAnims");
		
		ABogSpider_Character_BP_C_StopAllWebDetachAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlayWebDetachMontage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsJumpDetach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::PlayWebDetachMontage(bool bIsJumpDetach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlayWebDetachMontage");
		
		ABogSpider_Character_BP_C_PlayWebDetachMontage_Params params {};
		params.bIsJumpDetach = bIsJumpDetach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIncludeUnsticking                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsStuckToWall(bool bIncludeUnsticking, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall");
		
		ABogSpider_Character_BP_C_IsStuckToWall_Params params {};
		params.bIncludeUnsticking = bIncludeUnsticking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIncludeUnsticking                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsStuckToWall_Pure(bool bIncludeUnsticking, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall_Pure");
		
		ABogSpider_Character_BP_C_IsStuckToWall_Pure_Params params {};
		params.bIncludeUnsticking = bIncludeUnsticking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetLookOffsetSocketName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForPrimalChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ABogSpider_Character_BP_C::BPGetLookOffsetSocketName(class APrimalCharacter* ForPrimalChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetLookOffsetSocketName");
		
		ABogSpider_Character_BP_C_BPGetLookOffsetSocketName_Params params {};
		params.ForPrimalChar = ForPrimalChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidClearCarriedCharacter");
		
		ABogSpider_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPUnstasis");
		
		ABogSpider_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSwingingVelocityRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetSwingingVelocityRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSwingingVelocityRatio");
		
		ABogSpider_Character_BP_C_GetSwingingVelocityRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateCharControlRotationTowardsSpider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::RotateCharControlRotationTowardsSpider(class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateCharControlRotationTowardsSpider");
		
		ABogSpider_Character_BP_C_RotateCharControlRotationTowardsSpider_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidBioGrappleTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForGrappleTarget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventTraces                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsValidBioGrappleTarget(class APrimalCharacter* ForGrappleTarget, bool bForStart, bool bPreventTraces, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidBioGrappleTarget");
		
		ABogSpider_Character_BP_C_IsValidBioGrappleTarget_Params params {};
		params.ForGrappleTarget = ForGrappleTarget;
		params.bForStart = bForStart;
		params.bPreventTraces = bPreventTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAllowCarryCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            checkCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter* checkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAllowCarryCharacter");
		
		ABogSpider_Character_BP_C_BPAllowCarryCharacter_Params params {};
		params.checkCharacter = checkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveAnyDamage");
		
		ABogSpider_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.InitBogSpider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::InitBogSpider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InitBogSpider");
		
		ABogSpider_Character_BP_C_InitBogSpider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryUnstickFromWall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::TryUnstickFromWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryUnstickFromWall");
		
		ABogSpider_Character_BP_C_TryUnstickFromWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDoAttack");
		
		ABogSpider_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoBioGrapple
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanDoBioGrapple(bool bForStart, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoBioGrapple");
		
		ABogSpider_Character_BP_C_CanDoBioGrapple_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdatePullingBioGrappledCharVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPulling                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::UpdatePullingBioGrappledCharVars(bool bPulling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdatePullingBioGrappledCharVars");
		
		ABogSpider_Character_BP_C_UpdatePullingBioGrappledCharVars_Params params {};
		params.bPulling = bPulling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybangBioGrapple
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TryBioGrappleActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::WebShootybangBioGrapple(class AActor* TryBioGrappleActor, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybangBioGrapple");
		
		ABogSpider_Character_BP_C_WebShootybangBioGrapple_Params params {};
		params.TryBioGrappleActor = TryBioGrappleActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnTamedProcessOrder");
		
		ABogSpider_Character_BP_C_BPOnTamedProcessOrder_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsWebSprinting_Pure(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting_Pure");
		
		ABogSpider_Character_BP_C_IsWebSprinting_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetBitmaskAsString
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            bitMask                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ABogSpider_Character_BP_C::GetBitmaskAsString(int32_t bitMask, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetBitmaskAsString");
		
		ABogSpider_Character_BP_C_GetBitmaskAsString_Params params {};
		params.bitMask = bitMask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_InputHeartbeat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_InputHeartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_InputHeartbeat");
		
		ABogSpider_Character_BP_C_Tick_InputHeartbeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GenerateInputBitMask
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TriggeredByInput                                           (Parm, ZeroConstructor)
	 * 		int32_t                                            NewBitMask                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GenerateInputBitMask(const class FString& TriggeredByInput, int32_t* NewBitMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GenerateInputBitMask");
		
		ABogSpider_Character_BP_C_GenerateInputBitMask_Params params {};
		params.TriggeredByInput = TriggeredByInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewBitMask != nullptr)
			*NewBitMask = params.NewBitMask;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessSyncedInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ProcessSyncedInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessSyncedInputs");
		
		ABogSpider_Character_BP_C_ProcessSyncedInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveDestroyed");
		
		ABogSpider_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DestroyWebAnchors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::DestroyWebAnchors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DestroyWebAnchors");
		
		ABogSpider_Character_BP_C_DestroyWebAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetupCosmeticsForRider
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::SetupCosmeticsForRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetupCosmeticsForRider");
		
		ABogSpider_Character_BP_C_SetupCosmeticsForRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageWebs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_ManageWebs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageWebs");
		
		ABogSpider_Character_BP_C_Tick_ManageWebs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsGrapplePullJumping
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsGrapplePullJumping(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsGrapplePullJumping");
		
		ABogSpider_Character_BP_C_IsGrapplePullJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWantsToWallStick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWantsToStick                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetWantsToWallStick(bool bWantsToStick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWantsToWallStick");
		
		ABogSpider_Character_BP_C_SetWantsToWallStick_Params params {};
		params.bWantsToStick = bWantsToStick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForStickableWall
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_TraceForStickableWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForStickableWall");
		
		ABogSpider_Character_BP_C_Tick_TraceForStickableWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetIgnoreWebHitRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetIgnoreWebHitRadius(float* Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetIgnoreWebHitRadius");
		
		ABogSpider_Character_BP_C_GetIgnoreWebHitRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ABogSpider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		ABogSpider_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateForceSkidAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateForceSkidAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateForceSkidAnims");
		
		ABogSpider_Character_BP_C_Tick_UpdateForceSkidAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToSwing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::WantsToSwing(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToSwing");
		
		ABogSpider_Character_BP_C_WantsToSwing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              requiredStamina                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::HasEnoughStamina(float requiredStamina, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStamina");
		
		ABogSpider_Character_BP_C_HasEnoughStamina_Params params {};
		params.requiredStamina = requiredStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateSpiderStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderStamina");
		
		ABogSpider_Character_BP_C_Tick_UpdateSpiderStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoGrapplePullJump
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::DoGrapplePullJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoGrapplePullJump");
		
		ABogSpider_Character_BP_C_DoGrapplePullJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetRiderUnboardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABogSpider_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetRiderUnboardDirection");
		
		ABogSpider_Character_BP_C_BPGetRiderUnboardDirection_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ToggleTallModeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeState");
		
		ABogSpider_Character_BP_C_ToggleTallModeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrappleState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateGrappleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrappleState");
		
		ABogSpider_Character_BP_C_Tick_UpdateGrappleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsAirBraking_Pure(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking_Pure");
		
		ABogSpider_Character_BP_C_IsAirBraking_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnRiderMountNotify
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RiderRef                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsRiding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnRiderMountNotify(class APrimalCharacter* RiderRef, bool bIsRiding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnRiderMountNotify");
		
		ABogSpider_Character_BP_C_OnRiderMountNotify_Params params {};
		params.RiderRef = RiderRef;
		params.bIsRiding = bIsRiding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AllowPlayMontage");
		
		ABogSpider_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanEnsnare
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsForStart                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanEnsnare(bool bIsForStart, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanEnsnare");
		
		ABogSpider_Character_BP_C_CanEnsnare_Params params {};
		params.bIsForStart = bIsForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickUpdateEnsnaredChar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::TickUpdateEnsnaredChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickUpdateEnsnaredChar");
		
		ABogSpider_Character_BP_C_TickUpdateEnsnaredChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_StuckToWall
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_StuckToWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_StuckToWall");
		
		ABogSpider_Character_BP_C_Tick_StuckToWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanAttack");
		
		ABogSpider_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsHangingFromWeb
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsHangingFromWeb(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsHangingFromWeb");
		
		ABogSpider_Character_BP_C_IsHangingFromWeb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnStickToWallHit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ABogSpider_Character_BP_C::OnStickToWallHit(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnStickToWallHit");
		
		ABogSpider_Character_BP_C_OnStickToWallHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanStickToWall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNotifyOfInsufficientStamina                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIgnorePostJumpCooldown                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanStickToWall(bool bNotifyOfInsufficientStamina, bool bIgnorePostJumpCooldown, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanStickToWall");
		
		ABogSpider_Character_BP_C_CanStickToWall_Params params {};
		params.bNotifyOfInsufficientStamina = bNotifyOfInsufficientStamina;
		params.bIgnorePostJumpCooldown = bIgnorePostJumpCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	void ABogSpider_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveHit");
		
		ABogSpider_Character_BP_C_ReceiveHit_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanRiderAttack");
		
		ABogSpider_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryManualWebDetach
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDetachLeft                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::TryManualWebDetach(bool bDetachLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryManualWebDetach");
		
		ABogSpider_Character_BP_C_TryManualWebDetach_Params params {};
		params.bDetachLeft = bDetachLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlaySpiderCameraShake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CameraShakeClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ShakeScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ShakeSpeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bScaleShakeWithVelocity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ShakeBaseVelocity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowReplication                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   ShakeScaleClamps                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   ShakeSpeedClamps                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::PlaySpiderCameraShake(class UClass* CameraShakeClass, float ShakeScale, float ShakeSpeed, bool bScaleShakeWithVelocity, float ShakeBaseVelocity, bool bAllowReplication, const struct FVector2D& ShakeScaleClamps, const struct FVector2D& ShakeSpeedClamps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlaySpiderCameraShake");
		
		ABogSpider_Character_BP_C_PlaySpiderCameraShake_Params params {};
		params.CameraShakeClass = CameraShakeClass;
		params.ShakeScale = ShakeScale;
		params.ShakeSpeed = ShakeSpeed;
		params.bScaleShakeWithVelocity = bScaleShakeWithVelocity;
		params.ShakeBaseVelocity = ShakeBaseVelocity;
		params.bAllowReplication = bAllowReplication;
		params.ShakeScaleClamps = ShakeScaleClamps;
		params.ShakeSpeedClamps = ShakeSpeedClamps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateShowCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateShowCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateShowCrosshair");
		
		ABogSpider_Character_BP_C_Tick_UpdateShowCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWaterWalkingSurfaceStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnWaterWalkingSurfaceStateChanged(bool NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWaterWalkingSurfaceStateChanged");
		
		ABogSpider_Character_BP_C_OnWaterWalkingSurfaceStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForWalkingOnWaterSurface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_CheckForWalkingOnWaterSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForWalkingOnWaterSurface");
		
		ABogSpider_Character_BP_C_Tick_CheckForWalkingOnWaterSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateWaterWalkingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceUpdate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::UpdateWaterWalkingState(bool NewState, bool bForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateWaterWalkingState");
		
		ABogSpider_Character_BP_C_UpdateWaterWalkingState_Params params {};
		params.NewState = NewState;
		params.bForceUpdate = bForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentJumpMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetCurrentJumpMontage(class UAnimMontage** Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentJumpMontage");
		
		ABogSpider_Character_BP_C_GetCurrentJumpMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montage != nullptr)
			*Montage = params.Montage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABogSpider_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnStartJump");
		
		ABogSpider_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetTransform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateSpiderTargetTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetTransform");
		
		ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWalkingOnWaterSurface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsWalkingOnWaterSurface(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWalkingOnWaterSurface");
		
		ABogSpider_Character_BP_C_IsWalkingOnWaterSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateOptimalWebHitDist
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateOptimalWebHitDist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateOptimalWebHitDist");
		
		ABogSpider_Character_BP_C_Tick_UpdateOptimalWebHitDist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetWebTraceHitValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  forWebTraceHit                                             (Parm)
	 * 		bool                                               bDebug                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              hitValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetWebTraceHitValue(const struct FHitResult& forWebTraceHit, bool bDebug, float* hitValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetWebTraceHitValue");
		
		ABogSpider_Character_BP_C_GetWebTraceHitValue_Params params {};
		params.forWebTraceHit = forWebTraceHit;
		params.bDebug = bDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hitValue != nullptr)
			*hitValue = params.hitValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForTallMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_CheckForTallMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForTallMode");
		
		ABogSpider_Character_BP_C_Tick_CheckForTallMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldTallMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ShouldTallMode(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldTallMode");
		
		ABogSpider_Character_BP_C_ShouldTallMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.RiderHasWeaponEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::RiderHasWeaponEquipped(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RiderHasWeaponEquipped");
		
		ABogSpider_Character_BP_C_RiderHasWeaponEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTakeOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::OnTakeOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTakeOff");
		
		ABogSpider_Character_BP_C_OnTakeOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TraceStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TraceEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               confirmTraceHits                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              updateAimedCharsRadus                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowHitPullableChars                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               foundHit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  webHit                                                     (Parm, OutParm)
	 * 		float                                              webHitValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::WebTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool confirmTraceHits, float updateAimedCharsRadus, bool bAllowHitPullableChars, bool* foundHit, struct FHitResult* webHit, float* webHitValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebTrace");
		
		ABogSpider_Character_BP_C_WebTrace_Params params {};
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		params.confirmTraceHits = confirmTraceHits;
		params.updateAimedCharsRadus = updateAimedCharsRadus;
		params.bAllowHitPullableChars = bAllowHitPullableChars;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foundHit != nullptr)
			*foundHit = params.foundHit;
		if (webHit != nullptr)
			*webHit = params.webHit;
		if (webHitValue != nullptr)
			*webHitValue = params.webHitValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForBioGrappleTargetInLookDir
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  snarableCharHit                                            (Parm, OutParm)
	 */
	void ABogSpider_Character_BP_C::TraceForBioGrappleTargetInLookDir(bool* Result, struct FHitResult* snarableCharHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForBioGrappleTargetInLookDir");
		
		ABogSpider_Character_BP_C_TraceForBioGrappleTargetInLookDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (snarableCharHit != nullptr)
			*snarableCharHit = params.snarableCharHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPCharacterSleeped");
		
		ABogSpider_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnSetDeath");
		
		ABogSpider_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateRotateToControlRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::UpdateRotateToControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateRotateToControlRotation");
		
		ABogSpider_Character_BP_C_UpdateRotateToControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABogSpider_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpInternal");
		
		ABogSpider_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveTick");
		
		ABogSpider_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateSpiderTargetRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetRotation");
		
		ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGrappleState                                      NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::OnGrappleBuffStateChanged(EGrappleState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffStateChanged");
		
		ABogSpider_Character_BP_C_OnGrappleBuffStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpSpiderMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::InterpSpiderMesh(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpSpiderMesh");
		
		ABogSpider_Character_BP_C_InterpSpiderMesh_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewWorldLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SoftSetSpiderWorldLocation(const struct FVector& NewWorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldLocation");
		
		ABogSpider_Character_BP_C_SoftSetSpiderWorldLocation_Params params {};
		params.NewWorldLocation = NewWorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    newWorldRotation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SoftSetSpiderWorldRotation(const struct FRotator& newWorldRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldRotation");
		
		ABogSpider_Character_BP_C_SoftSetSpiderWorldRotation_Params params {};
		params.newWorldRotation = newWorldRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnMovementModeChangedNotify");
		
		ABogSpider_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestLocationToScreenCenter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocationA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LocationB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    WithViewRot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               A                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetClosestLocationToScreenCenter(const struct FVector& LocationA, const struct FVector& LocationB, const struct FRotator& WithViewRot, bool* A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestLocationToScreenCenter");
		
		ABogSpider_Character_BP_C_GetClosestLocationToScreenCenter_Params params {};
		params.LocationA = LocationA;
		params.LocationB = LocationB;
		params.WithViewRot = WithViewRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (A != nullptr)
			*A = params.A;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidStickToWallHit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bPreventConfirmTraces                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ValidStickNormal                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsValidStickToWallHit(struct FHitResult* Hit, bool bPreventConfirmTraces, bool* bIsValid, struct FVector* ValidStickNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidStickToWallHit");
		
		ABogSpider_Character_BP_C_IsValidStickToWallHit_Params params {};
		params.bPreventConfirmTraces = bPreventConfirmTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ValidStickNormal != nullptr)
			*ValidStickNormal = params.ValidStickNormal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveForward");
		
		ABogSpider_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveRight");
		
		ABogSpider_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryStickingToWall
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtLocation                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::TryStickingToWall(struct FVector* AtLocation, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryStickingToWall");
		
		ABogSpider_Character_BP_C_TryStickingToWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AtLocation != nullptr)
			*AtLocation = params.AtLocation;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryEnsnareChar
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::TryEnsnareChar(class APrimalCharacter* Char, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryEnsnareChar");
		
		ABogSpider_Character_BP_C_TryEnsnareChar_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickBioGrapple
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::TickBioGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickBioGrapple");
		
		ABogSpider_Character_BP_C_TickBioGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerNonDedicated");
		
		ABogSpider_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Has Webs Attached
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RequireNumWebs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::HasWebsAttached(int32_t RequireNumWebs, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Has Webs Attached");
		
		ABogSpider_Character_BP_C_HasWebsAttached_Params params {};
		params.RequireNumWebs = RequireNumWebs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveBeginPlay");
		
		ABogSpider_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SearchForGrapplePoints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Tick_SearchForGrapplePoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SearchForGrapplePoints");
		
		ABogSpider_Character_BP_C_Tick_SearchForGrapplePoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpDetach
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanJumpDetach(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpDetach");
		
		ABogSpider_Character_BP_C_CanJumpDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStaminaPure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              requiredStamina                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::HasEnoughStaminaPure(float requiredStamina, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStaminaPure");
		
		ABogSpider_Character_BP_C_HasEnoughStaminaPure_Params params {};
		params.requiredStamina = requiredStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReduceSpiderStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Stamina                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ReduceSpiderStamina(float Stamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReduceSpiderStamina");
		
		ABogSpider_Character_BP_C_ReduceSpiderStamina_Params params {};
		params.Stamina = Stamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoLifeSteal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::DoLifeSteal(class APrimalCharacter* FromChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoLifeSteal");
		
		ABogSpider_Character_BP_C_DoLifeSteal_Params params {};
		params.FromChar = FromChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerServer");
		
		ABogSpider_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateSpiderCamera(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCamera");
		
		ABogSpider_Character_BP_C_Tick_UpdateSpiderCamera_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetGrappledBuffClassOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* ABogSpider_Character_BP_C::GetGrappledBuffClassOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetGrappledBuffClassOverride");
		
		ABogSpider_Character_BP_C_GetGrappledBuffClassOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappledVars
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::UpdateGrappledVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappledVars");
		
		ABogSpider_Character_BP_C_UpdateGrappledVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifyClearRider");
		
		ABogSpider_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifySetRider");
		
		ABogSpider_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABogSpider_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPModifyFOV");
		
		ABogSpider_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWeb Trace Hit Valid
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ForHit                                                     (Parm)
	 * 		bool                                               bAllowHitPullableChars                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDidHitPullableChar                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::IsWebTraceHitValid(const struct FHitResult& ForHit, bool bAllowHitPullableChars, bool* Result, bool* bDidHitPullableChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWeb Trace Hit Valid");
		
		ABogSpider_Character_BP_C_IsWebTraceHitValid_Params params {};
		params.ForHit = ForHit;
		params.bAllowHitPullableChars = bAllowHitPullableChars;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (bDidHitPullableChar != nullptr)
			*bDidHitPullableChar = params.bDidHitPullableChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybang
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shootOne                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     hitA                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     hitB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::WebShootybang(bool shootOne, const struct FVector& hitA, const struct FVector& hitB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybang");
		
		ABogSpider_Character_BP_C_WebShootybang_Params params {};
		params.shootOne = shootOne;
		params.hitA = hitA;
		params.hitB = hitB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ConfirmWebTraceHit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUpdateAimedChars                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowHitPullableChars                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               confirmed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  confirmedHit                                               (Parm, OutParm)
	 */
	void ABogSpider_Character_BP_C::ConfirmWebTraceHit(const struct FVector& HitLocation, bool bUpdateAimedChars, bool bAllowHitPullableChars, bool* confirmed, struct FHitResult* confirmedHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ConfirmWebTraceHit");
		
		ABogSpider_Character_BP_C_ConfirmWebTraceHit_Params params {};
		params.HitLocation = HitLocation;
		params.bUpdateAimedChars = bUpdateAimedChars;
		params.bAllowHitPullableChars = bAllowHitPullableChars;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (confirmed != nullptr)
			*confirmed = params.confirmed;
		if (confirmedHit != nullptr)
			*confirmedHit = params.confirmedHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessWebTraceHits
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    WithViewRotation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  centerHit                                                  (Parm)
	 * 		struct FHitResult                                  LeftHit                                                    (Parm)
	 * 		struct FHitResult                                  RightHit                                                   (Parm)
	 * 		struct FHitResult                                  bestHit_Single                                             (Parm, OutParm)
	 * 		struct FHitResult                                  bestHit_Left                                               (Parm, OutParm)
	 * 		struct FHitResult                                  bestHit_Right                                              (Parm, OutParm)
	 */
	void ABogSpider_Character_BP_C::ProcessWebTraceHits(const struct FRotator& WithViewRotation, const struct FHitResult& centerHit, const struct FHitResult& LeftHit, const struct FHitResult& RightHit, struct FHitResult* bestHit_Single, struct FHitResult* bestHit_Left, struct FHitResult* bestHit_Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessWebTraceHits");
		
		ABogSpider_Character_BP_C_ProcessWebTraceHits_Params params {};
		params.WithViewRotation = WithViewRotation;
		params.centerHit = centerHit;
		params.LeftHit = LeftHit;
		params.RightHit = RightHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bestHit_Single != nullptr)
			*bestHit_Single = params.bestHit_Single;
		if (bestHit_Left != nullptr)
			*bestHit_Left = params.bestHit_Left;
		if (bestHit_Right != nullptr)
			*bestHit_Right = params.bestHit_Right;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchForAllGrapplePoints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    WithViewRot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseCachedAnchorHits                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundAny                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  foundHit_Center                                            (Parm, OutParm)
	 * 		struct FHitResult                                  foundHit_Left                                              (Parm, OutParm)
	 * 		struct FHitResult                                  foundHit_Right                                             (Parm, OutParm)
	 */
	void ABogSpider_Character_BP_C::SearchForAllGrapplePoints(const struct FRotator& WithViewRot, bool bUseCachedAnchorHits, bool* bFoundAny, struct FHitResult* foundHit_Center, struct FHitResult* foundHit_Left, struct FHitResult* foundHit_Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchForAllGrapplePoints");
		
		ABogSpider_Character_BP_C_SearchForAllGrapplePoints_Params params {};
		params.WithViewRot = WithViewRot;
		params.bUseCachedAnchorHits = bUseCachedAnchorHits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundAny != nullptr)
			*bFoundAny = params.bFoundAny;
		if (foundHit_Center != nullptr)
			*foundHit_Center = params.foundHit_Center;
		if (foundHit_Left != nullptr)
			*foundHit_Left = params.foundHit_Left;
		if (foundHit_Right != nullptr)
			*foundHit_Right = params.foundHit_Right;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasWebsAttached_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            RequireNumWebs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::HasWebsAttached_Pure(int32_t RequireNumWebs, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasWebsAttached_Pure");
		
		ABogSpider_Character_BP_C_HasWebsAttached_Pure_Params params {};
		params.RequireNumWebs = RequireNumWebs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderGrappleState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGrappleState                                      NewGrappleState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetSpiderGrappleState(EGrappleState NewGrappleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderGrappleState");
		
		ABogSpider_Character_BP_C_SetSpiderGrappleState_Params params {};
		params.NewGrappleState = NewGrappleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.AutoSetDesiredGrappleState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::AutoSetDesiredGrappleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AutoSetDesiredGrappleState");
		
		ABogSpider_Character_BP_C_AutoSetDesiredGrappleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ABogSpider_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptInputEvent");
		
		ABogSpider_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPPreventFallDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 * 		float                                              FallDamageAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABogSpider_Character_BP_C::BPPreventFallDamage(struct FHitResult* HitResult, float FallDamageAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPPreventFallDamage");
		
		ABogSpider_Character_BP_C_BPPreventFallDamage_Params params {};
		params.FallDamageAmount = FallDamageAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoJumpDetach
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::DoJumpDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoJumpDetach");
		
		ABogSpider_Character_BP_C_DoJumpDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappleBuffRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAddIfNotFound                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::UpdateGrappleBuffRef(bool bAddIfNotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappleBuffRef");
		
		ABogSpider_Character_BP_C_UpdateGrappleBuffRef_Params params {};
		params.bAddIfNotFound = bAddIfNotFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachBothWebs
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsJumpDetach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventAnim                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               detachedAny                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::DetachBothWebs(bool bIsJumpDetach, bool bPreventAnim, bool* detachedAny)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachBothWebs");
		
		ABogSpider_Character_BP_C_DetachBothWebs_Params params {};
		params.bIsJumpDetach = bIsJumpDetach;
		params.bPreventAnim = bPreventAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (detachedAny != nullptr)
			*detachedAny = params.detachedAny;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachWeb
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLeft                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::DetachWeb(bool bLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachWeb");
		
		ABogSpider_Character_BP_C_DetachWeb_Params params {};
		params.bLeft = bLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestSideToLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ToLoc                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeft                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::GetClosestSideToLocation(const struct FVector& ToLoc, bool* bLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestSideToLocation");
		
		ABogSpider_Character_BP_C_GetClosestSideToLocation_Params params {};
		params.ToLoc = ToLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLeft != nullptr)
			*bLeft = params.bLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoWebTraces
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bRequireStamina                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNotifyOfInsufficientStamina                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CanDoWebTraces(bool bRequireStamina, bool bNotifyOfInsufficientStamina, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoWebTraces");
		
		ABogSpider_Character_BP_C_CanDoWebTraces_Params params {};
		params.bRequireStamina = bRequireStamina;
		params.bNotifyOfInsufficientStamina = bNotifyOfInsufficientStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrapplePointPreviews
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Tick_UpdateGrapplePointPreviews(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrapplePointPreviews");
		
		ABogSpider_Character_BP_C_Tick_UpdateGrapplePointPreviews_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebGrappleTether
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  FromHit                                                    (Parm)
	 * 		bool                                               bLeft                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventNetSync                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NewTetherIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::CreateWebGrappleTether(const struct FHitResult& FromHit, bool bLeft, bool bPreventNetSync, int32_t* NewTetherIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebGrappleTether");
		
		ABogSpider_Character_BP_C_CreateWebGrappleTether_Params params {};
		params.FromHit = FromHit;
		params.bLeft = bLeft;
		params.bPreventNetSync = bPreventNetSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTetherIndex != nullptr)
			*NewTetherIndex = params.NewTetherIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchInDirForValidGrapplePoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    WithViewRot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              traceDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWantsCenter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundAny                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  retHit                                                     (Parm, OutParm)
	 */
	void ABogSpider_Character_BP_C::SearchInDirForValidGrapplePoint(const struct FRotator& WithViewRot, float traceDir, bool bWantsCenter, bool* bFoundAny, struct FHitResult* retHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchInDirForValidGrapplePoint");
		
		ABogSpider_Character_BP_C_SearchInDirForValidGrapplePoint_Params params {};
		params.WithViewRot = WithViewRot;
		params.traceDir = traceDir;
		params.bWantsCenter = bWantsCenter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundAny != nullptr)
			*bFoundAny = params.bFoundAny;
		if (retHit != nullptr)
			*retHit = params.retHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForWebHit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    WithViewRot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCenterTrace                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  foundHit                                                   (Parm, OutParm)
	 * 		float                                              foundHitValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::TraceForWebHit(const struct FRotator& WithViewRot, bool bCenterTrace, bool* bSuccess, struct FHitResult* foundHit, float* foundHitValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForWebHit");
		
		ABogSpider_Character_BP_C_TraceForWebHit_Params params {};
		params.WithViewRot = WithViewRot;
		params.bCenterTrace = bCenterTrace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (foundHit != nullptr)
			*foundHit = params.foundHit;
		if (foundHitValue != nullptr)
			*foundHitValue = params.foundHitValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UserConstructionScript");
		
		ABogSpider_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BlendSpiderVision__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__FinishedFunc");
		
		ABogSpider_Character_BP_C_BlendSpiderVision__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BlendSpiderVision__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__UpdateFunc");
		
		ABogSpider_Character_BP_C_BlendSpiderVision__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachBothWebs
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsJumpDetach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventAnim                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_DetachBothWebs(bool bIsJumpDetach, bool bPreventAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachBothWebs");
		
		ABogSpider_Character_BP_C_Server_DetachBothWebs_Params params {};
		params.bIsJumpDetach = bIsJumpDetach;
		params.bPreventAnim = bPreventAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitRelLoc_A                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor_A                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitRelLoc_B                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor_B                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_WebShootybang(const struct FVector& HitRelLoc_A, class AActor* HitActor_A, const struct FVector& HitRelLoc_B, class AActor* HitActor_B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang");
		
		ABogSpider_Character_BP_C_Server_WebShootybang_Params params {};
		params.HitRelLoc_A = HitRelLoc_A;
		params.HitActor_A = HitActor_A;
		params.HitRelLoc_B = HitRelLoc_B;
		params.HitActor_B = HitActor_B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_One
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitRelLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_WebShootybang_One(const struct FVector& HitRelLoc, class AActor* HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_One");
		
		ABogSpider_Character_BP_C_Server_WebShootybang_One_Params params {};
		params.HitRelLoc = HitRelLoc;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetWalkOnWaterState
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Multi_SetWalkOnWaterState(bool bNewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetWalkOnWaterState");
		
		ABogSpider_Character_BP_C_Multi_SetWalkOnWaterState_Params params {};
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetWalkOnWaterState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_SetWalkOnWaterState(bool bNewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetWalkOnWaterState");
		
		ABogSpider_Character_BP_C_Server_SetWalkOnWaterState_Params params {};
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryStickingToWall
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_TryStickingToWall(const struct FVector& AtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryStickingToWall");
		
		ABogSpider_Character_BP_C_Server_TryStickingToWall_Params params {};
		params.AtLocation = AtLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ReleaseEnsnaredChar
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Server_ReleaseEnsnaredChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ReleaseEnsnaredChar");
		
		ABogSpider_Character_BP_C_Server_ReleaseEnsnaredChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_UnstickFromWall
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Server_UnstickFromWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_UnstickFromWall");
		
		ABogSpider_Character_BP_C_Server_UnstickFromWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_BioGrapple
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EnsnaredActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_WebShootybang_BioGrapple(class AActor* EnsnaredActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_BioGrapple");
		
		ABogSpider_Character_BP_C_Server_WebShootybang_BioGrapple_Params params {};
		params.EnsnaredActor = EnsnaredActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ToggleTallModeState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Server_ToggleTallModeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ToggleTallModeState");
		
		ABogSpider_Character_BP_C_Server_ToggleTallModeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_ToggleTallModeState
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_ToggleTallModeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_ToggleTallModeState");
		
		ABogSpider_Character_BP_C_Multi_ToggleTallModeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SpiderJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Server_SpiderJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SpiderJump");
		
		ABogSpider_Character_BP_C_Server_SpiderJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoSpiderJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::DoSpiderJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoSpiderJump");
		
		ABogSpider_Character_BP_C_DoSpiderJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SpiderJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_SpiderJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SpiderJump");
		
		ABogSpider_Character_BP_C_Multi_SpiderJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWaterWalkingSurfaceStateChanged
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Multi_OnWaterWalkingSurfaceStateChanged(bool NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWaterWalkingSurfaceStateChanged");
		
		ABogSpider_Character_BP_C_Multi_OnWaterWalkingSurfaceStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachWeb
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLeft                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_DetachWeb(bool bLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachWeb");
		
		ABogSpider_Character_BP_C_Server_DetachWeb_Params params {};
		params.bLeft = bLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnDoubleDetach
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bJumpDetach                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Multi_OnDoubleDetach(bool bJumpDetach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnDoubleDetach");
		
		ABogSpider_Character_BP_C_Multi_OnDoubleDetach_Params params {};
		params.bJumpDetach = bJumpDetach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.FinishedReleasingEnsnaredChar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::FinishedReleasingEnsnaredChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.FinishedReleasingEnsnaredChar");
		
		ABogSpider_Character_BP_C_FinishedReleasingEnsnaredChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ToggleTallModeAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeAfterDelay");
		
		ABogSpider_Character_BP_C_ToggleTallModeAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoGrapplePullJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_DoGrapplePullJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoGrapplePullJump");
		
		ABogSpider_Character_BP_C_Multi_DoGrapplePullJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnShootWeb
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Client_OnShootWeb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnShootWeb");
		
		ABogSpider_Character_BP_C_Client_OnShootWeb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncWantsToWallStick
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWantsToStick                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_SyncWantsToWallStick(bool bWantsToStick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncWantsToWallStick");
		
		ABogSpider_Character_BP_C_Server_SyncWantsToWallStick_Params params {};
		params.bWantsToStick = bWantsToStick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.NextTick_SpawnCosmeticActors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::NextTick_SpawnCosmeticActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.NextTick_SpawnCosmeticActors");
		
		ABogSpider_Character_BP_C_NextTick_SpawnCosmeticActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_OnInputChange
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SyncInputBitMask                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_SyncInputs_OnInputChange(int32_t SyncInputBitMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_OnInputChange");
		
		ABogSpider_Character_BP_C_Server_SyncInputs_OnInputChange_Params params {};
		params.SyncInputBitMask = SyncInputBitMask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_Heartbeat
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SyncInputBitMask                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_SyncInputs_Heartbeat(int32_t SyncInputBitMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_Heartbeat");
		
		ABogSpider_Character_BP_C_Server_SyncInputs_Heartbeat_Params params {};
		params.SyncInputBitMask = SyncInputBitMask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebSprintToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewToggle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::SetWebSprintToggle(bool NewToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebSprintToggle");
		
		ABogSpider_Character_BP_C_SetWebSprintToggle_Params params {};
		params.NewToggle = NewToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetControlRot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ResetControlRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetControlRot");
		
		ABogSpider_Character_BP_C_ResetControlRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetActorRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseSoftSet                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Multi_SetActorRotation(const struct FRotator& NewRotation, bool bUseSoftSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetActorRotation");
		
		ABogSpider_Character_BP_C_Multi_SetActorRotation_Params params {};
		params.NewRotation = NewRotation;
		params.bUseSoftSet = bUseSoftSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnJumpDetach
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Client_OnJumpDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnJumpDetach");
		
		ABogSpider_Character_BP_C_Client_OnJumpDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_DamageBrokeWebs
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Client_DamageBrokeWebs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_DamageBrokeWebs");
		
		ABogSpider_Character_BP_C_Client_DamageBrokeWebs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnstickFromWallAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::UnstickFromWallAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnstickFromWallAfterDelay");
		
		ABogSpider_Character_BP_C_UnstickFromWallAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetImpendingLand
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_SetImpendingLand(bool bNewVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetImpendingLand");
		
		ABogSpider_Character_BP_C_Server_SetImpendingLand_Params params {};
		params.bNewVal = bNewVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnSetEnsnaredChar
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_OnSetEnsnaredChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnSetEnsnaredChar");
		
		ABogSpider_Character_BP_C_Multi_OnSetEnsnaredChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebTethersCreated
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  WithTetherHit_Left                                         (Parm)
	 * 		struct FHitResult                                  WithTetherHit_Right                                        (Parm)
	 */
	void ABogSpider_Character_BP_C::Multi_OnWebTethersCreated(const struct FHitResult& WithTetherHit_Left, const struct FHitResult& WithTetherHit_Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebTethersCreated");
		
		ABogSpider_Character_BP_C_Multi_OnWebTethersCreated_Params params {};
		params.WithTetherHit_Left = WithTetherHit_Left;
		params.WithTetherHit_Right = WithTetherHit_Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnStartChargeJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_OnStartChargeJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnStartChargeJump");
		
		ABogSpider_Character_BP_C_Multi_OnStartChargeJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoChargeJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_DoChargeJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoChargeJump");
		
		ABogSpider_Character_BP_C_Multi_DoChargeJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_CancelChargeJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_CancelChargeJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_CancelChargeJump");
		
		ABogSpider_Character_BP_C_Multi_CancelChargeJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTryWebShootyBang
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::OnTryWebShootyBang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTryWebShootyBang");
		
		ABogSpider_Character_BP_C_OnTryWebShootyBang_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCreatingWeb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ResetCreatingWeb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCreatingWeb");
		
		ABogSpider_Character_BP_C_ResetCreatingWeb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebShootybangFailed
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_OnWebShootybangFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebShootybangFailed");
		
		ABogSpider_Character_BP_C_Multi_OnWebShootybangFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryDoAirJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   WithMoveInputs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WithVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    WithControlRot                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_TryDoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryDoAirJump");
		
		ABogSpider_Character_BP_C_Server_TryDoAirJump_Params params {};
		params.WithMoveInputs = WithMoveInputs;
		params.WithVelocity = WithVelocity;
		params.WithControlRot = WithControlRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCanAirJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ResetCanAirJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCanAirJump");
		
		ABogSpider_Character_BP_C_ResetCanAirJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Single
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_FireQuickWebs_Single(const struct FVector& HitLocation, class AActor* HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Single");
		
		ABogSpider_Character_BP_C_Server_FireQuickWebs_Single_Params params {};
		params.HitLocation = HitLocation;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Both
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation_A                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor_A                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation_B                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor_B                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_FireQuickWebs_Both(const struct FVector& HitLocation_A, class AActor* HitActor_A, const struct FVector& HitLocation_B, class AActor* HitActor_B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Both");
		
		ABogSpider_Character_BP_C_Server_FireQuickWebs_Both_Params params {};
		params.HitLocation_A = HitLocation_A;
		params.HitActor_A = HitActor_A;
		params.HitLocation_B = HitLocation_B;
		params.HitActor_B = HitActor_B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::CreateWebVisually_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Left");
		
		ABogSpider_Character_BP_C_CreateWebVisually_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::CreateWebVisually_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Right");
		
		ABogSpider_Character_BP_C_CreateWebVisually_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BreakWebVisually_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Left");
		
		ABogSpider_Character_BP_C_BreakWebVisually_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BreakWebVisually_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Right");
		
		ABogSpider_Character_BP_C_BreakWebVisually_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncSpiderClimbingInputs
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Inputs                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_SyncSpiderClimbingInputs(const struct FVector2D& Inputs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncSpiderClimbingInputs");
		
		ABogSpider_Character_BP_C_Server_SyncSpiderClimbingInputs_Params params {};
		params.Inputs = Inputs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Play
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BlendSpiderVision_Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Play");
		
		ABogSpider_Character_BP_C_BlendSpiderVision_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Reverse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::BlendSpiderVision_Reverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Reverse");
		
		ABogSpider_Character_BP_C_BlendSpiderVision_Reverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshWaterWalkState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::RefreshWaterWalkState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshWaterWalkState");
		
		ABogSpider_Character_BP_C_RefreshWaterWalkState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnQuickFireWebs
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::Multi_OnQuickFireWebs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnQuickFireWebs");
		
		ABogSpider_Character_BP_C_Multi_OnQuickFireWebs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartWebSprintToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::StartWebSprintToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartWebSprintToggle");
		
		ABogSpider_Character_BP_C_StartWebSprintToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_StartChargeJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ClientTimestamp                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_StartChargeJump(double ClientTimestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_StartChargeJump");
		
		ABogSpider_Character_BP_C_Server_StartChargeJump_Params params {};
		params.ClientTimestamp = ClientTimestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DoChargeJump
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ClientTimestamp                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::Server_DoChargeJump(double ClientTimestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DoChargeJump");
		
		ABogSpider_Character_BP_C_Server_DoChargeJump_Params params {};
		params.ClientTimestamp = ClientTimestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionBlendTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::SetSpiderVisionBlendTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionBlendTime");
		
		ABogSpider_Character_BP_C_SetSpiderVisionBlendTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetSpiderTamingVars
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::ResetSpiderTamingVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetSpiderTamingVars");
		
		ABogSpider_Character_BP_C_ResetSpiderTamingVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetTamerAsRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_Character_BP_C::SetTamerAsRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetTamerAsRider");
		
		ABogSpider_Character_BP_C_SetTamerAsRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BogSpider_Character_BP.BogSpider_Character_BP_C.ExecuteUbergraph_BogSpider_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_Character_BP_C::ExecuteUbergraph_BogSpider_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ExecuteUbergraph_BogSpider_Character_BP");
		
		ABogSpider_Character_BP_C_ExecuteUbergraph_BogSpider_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABogSpider_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABogSpider_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BogSpider_Character_BP.BogSpider_Character_BP_C");
		return ptr;
	}

}


