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
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUpdateTetherLength
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 * 		float                                              WithLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Grappled_BogSpider_C::CanUpdateTetherLength(struct FGrappleTether* ForTether, float WithLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUpdateTetherLength");
		
		ABuff_Grappled_BogSpider_C_CanUpdateTetherLength_Params params {};
		params.WithLength = WithLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldUseDynamicTetherTension
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_Grappled_BogSpider_C::ShouldUseDynamicTetherTension(struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldUseDynamicTetherTension");
		
		ABuff_Grappled_BogSpider_C_ShouldUseDynamicTetherTension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanDrawSpiderVisionOutlines
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::CanDrawSpiderVisionOutlines(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanDrawSpiderVisionOutlines");
		
		ABuff_Grappled_BogSpider_C_CanDrawSpiderVisionOutlines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.DisplayGrappleSystemHudNotification
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      FromActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NotificationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NotificationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ReasonString                                               (Parm, ZeroConstructor)
	 */
	bool ABuff_Grappled_BogSpider_C::DisplayGrappleSystemHudNotification(class AShooterPlayerController* ForPC, class AActor* FromActor, unsigned char NotificationType, int32_t NotificationID, const class FString& ReasonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.DisplayGrappleSystemHudNotification");
		
		ABuff_Grappled_BogSpider_C_DisplayGrappleSystemHudNotification_Params params {};
		params.ForPC = ForPC;
		params.FromActor = FromActor;
		params.NotificationType = NotificationType;
		params.NotificationID = NotificationID;
		params.ReasonString = ReasonString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReturnToIdleGrappleState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Grappled_BogSpider_C::ShouldReturnToIdleGrappleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReturnToIdleGrappleState");
		
		ABuff_Grappled_BogSpider_C_ShouldReturnToIdleGrappleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsOwnerLookingAtAgainstSurface
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Grappled_BogSpider_C::IsOwnerLookingAtAgainstSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsOwnerLookingAtAgainstSurface");
		
		ABuff_Grappled_BogSpider_C_IsOwnerLookingAtAgainstSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanTraceForSwingCollisions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::CanTraceForSwingCollisions(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanTraceForSwingCollisions");
		
		ABuff_Grappled_BogSpider_C_CanTraceForSwingCollisions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerClientPositionErrorTolerance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::ResetOwnerClientPositionErrorTolerance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerClientPositionErrorTolerance");
		
		ABuff_Grappled_BogSpider_C_ResetOwnerClientPositionErrorTolerance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetPullingSlingshotRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::GetPullingSlingshotRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetPullingSlingshotRatio");
		
		ABuff_Grappled_BogSpider_C_GetPullingSlingshotRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsGrappledCharHardAttached
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Grappled_BogSpider_C::IsGrappledCharHardAttached(class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsGrappledCharHardAttached");
		
		ABuff_Grappled_BogSpider_C_IsGrappledCharHardAttached_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherReleaseMaxVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForReleasingChar                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	float ABuff_Grappled_BogSpider_C::GetGrappleTetherReleaseMaxVelocity(class APrimalCharacter* ForReleasingChar, struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherReleaseMaxVelocity");
		
		ABuff_Grappled_BogSpider_C_GetGrappleTetherReleaseMaxVelocity_Params params {};
		params.ForReleasingChar = ForReleasingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetMaxTetherLength
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	float ABuff_Grappled_BogSpider_C::GetMaxTetherLength(struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetMaxTetherLength");
		
		ABuff_Grappled_BogSpider_C_GetMaxTetherLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetIdealSwingHeightAboveFloor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ABuff_Grappled_BogSpider_C::GetIdealSwingHeightAboveFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetIdealSwingHeightAboveFloor");
		
		ABuff_Grappled_BogSpider_C_GetIdealSwingHeightAboveFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanSyncGrappleTetherLengths
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Grappled_BogSpider_C::CanSyncGrappleTetherLengths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanSyncGrappleTetherLengths");
		
		ABuff_Grappled_BogSpider_C_CanSyncGrappleTetherLengths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_Grappled_BogSpider_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPOverrideCharacterNewFallVelocity");
		
		ABuff_Grappled_BogSpider_C_BPOverrideCharacterNewFallVelocity_Params params {};
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
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnSwingTracePredictedHitFound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtHitLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::OnSwingTracePredictedHitFound(const struct FVector& AtHitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnSwingTracePredictedHitFound");
		
		ABuff_Grappled_BogSpider_C_OnSwingTracePredictedHitFound_Params params {};
		params.AtHitLocation = AtHitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUseWebSlingshot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::CanUseWebSlingshot(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUseWebSlingshot");
		
		ABuff_Grappled_BogSpider_C_CanUseWebSlingshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerVars
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::ResetOwnerVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerVars");
		
		ABuff_Grappled_BogSpider_C_ResetOwnerVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledCharDeath
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DyingChar                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::OnGrappledCharDeath(class APrimalCharacter* DyingChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledCharDeath");
		
		ABuff_Grappled_BogSpider_C_OnGrappledCharDeath_Params params {};
		params.DyingChar = DyingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanBeGrappledAgainstSurface
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Grappled_BogSpider_C::CanBeGrappledAgainstSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanBeGrappledAgainstSurface");
		
		ABuff_Grappled_BogSpider_C_CanBeGrappledAgainstSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsCustomDepthStencilValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::SetActorComponentsCustomDepthStencilValue(class AActor* forActor, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsCustomDepthStencilValue");
		
		ABuff_Grappled_BogSpider_C_SetActorComponentsCustomDepthStencilValue_Params params {};
		params.forActor = forActor;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsRenderCustomDepth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRender                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::SetActorComponentsRenderCustomDepth(class AActor* forActor, bool bRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsRenderCustomDepth");
		
		ABuff_Grappled_BogSpider_C_SetActorComponentsRenderCustomDepth_Params params {};
		params.forActor = forActor;
		params.bRender = bRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionActorBounds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::UpdateSpiderVisionActorBounds(bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionActorBounds");
		
		ABuff_Grappled_BogSpider_C_UpdateSpiderVisionActorBounds_Params params {};
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetSpiderVisionEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::SetSpiderVisionEnabled(class APlayerController* ForController, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetSpiderVisionEnabled");
		
		ABuff_Grappled_BogSpider_C_SetSpiderVisionEnabled_Params params {};
		params.ForController = ForController;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_CheckForDeactivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::Tick_CheckForDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_CheckForDeactivate");
		
		ABuff_Grappled_BogSpider_C_Tick_CheckForDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPDeactivated");
		
		ABuff_Grappled_BogSpider_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionPostProcess
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::UpdateSpiderVisionPostProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionPostProcess");
		
		ABuff_Grappled_BogSpider_C_UpdateSpiderVisionPostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanPullChar
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PullChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Grappled_BogSpider_C::CanPullChar(class APrimalCharacter* PullChar, bool bForStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanPullChar");
		
		ABuff_Grappled_BogSpider_C_CanPullChar_Params params {};
		params.PullChar = PullChar;
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsPullingBioGrappledChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::IsPullingBioGrappledChar(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsPullingBioGrappledChar");
		
		ABuff_Grappled_BogSpider_C_IsPullingBioGrappledChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateOwnerMovementSpeed
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithCharVelocity                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::UpdateOwnerMovementSpeed(struct FVector* WithCharVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateOwnerMovementSpeed");
		
		ABuff_Grappled_BogSpider_C_UpdateOwnerMovementSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithCharVelocity != nullptr)
			*WithCharVelocity = params.WithCharVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherRemoved
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              RemovedTether                                              (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Grappled_BogSpider_C::OnGrappleTetherRemoved(struct FGrappleTether* RemovedTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherRemoved");
		
		ABuff_Grappled_BogSpider_C_OnGrappleTetherRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RemovedTether != nullptr)
			*RemovedTether = params.RemovedTether;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherAdded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              AddedTether                                                (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Grappled_BogSpider_C::OnGrappleTetherAdded(struct FGrappleTether* AddedTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherAdded");
		
		ABuff_Grappled_BogSpider_C_OnGrappleTetherAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AddedTether != nullptr)
			*AddedTether = params.AddedTether;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.RotateSwingingVelocityWithLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentVelDir                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RotatedVelDir                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelDir                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::RotateSwingingVelocityWithLookDir(const struct FVector& CurrentVelDir, float DeltaTime, struct FVector* RotatedVelDir, struct FVector* TargetVelDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.RotateSwingingVelocityWithLookDir");
		
		ABuff_Grappled_BogSpider_C_RotateSwingingVelocityWithLookDir_Params params {};
		params.CurrentVelDir = CurrentVelDir;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RotatedVelDir != nullptr)
			*RotatedVelDir = params.RotatedVelDir;
		if (TargetVelDir != nullptr)
			*TargetVelDir = params.TargetVelDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.AddAntiGravityPullVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ToVelocity                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::AddAntiGravityPullVelocity(struct FVector* ToVelocity, class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.AddAntiGravityPullVelocity");
		
		ABuff_Grappled_BogSpider_C_AddAntiGravityPullVelocity_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToVelocity != nullptr)
			*ToVelocity = params.ToVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForAutoBreakTether
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              CheckTether                                                (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_Grappled_BogSpider_C::CheckForAutoBreakTether(struct FGrappleTether* CheckTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForAutoBreakTether");
		
		ABuff_Grappled_BogSpider_C_CheckForAutoBreakTether_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckTether != nullptr)
			*CheckTether = params.CheckTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReplicateOwnerInputs
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Grappled_BogSpider_C::ShouldReplicateOwnerInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReplicateOwnerInputs");
		
		ABuff_Grappled_BogSpider_C_ShouldReplicateOwnerInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentTetherMoveDir
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	struct FVector ABuff_Grappled_BogSpider_C::GetCurrentTetherMoveDir(struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentTetherMoveDir");
		
		ABuff_Grappled_BogSpider_C_GetCurrentTetherMoveDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ApplyTetherMoveVelocity
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::ApplyTetherMoveVelocity(struct FVector* CurrentVelocity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ApplyTetherMoveVelocity");
		
		ABuff_Grappled_BogSpider_C_ApplyTetherMoveVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentVelocity != nullptr)
			*CurrentVelocity = params.CurrentVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SyncSlingshotRatios
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForceSync                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::SyncSlingshotRatios(bool bForceSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SyncSlingshotRatios");
		
		ABuff_Grappled_BogSpider_C_SyncSlingshotRatios_Params params {};
		params.bForceSync = bForceSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ForceStopSlingshot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::ForceStopSlingshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ForceStopSlingshot");
		
		ABuff_Grappled_BogSpider_C_ForceStopSlingshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::IsSlingshotLaunching(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunching");
		
		ABuff_Grappled_BogSpider_C_IsSlingshotLaunching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunchingPure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::IsSlingshotLaunchingPure(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunchingPure");
		
		ABuff_Grappled_BogSpider_C_IsSlingshotLaunchingPure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ClampGrappleVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ClampVelocity                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::ClampGrappleVelocity(struct FVector* ClampVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ClampGrappleVelocity");
		
		ABuff_Grappled_BogSpider_C_ClampGrappleVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClampVelocity != nullptr)
			*ClampVelocity = params.ClampVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetTetherBreakLimit_OwnerPastCurrentLengthDelta
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	float ABuff_Grappled_BogSpider_C::GetTetherBreakLimit_OwnerPastCurrentLengthDelta(struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetTetherBreakLimit_OwnerPastCurrentLengthDelta");
		
		ABuff_Grappled_BogSpider_C_GetTetherBreakLimit_OwnerPastCurrentLengthDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldTetherBreak
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideBreakPastDist                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Grappled_BogSpider_C::ShouldTetherBreak(struct FGrappleTether* ForTether, class APrimalCharacter* forChar, float OverrideBreakPastDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldTetherBreak");
		
		ABuff_Grappled_BogSpider_C_ShouldTetherBreak_Params params {};
		params.forChar = forChar;
		params.OverrideBreakPastDist = OverrideBreakPastDist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSpiderTryingToSlingshot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     WithVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::IsSpiderTryingToSlingshot(struct FGrappleTether* ForTether, const struct FVector& WithVelocity, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSpiderTryingToSlingshot");
		
		ABuff_Grappled_BogSpider_C_IsSpiderTryingToSlingshot_Params params {};
		params.WithVelocity = WithVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SimulateTautTetherForces
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithCharVelocity                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LastGravityZ                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::SimulateTautTetherForces(struct FVector* WithCharVelocity, float DeltaTime, float LastGravityZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SimulateTautTetherForces");
		
		ABuff_Grappled_BogSpider_C_SimulateTautTetherForces_Params params {};
		params.DeltaTime = DeltaTime;
		params.LastGravityZ = LastGravityZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithCharVelocity != nullptr)
			*WithCharVelocity = params.WithCharVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_Grappled_BogSpider_C::BPGetGravityZScale(float currentScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPGetGravityZScale");
		
		ABuff_Grappled_BogSpider_C_BPGetGravityZScale_Params params {};
		params.currentScale = currentScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsTetherLeftWeb
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              Tether                                                     (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsWebTether                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLeftWeb                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::IsTetherLeftWeb(struct FGrappleTether* Tether, bool* bIsWebTether, bool* bIsLeftWeb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsTetherLeftWeb");
		
		ABuff_Grappled_BogSpider_C_IsTetherLeftWeb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tether != nullptr)
			*Tether = params.Tether;
		if (bIsWebTether != nullptr)
			*bIsWebTether = params.bIsWebTether;
		if (bIsLeftWeb != nullptr)
			*bIsLeftWeb = params.bIsLeftWeb;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.WhichWebIsOnRightSideOfView
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    WithViewRot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeft                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::WhichWebIsOnRightSideOfView(const struct FRotator& WithViewRot, bool* bLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.WhichWebIsOnRightSideOfView");
		
		ABuff_Grappled_BogSpider_C_WhichWebIsOnRightSideOfView_Params params {};
		params.WithViewRot = WithViewRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLeft != nullptr)
			*bLeft = params.bLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanOwnerGrappleSwing
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Grappled_BogSpider_C::CanOwnerGrappleSwing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanOwnerGrappleSwing");
		
		ABuff_Grappled_BogSpider_C_CanOwnerGrappleSwing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentGrappleState
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	EGrappleState ABuff_Grappled_BogSpider_C::GetCurrentGrappleState(struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentGrappleState");
		
		ABuff_Grappled_BogSpider_C_GetCurrentGrappleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanRotateCharVelocity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::CanRotateCharVelocity(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanRotateCharVelocity");
		
		ABuff_Grappled_BogSpider_C_CanRotateCharVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyOverriddenCharVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentCharVelocity                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::ModifyOverriddenCharVelocity(struct FVector* CurrentCharVelocity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyOverriddenCharVelocity");
		
		ABuff_Grappled_BogSpider_C_ModifyOverriddenCharVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCharVelocity != nullptr)
			*CurrentCharVelocity = params.CurrentCharVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnReleasedPrimalChar
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ReleasedChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::OnReleasedPrimalChar(class APrimalCharacter* ReleasedChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnReleasedPrimalChar");
		
		ABuff_Grappled_BogSpider_C_OnReleasedPrimalChar_Params params {};
		params.ReleasedChar = ReleasedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledPrimalChar
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            GrappledChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGrappleTether                              WithMasterTether                                           (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Grappled_BogSpider_C::OnGrappledPrimalChar(class APrimalCharacter* GrappledChar, struct FGrappleTether* WithMasterTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledPrimalChar");
		
		ABuff_Grappled_BogSpider_C_OnGrappledPrimalChar_Params params {};
		params.GrappledChar = GrappledChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithMasterTether != nullptr)
			*WithMasterTether = params.WithMasterTether;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsValidSwingHit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  CheckHit                                                   (Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::IsValidSwingHit(struct FHitResult* CheckHit, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsValidSwingHit");
		
		ABuff_Grappled_BogSpider_C_IsValidSwingHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckHit != nullptr)
			*CheckHit = params.CheckHit;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ReceiveBeginPlay");
		
		ABuff_Grappled_BogSpider_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyTetherMoveVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentMoveVelocity                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Grappled_BogSpider_C::ModifyTetherMoveVelocity(struct FVector* CurrentMoveVelocity, struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyTetherMoveVelocity");
		
		ABuff_Grappled_BogSpider_C_ModifyTetherMoveVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentMoveVelocity != nullptr)
			*CurrentMoveVelocity = params.CurrentMoveVelocity;
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickServer");
		
		ABuff_Grappled_BogSpider_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForSwingCollision
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtProjectedLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               foundHit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  swingHit                                                   (Parm, OutParm)
	 */
	void ABuff_Grappled_BogSpider_C::CheckForSwingCollision(const struct FVector& AtProjectedLocation, bool* foundHit, struct FHitResult* swingHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForSwingCollision");
		
		ABuff_Grappled_BogSpider_C_CheckForSwingCollision_Params params {};
		params.AtProjectedLocation = AtProjectedLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foundHit != nullptr)
			*foundHit = params.foundHit;
		if (swingHit != nullptr)
			*swingHit = params.swingHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickClient");
		
		ABuff_Grappled_BogSpider_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_TraceForSwingCollisions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::Tick_TraceForSwingCollisions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_TraceForSwingCollisions");
		
		ABuff_Grappled_BogSpider_C_Tick_TraceForSwingCollisions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullMaxVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForPullingChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	float ABuff_Grappled_BogSpider_C::GetGrappleTetherPullMaxVelocity(class APrimalCharacter* ForPullingChar, struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullMaxVelocity");
		
		ABuff_Grappled_BogSpider_C_GetGrappleTetherPullMaxVelocity_Params params {};
		params.ForPullingChar = ForPullingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullAcceleration
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForPullingChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	float ABuff_Grappled_BogSpider_C::GetGrappleTetherPullAcceleration(class APrimalCharacter* ForPullingChar, struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullAcceleration");
		
		ABuff_Grappled_BogSpider_C_GetGrappleTetherPullAcceleration_Params params {};
		params.ForPullingChar = ForPullingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleVelocityDampingRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 */
	float ABuff_Grappled_BogSpider_C::GetGrappleVelocityDampingRate(class APrimalCharacter* forChar, struct FGrappleTether* ForTether)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleVelocityDampingRate");
		
		ABuff_Grappled_BogSpider_C_GetGrappleVelocityDampingRate_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanChangeGrappleState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      DesiredGrappleState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Grappled_BogSpider_C::CanChangeGrappleState(unsigned char DesiredGrappleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanChangeGrappleState");
		
		ABuff_Grappled_BogSpider_C_CanChangeGrappleState_Params params {};
		params.DesiredGrappleState = DesiredGrappleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldForceOwnerIntoFallingState
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGrappleTether                              ForTether                                                  (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     WithOwnerVelocity                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      CheckMovementModeOverride                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Grappled_BogSpider_C::ShouldForceOwnerIntoFallingState(struct FGrappleTether* ForTether, struct FVector* WithOwnerVelocity, EMovementMode CheckMovementModeOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldForceOwnerIntoFallingState");
		
		ABuff_Grappled_BogSpider_C_ShouldForceOwnerIntoFallingState_Params params {};
		params.CheckMovementModeOverride = CheckMovementModeOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForTether != nullptr)
			*ForTether = params.ForTether;
		if (WithOwnerVelocity != nullptr)
			*WithOwnerVelocity = params.WithOwnerVelocity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTethersChanged
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::OnGrappleTethersChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTethersChanged");
		
		ABuff_Grappled_BogSpider_C_OnGrappleTethersChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.EndGrapple
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::EndGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.EndGrapple");
		
		ABuff_Grappled_BogSpider_C_EndGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleStateChangedNotify
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      NewGrappleState                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsEarlyNotify                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::OnGrappleStateChangedNotify(unsigned char* NewGrappleState, bool bIsEarlyNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleStateChangedNotify");
		
		ABuff_Grappled_BogSpider_C_OnGrappleStateChangedNotify_Params params {};
		params.bIsEarlyNotify = bIsEarlyNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewGrappleState != nullptr)
			*NewGrappleState = params.NewGrappleState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UserConstructionScript");
		
		ABuff_Grappled_BogSpider_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Server_OnSwingTracePredictedHitFound
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtProjectedLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::Server_OnSwingTracePredictedHitFound(const struct FVector& AtProjectedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Server_OnSwingTracePredictedHitFound");
		
		ABuff_Grappled_BogSpider_C_Server_OnSwingTracePredictedHitFound_Params params {};
		params.AtProjectedLocation = AtProjectedLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_ForceStopSlingshot
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Grappled_BogSpider_C::Multi_ForceStopSlingshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_ForceStopSlingshot");
		
		ABuff_Grappled_BogSpider_C_Multi_ForceStopSlingshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_SyncSlingshotRatios
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Ratios                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::Multi_SyncSlingshotRatios(const struct FVector2D& Ratios)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_SyncSlingshotRatios");
		
		ABuff_Grappled_BogSpider_C_Multi_SyncSlingshotRatios_Params params {};
		params.Ratios = Ratios;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ExecuteUbergraph_Buff_Grappled_BogSpider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Grappled_BogSpider_C::ExecuteUbergraph_Buff_Grappled_BogSpider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ExecuteUbergraph_Buff_Grappled_BogSpider");
		
		ABuff_Grappled_BogSpider_C_ExecuteUbergraph_Buff_Grappled_BogSpider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Grappled_BogSpider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Grappled_BogSpider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C");
		return ptr;
	}

}


