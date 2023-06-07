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
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventRidingInstigator
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BrainSlugControl_C::BPPreventRidingInstigator(class APrimalCharacter* ForPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventRidingInstigator");
		
		ABuff_BrainSlugControl_C_BPPreventRidingInstigator_Params params {};
		params.ForPawn = ForPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DinoInstigatorReceivedRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::DinoInstigatorReceivedRider(class AShooterCharacter* Rider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DinoInstigatorReceivedRider");
		
		ABuff_BrainSlugControl_C_DinoInstigatorReceivedRider_Params params {};
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorDied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::BPInstigatorDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorDied");
		
		ABuff_BrainSlugControl_C_BPInstigatorDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.SetupInstigatorDinoAndAttachSlug
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PossessDino                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::SetupInstigatorDinoAndAttachSlug(class AActor* Instigator, bool PossessDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.SetupInstigatorDinoAndAttachSlug");
		
		ABuff_BrainSlugControl_C_SetupInstigatorDinoAndAttachSlug_Params params {};
		params.Instigator = Instigator;
		params.PossessDino = PossessDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPStasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::BPStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPStasis");
		
		ABuff_BrainSlugControl_C_BPStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPUnstasis");
		
		ABuff_BrainSlugControl_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickClient");
		
		ABuff_BrainSlugControl_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSerializeForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bBeginningSerialize                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::BPPreSerializeForInstigator(bool bBeginningSerialize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSerializeForInstigator");
		
		ABuff_BrainSlugControl_C_BPPreSerializeForInstigator_Params params {};
		params.bBeginningSerialize = bBeginningSerialize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorReceivedKillingDamage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::BPInstigatorReceivedKillingDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorReceivedKillingDamage");
		
		ABuff_BrainSlugControl_C_BPInstigatorReceivedKillingDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSleeped                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::BPInstigatorSleeped(bool bIsSleeped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorSleeped");
		
		ABuff_BrainSlugControl_C_BPInstigatorSleeped_Params params {};
		params.bIsSleeped = bIsSleeped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPBuffPreventUploading
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_BrainSlugControl_C::BPBuffPreventUploading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPBuffPreventUploading");
		
		ABuff_BrainSlugControl_C_BPBuffPreventUploading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffOverrideInventoryAccessInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 InController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInputPressed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BrainSlugControl_C::BuffOverrideInventoryAccessInput(class AController* InController, bool bInputPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffOverrideInventoryAccessInput");
		
		ABuff_BrainSlugControl_C_BuffOverrideInventoryAccessInput_Params params {};
		params.InController = InController;
		params.bInputPressed = bInputPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UpdateTimeAndDamageForInstigator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::UpdateTimeAndDamageForInstigator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UpdateTimeAndDamageForInstigator");
		
		ABuff_BrainSlugControl_C_UpdateTimeAndDamageForInstigator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPForceDinoNameTargetingTeamOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TargetingTeamToCheck                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ABuff_BrainSlugControl_C::BPForceDinoNameTargetingTeamOverride(class AShooterHUD* HUD, int32_t TargetingTeamToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPForceDinoNameTargetingTeamOverride");
		
		ABuff_BrainSlugControl_C_BPForceDinoNameTargetingTeamOverride_Params params {};
		params.HUD = HUD;
		params.TargetingTeamToCheck = TargetingTeamToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.EndBrainControlEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::EndBrainControlEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.EndBrainControlEffects");
		
		ABuff_BrainSlugControl_C_EndBrainControlEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetDinoNameColorOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FColor                                      ColorToOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FColor ABuff_BrainSlugControl_C::BPGetDinoNameColorOverride(class AShooterHUD* HUD, const struct FColor& ColorToOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetDinoNameColorOverride");
		
		ABuff_BrainSlugControl_C_BPGetDinoNameColorOverride_Params params {};
		params.HUD = HUD;
		params.ColorToOverride = ColorToOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DrawBuffFloatingHUD");
		
		ABuff_BrainSlugControl_C_DrawBuffFloatingHUD_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPOverrideTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_BrainSlugControl_C::BPOverrideTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPOverrideTargetingDesire");
		
		ABuff_BrainSlugControl_C_BPOverrideTargetingDesire_Params params {};
		params.forTarget = forTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventFirstPerson
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_BrainSlugControl_C::BPPreventFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventFirstPerson");
		
		ABuff_BrainSlugControl_C_BPPreventFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_BrainSlugControl_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetHUDElements");
		
		ABuff_BrainSlugControl_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BrainSlugControl_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPTryMultiUse");
		
		ABuff_BrainSlugControl_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_BrainSlugControl_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetMultiUseEntries");
		
		ABuff_BrainSlugControl_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::BPPreSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSetupForInstigator");
		
		ABuff_BrainSlugControl_C_BPPreSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveDestroyed");
		
		ABuff_BrainSlugControl_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPDeactivated");
		
		ABuff_BrainSlugControl_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPSetupForInstigator");
		
		ABuff_BrainSlugControl_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UserConstructionScript");
		
		ABuff_BrainSlugControl_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.LaunchClearOfAttachment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::LaunchClearOfAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.LaunchClearOfAttachment");
		
		ABuff_BrainSlugControl_C_LaunchClearOfAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveBeginPlay");
		
		ABuff_BrainSlugControl_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerClearPossessor
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RetainSlugControl                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::ServerClearPossessor(bool RetainSlugControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerClearPossessor");
		
		ABuff_BrainSlugControl_C_ServerClearPossessor_Params params {};
		params.RetainSlugControl = RetainSlugControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_DisableInput
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::Multi_DisableInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_DisableInput");
		
		ABuff_BrainSlugControl_C_Multi_DisableInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BeginPossessionResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::BeginPossessionResponse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BeginPossessionResponse");
		
		ABuff_BrainSlugControl_C_BeginPossessionResponse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::RespondToPlayerDeath(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerDeath");
		
		ABuff_BrainSlugControl_C_RespondToPlayerDeath_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerSleep
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsSleeping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::RespondToPlayerSleep(class APrimalCharacter* forCharacter, bool bIsSleeping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerSleep");
		
		ABuff_BrainSlugControl_C_RespondToPlayerSleep_Params params {};
		params.forCharacter = forCharacter;
		params.bIsSleeping = bIsSleeping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerTryRepossesion
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::ServerTryRepossesion(class AShooterPlayerController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerTryRepossesion");
		
		ABuff_BrainSlugControl_C_ServerTryRepossesion_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_EnablePossession
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    NewPossessingPC                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::Multi_EnablePossession(class AShooterPlayerController* NewPossessingPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_EnablePossession");
		
		ABuff_BrainSlugControl_C_Multi_EnablePossession_Params params {};
		params.NewPossessingPC = NewPossessingPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickServer");
		
		ABuff_BrainSlugControl_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TryingToClearRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        ForDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::TryingToClearRider(class AShooterCharacter* RiderClearing, class APrimalDinoCharacter* ForDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TryingToClearRider");
		
		ABuff_BrainSlugControl_C_TryingToClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		params.ForDino = ForDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BindClearRiderEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::BindClearRiderEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BindClearRiderEvent");
		
		ABuff_BrainSlugControl_C_BindClearRiderEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.KillAttachedChar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::KillAttachedChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.KillAttachedChar");
		
		ABuff_BrainSlugControl_C_KillAttachedChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DoMultiUseAccessInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::DoMultiUseAccessInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DoMultiUseAccessInventory");
		
		ABuff_BrainSlugControl_C_DoMultiUseAccessInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DelayedDeactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::DelayedDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DelayedDeactivate");
		
		ABuff_BrainSlugControl_C_DelayedDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerDeactivate
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::ServerDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerDeactivate");
		
		ABuff_BrainSlugControl_C_ServerDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TestingMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OutMessage                                                 (Parm, ZeroConstructor)
	 */
	void ABuff_BrainSlugControl_C::TestingMessage(const class FString& OutMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TestingMessage");
		
		ABuff_BrainSlugControl_C_TestingMessage_Params params {};
		params.OutMessage = OutMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_SetupDinos
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugControl_C::Multi_SetupDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_SetupDinos");
		
		ABuff_BrainSlugControl_C_Multi_SetupDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ExecuteUbergraph_Buff_BrainSlugControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugControl_C::ExecuteUbergraph_Buff_BrainSlugControl(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ExecuteUbergraph_Buff_BrainSlugControl");
		
		ABuff_BrainSlugControl_C_ExecuteUbergraph_Buff_BrainSlugControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BrainSlugControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BrainSlugControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BrainSlugControl.Buff_BrainSlugControl_C");
		return ptr;
	}

}


