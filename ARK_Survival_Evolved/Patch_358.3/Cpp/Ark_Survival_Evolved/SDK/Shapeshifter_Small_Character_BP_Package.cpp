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
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideMutationLabels
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               male                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString AShapeshifter_Small_Character_BP_C::BPOverrideMutationLabels(bool male)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideMutationLabels");
		
		AShapeshifter_Small_Character_BP_C_BPOverrideMutationLabels_Params params {};
		params.male = male;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPNotifyLevelUp");
		
		AShapeshifter_Small_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetBiglyStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::GetBiglyStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetBiglyStats");
		
		AShapeshifter_Small_Character_BP_C_GetBiglyStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetStatusNameString
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString AShapeshifter_Small_Character_BP_C::BPGetStatusNameString(EPrimalCharacterStatusValue ValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetStatusNameString");
		
		AShapeshifter_Small_Character_BP_C_BPGetStatusNameString_Params params {};
		params.ValueType = ValueType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateBiglyStatsCache
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Bigly                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::UpdateBiglyStatsCache(class APrimalCharacter* Bigly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateBiglyStatsCache");
		
		AShapeshifter_Small_Character_BP_C_UpdateBiglyStatsCache_Params params {};
		params.Bigly = Bigly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPBecameNewBaby
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Parent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::BPBecameNewBaby(class APrimalDinoCharacter* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPBecameNewBaby");
		
		AShapeshifter_Small_Character_BP_C_BPBecameNewBaby_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DoMate
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        WithMate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::DoMate(class APrimalDinoCharacter* WithMate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DoMate");
		
		AShapeshifter_Small_Character_BP_C_DoMate_Params params {};
		params.WithMate = WithMate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnDinoCheat");
		
		AShapeshifter_Small_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_bAllowMating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::OnRep_bAllowMating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_bAllowMating");
		
		AShapeshifter_Small_Character_BP_C_OnRep_bAllowMating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanCryo");
		
		AShapeshifter_Small_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateAllowMating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::UpdateAllowMating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateAllowMating");
		
		AShapeshifter_Small_Character_BP_C_UpdateAllowMating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintDrawFloatingHUD");
		
		AShapeshifter_Small_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BP_OnSetDeath");
		
		AShapeshifter_Small_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Spawn Bigly Fn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::SpawnBiglyFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Spawn Bigly Fn");
		
		AShapeshifter_Small_Character_BP_C_SpawnBiglyFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerNonDedicated");
		
		AShapeshifter_Small_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Throttled TickFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::ThrottledTickFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Throttled TickFn");
		
		AShapeshifter_Small_Character_BP_C_ThrottledTickFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check Wild Should Random TransformFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::CheckWildShouldRandomTransformFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check Wild Should Random TransformFn");
		
		AShapeshifter_Small_Character_BP_C_CheckWildShouldRandomTransformFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.StartTransform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SpawnBigly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               QueueRoar                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::StartTransform(bool SpawnBigly, bool QueueRoar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.StartTransform");
		
		AShapeshifter_Small_Character_BP_C_StartTransform_Params params {};
		params.SpawnBigly = SpawnBigly;
		params.QueueRoar = QueueRoar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.isTransforming
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::isTransforming(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.isTransforming");
		
		AShapeshifter_Small_Character_BP_C_isTransforming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanMountOnCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPCanMountOnCharacter(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanMountOnCharacter");
		
		AShapeshifter_Small_Character_BP_C_BPCanMountOnCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AShapeshifter_Small_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetMultiUseEntries");
		
		AShapeshifter_Small_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Small_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AllowPlayMontage");
		
		AShapeshifter_Small_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideTamingDescriptionLabel
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 TextColor                                                  (Parm, OutParm, ReferenceParm)
	 */
	class FString AShapeshifter_Small_Character_BP_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideTamingDescriptionLabel");
		
		AShapeshifter_Small_Character_BP_C_BPOverrideTamingDescriptionLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextColor != nullptr)
			*TextColor = params.TextColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDisplayTamedMessage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPDisplayTamedMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDisplayTamedMessage");
		
		AShapeshifter_Small_Character_BP_C_BPDisplayTamedMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintTamedTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::BlueprintTamedTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintTamedTick");
		
		AShapeshifter_Small_Character_BP_C_BlueprintTamedTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_InitialReplicationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::OnRep_InitialReplicationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_InitialReplicationComplete");
		
		AShapeshifter_Small_Character_BP_C_OnRep_InitialReplicationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AShapeshifter_Small_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnLanded");
		
		AShapeshifter_Small_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DinoShoulderMountedLaunch
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     launchDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           throwingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::DinoShoulderMountedLaunch(const struct FVector& launchDir, class AShooterCharacter* throwingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DinoShoulderMountedLaunch");
		
		AShapeshifter_Small_Character_BP_C_DinoShoulderMountedLaunch_Params params {};
		params.launchDir = launchDir;
		params.throwingCharacter = throwingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPModifyAimOffsetNoTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Aim                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AShapeshifter_Small_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPModifyAimOffsetNoTarget");
		
		AShapeshifter_Small_Character_BP_C_BPModifyAimOffsetNoTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Aim != nullptr)
			*Aim = params.Aim;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPHandlePoop
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPHandlePoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPHandlePoop");
		
		AShapeshifter_Small_Character_BP_C_BPHandlePoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Small_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintCanAttack");
		
		AShapeshifter_Small_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CalculateTransformationCountRequiredForTame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::CalculateTransformationCountRequiredForTame(int32_t Level, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CalculateTransformationCountRequiredForTame");
		
		AShapeshifter_Small_Character_BP_C_CalculateTransformationCountRequiredForTame_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UnTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TransformationCount                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        Bigly                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    TamingController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::UnTransform(int32_t TransformationCount, class APrimalDinoCharacter* Bigly, class AShooterPlayerController* TamingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UnTransform");
		
		AShapeshifter_Small_Character_BP_C_UnTransform_Params params {};
		params.TransformationCount = TransformationCount;
		params.Bigly = Bigly;
		params.TamingController = TamingController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Calculate Current Element Count Required for Transform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::CalculateCurrentElementCountRequiredforTransform(int32_t* cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Calculate Current Element Count Required for Transform");
		
		AShapeshifter_Small_Character_BP_C_CalculateCurrentElementCountRequiredforTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cost != nullptr)
			*cost = params.cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTorpidityProgressBarIfActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPDinoTooltipCustomTorpidityProgressBar(bool* overrideTorpidityProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar");
		
		AShapeshifter_Small_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (overrideTorpidityProgressBarIfActive != nullptr)
			*overrideTorpidityProgressBarIfActive = params.overrideTorpidityProgressBarIfActive;
		if (progressPercent != nullptr)
			*progressPercent = params.progressPercent;
		if (Label != nullptr)
			*Label = params.Label;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTamingProgressBarIfActive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");
		
		AShapeshifter_Small_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (overrideTamingProgressBarIfActive != nullptr)
			*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
		if (progressPercent != nullptr)
			*progressPercent = params.progressPercent;
		if (Label != nullptr)
			*Label = params.Label;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.K2_OnMovementModeChanged");
		
		AShapeshifter_Small_Character_BP_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryThrowPoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::TryThrowPoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryThrowPoop");
		
		AShapeshifter_Small_Character_BP_C_TryThrowPoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AShapeshifter_Small_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPAdjustDamage");
		
		AShapeshifter_Small_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnTamedProcessOrder");
		
		AShapeshifter_Small_Character_BP_C_BPOnTamedProcessOrder_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Try Digging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::TryDigging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Try Digging");
		
		AShapeshifter_Small_Character_BP_C_TryDigging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.FindTargetWithElementEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::FindTargetWithElementEquipped(class APrimalCharacter** ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.FindTargetWithElementEquipped");
		
		AShapeshifter_Small_Character_BP_C_FindTargetWithElementEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPShouldForceFlee");
		
		AShapeshifter_Small_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPPreventOrderAllowed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPPreventOrderAllowed(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPPreventOrderAllowed");
		
		AShapeshifter_Small_Character_BP_C_BPPreventOrderAllowed_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetAddictionAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::SetAddictionAmount(float amount, float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetAddictionAmount");
		
		AShapeshifter_Small_Character_BP_C_SetAddictionAmount_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetAddictedAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Addiction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::GetAddictedAmount(float* Addiction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetAddictedAmount");
		
		AShapeshifter_Small_Character_BP_C_GetAddictedAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Addiction != nullptr)
			*Addiction = params.Addiction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::GetTarget(class AActor** Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetTarget");
		
		AShapeshifter_Small_Character_BP_C_GetTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TargetHasElement
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShooterCharacter*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::TargetHasElement(class AShooterCharacter* Target, bool* Res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TargetHasElement");
		
		AShapeshifter_Small_Character_BP_C_TargetHasElement_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Res != nullptr)
			*Res = params.Res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DisableBegging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::DisableBegging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DisableBegging");
		
		AShapeshifter_Small_Character_BP_C_DisableBegging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::SetTarget(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetTarget");
		
		AShapeshifter_Small_Character_BP_C_SetTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.No Controller RequestMountTransform to Bigly
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::NoControllerRequestMountTransformtoBigly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.No Controller RequestMountTransform to Bigly");
		
		AShapeshifter_Small_Character_BP_C_NoControllerRequestMountTransformtoBigly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPIsBasedOnActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPIsBasedOnActor(class AActor* Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPIsBasedOnActor");
		
		AShapeshifter_Small_Character_BP_C_BPIsBasedOnActor_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerServer");
		
		AShapeshifter_Small_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check for ElementFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::CheckforElementFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check for ElementFn");
		
		AShapeshifter_Small_Character_BP_C_CheckforElementFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnUpdateUberpounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::OnUpdateUberpounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnUpdateUberpounce");
		
		AShapeshifter_Small_Character_BP_C_OnUpdateUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryPounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::TryPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryPounce");
		
		AShapeshifter_Small_Character_BP_C_TryPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnClearMountedDino");
		
		AShapeshifter_Small_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnSetMountedDino");
		
		AShapeshifter_Small_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Transform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                TransformAnim                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::Transform(class UAnimMontage* TransformAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Transform");
		
		AShapeshifter_Small_Character_BP_C_Transform_Params params {};
		params.TransformAnim = TransformAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBegFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::TryBegFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBegFn");
		
		AShapeshifter_Small_Character_BP_C_TryBegFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveTick");
		
		AShapeshifter_Small_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveBeginPlay");
		
		AShapeshifter_Small_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AShapeshifter_Small_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPServerHandleNetExecCommand");
		
		AShapeshifter_Small_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.IsPlayerNearby
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bNearby                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::IsPlayerNearby(bool* bNearby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.IsPlayerNearby");
		
		AShapeshifter_Small_Character_BP_C_IsPlayerNearby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bNearby != nullptr)
			*bNearby = params.bNearby;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UserConstructionScript");
		
		AShapeshifter_Small_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_AteElement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_AteElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_AteElement");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_AteElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_Transform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_Transform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_Transform");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_Transform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SpawnBigly
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::SpawnBigly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SpawnBigly");
		
		AShapeshifter_Small_Character_BP_C_SpawnBigly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBeg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::TryBeg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBeg");
		
		AShapeshifter_Small_Character_BP_C_TryBeg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnBegEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::OnBegEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnBegEnd");
		
		AShapeshifter_Small_Character_BP_C_OnBegEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_ThrowTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowTransform");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_ThrowTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_EatingElement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_EatingElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_EatingElement");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_EatingElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ServerRequestMountTransformToBigly
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::ServerRequestMountTransformToBigly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ServerRequestMountTransformToBigly");
		
		AShapeshifter_Small_Character_BP_C_ServerRequestMountTransformToBigly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_OnFinishedSniffing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_OnFinishedSniffing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_OnFinishedSniffing");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_OnFinishedSniffing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ResetAllowFlee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::ResetAllowFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ResetAllowFlee");
		
		AShapeshifter_Small_Character_BP_C_ResetAllowFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_DiggingComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_DiggingComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_DiggingComplete");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_DiggingComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowPoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_ThrowPoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowPoop");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_ThrowPoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartTransformScaling
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_StartTransformScaling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartTransformScaling");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_StartTransformScaling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TransformScaling
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::TransformScaling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TransformScaling");
		
		AShapeshifter_Small_Character_BP_C_TransformScaling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_InitBigly
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_InitBigly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_InitBigly");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_InitBigly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_UnTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_UnTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_UnTransform");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_UnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CheckWildShouldRandomTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::CheckWildShouldRandomTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CheckWildShouldRandomTransform");
		
		AShapeshifter_Small_Character_BP_C_CheckWildShouldRandomTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartSniff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::AnimNotify_StartSniff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartSniff");
		
		AShapeshifter_Small_Character_BP_C_AnimNotify_StartSniff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.LevelUpRefresh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Small_Character_BP_C::LevelUpRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.LevelUpRefresh");
		
		AShapeshifter_Small_Character_BP_C_LevelUpRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ExecuteUbergraph_Shapeshifter_Small_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Small_Character_BP_C::ExecuteUbergraph_Shapeshifter_Small_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ExecuteUbergraph_Shapeshifter_Small_Character_BP");
		
		AShapeshifter_Small_Character_BP_C_ExecuteUbergraph_Shapeshifter_Small_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShapeshifter_Small_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShapeshifter_Small_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C");
		return ptr;
	}

}


