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
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateSwimOffsetLocal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::UpdateSwimOffsetLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateSwimOffsetLocal");
		
		AHesperornis_Character_BP_C_UpdateSwimOffsetLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLerpToZ
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::TryToLerpToZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLerpToZ");
		
		AHesperornis_Character_BP_C_TryToLerpToZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Setup Z Lerping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TargetZ                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::SetupZLerping(float TargetZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Setup Z Lerping");
		
		AHesperornis_Character_BP_C_SetupZLerping_Params params {};
		params.TargetZ = TargetZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Init
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Init");
		
		AHesperornis_Character_BP_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnClearMountedDino");
		
		AHesperornis_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnSetMountedDino");
		
		AHesperornis_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MoveFwd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MoveFwd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MoveFwd");
		
		AHesperornis_Character_BP_C_MoveFwd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DinoShoulderMountedLaunch
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     launchDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           throwingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::DinoShoulderMountedLaunch(const struct FVector& launchDir, class AShooterCharacter* throwingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DinoShoulderMountedLaunch");
		
		AHesperornis_Character_BP_C_DinoShoulderMountedLaunch_Params params {};
		params.launchDir = launchDir;
		params.throwingCharacter = throwingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPUnstasis");
		
		AHesperornis_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideFinalWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     outVec                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHesperornis_Character_BP_C::OverrideFinalWanderLocation(struct FVector* outVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideFinalWanderLocation");
		
		AHesperornis_Character_BP_C_OverrideFinalWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outVec != nullptr)
			*outVec = params.outVec;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideRandomWanderLocation");
		
		AHesperornis_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (originalDestination != nullptr)
			*originalDestination = params.originalDestination;
		if (inVec != nullptr)
			*inVec = params.inVec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsTargetAFish
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      targetedActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::IsTargetAFish(class AActor* targetedActor, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsTargetAFish");
		
		AHesperornis_Character_BP_C_IsTargetAFish_Params params {};
		params.targetedActor = targetedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanAutodrag
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            characterToDrag                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHesperornis_Character_BP_C::BPCanAutodrag(class APrimalCharacter* characterToDrag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanAutodrag");
		
		AHesperornis_Character_BP_C_BPCanAutodrag_Params params {};
		params.characterToDrag = characterToDrag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanDragCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHesperornis_Character_BP_C::BPCanDragCharacter(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanDragCharacter");
		
		AHesperornis_Character_BP_C_BPCanDragCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.FishHasVit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::FishHasVit(class APrimalCharacter* Player, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.FishHasVit");
		
		AHesperornis_Character_BP_C_FishHasVit_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsCarriedFishValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::IsCarriedFishValid(class APrimalCharacter* Player, bool* IsValid, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsCarriedFishValid");
		
		AHesperornis_Character_BP_C_IsCarriedFishValid_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Eat Players Carried Food
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::EatPlayersCarriedFood(class APrimalCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Eat Players Carried Food");
		
		AHesperornis_Character_BP_C_EatPlayersCarriedFood_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPClientDoMultiUse");
		
		AHesperornis_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AHesperornis_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetMultiUseEntries");
		
		AHesperornis_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHesperornis_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTryMultiUse");
		
		AHesperornis_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLayEgg
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::TryToLayEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLayEgg");
		
		AHesperornis_Character_BP_C_TryToLayEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.WantsToLayEggs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WantsTo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Regular                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Rare                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::WantsToLayEggs(bool* WantsTo, bool* Regular, bool* Rare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.WantsToLayEggs");
		
		AHesperornis_Character_BP_C_WantsToLayEggs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WantsTo != nullptr)
			*WantsTo = params.WantsTo;
		if (Regular != nullptr)
			*Regular = params.Regular;
		if (Rare != nullptr)
			*Rare = params.Rare;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsDivingAvailable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::IsDivingAvailable(bool* IsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsDivingAvailable");
		
		AHesperornis_Character_BP_C_IsDivingAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAvailable != nullptr)
			*IsAvailable = params.IsAvailable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Harvested Valid Fish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::HarvestedValidFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Harvested Valid Fish");
		
		AHesperornis_Character_BP_C_HarvestedValidFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Check if Fish Is Valid for Egging
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValidTarget                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::CheckifFishIsValidforEgging(class AActor** Actor, bool* IsValidTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Check if Fish Is Valid for Egging");
		
		AHesperornis_Character_BP_C_CheckifFishIsValidforEgging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
		if (IsValidTarget != nullptr)
			*IsValidTarget = params.IsValidTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UseAimOffsets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::UseAimOffsets(bool SetActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UseAimOffsets");
		
		AHesperornis_Character_BP_C_UseAimOffsets_Params params {};
		params.SetActive = SetActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveAnyDamage");
		
		AHesperornis_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerNonDedicated");
		
		AHesperornis_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DivingUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DivingUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DivingUp");
		
		AHesperornis_Character_BP_C_DivingUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OnRep_IsDivingUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::OnRep_IsDivingUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OnRep_IsDivingUp");
		
		AHesperornis_Character_BP_C_OnRep_IsDivingUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerServer");
		
		AHesperornis_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AHesperornis_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetGravityZScale");
		
		AHesperornis_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AHesperornis_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.EndDive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::EndDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.EndDive");
		
		AHesperornis_Character_BP_C_EndDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHesperornis_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BlueprintCanAttack");
		
		AHesperornis_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UserConstructionScript");
		
		AHesperornis_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DiveTimeLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__FinishedFunc");
		
		AHesperornis_Character_BP_C_DiveTimeLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DiveTimeLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__UpdateFunc");
		
		AHesperornis_Character_BP_C_DiveTimeLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveEvent");
		
		AHesperornis_Character_BP_C_DiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiEndDive
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MultiEndDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiEndDive");
		
		AHesperornis_Character_BP_C_MultiEndDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPDoAttack");
		
		AHesperornis_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveBeginPlay");
		
		AHesperornis_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.SlowlyRotateZTo
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    initialRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::SlowlyRotateZTo(const struct FRotator& TargetRotation, float Time, const struct FRotator& initialRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.SlowlyRotateZTo");
		
		AHesperornis_Character_BP_C_SlowlyRotateZTo_Params params {};
		params.TargetRotation = TargetRotation;
		params.Time = Time;
		params.initialRotation = initialRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiUnsetPitch
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MultiUnsetPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiUnsetPitch");
		
		AHesperornis_Character_BP_C_MultiUnsetPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveTick");
		
		AHesperornis_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DiveAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveAttack");
		
		AHesperornis_Character_BP_C_DiveAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateZHeight
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ZHeight                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::UpdateZHeight(float ZHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateZHeight");
		
		AHesperornis_Character_BP_C_UpdateZHeight_Params params {};
		params.ZHeight = ZHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiCastBoolToSetZ
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MultiCastBoolToSetZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiCastBoolToSetZ");
		
		AHesperornis_Character_BP_C_MultiCastBoolToSetZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.AnimNotify_DiveAttackSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::AnimNotify_DiveAttackSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.AnimNotify_DiveAttackSound");
		
		AHesperornis_Character_BP_C_AnimNotify_DiveAttackSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiStartRotatingUp
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MultiStartRotatingUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiStartRotatingUp");
		
		AHesperornis_Character_BP_C_MultiStartRotatingUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ExecuteUbergraph_Hesperornis_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::ExecuteUbergraph_Hesperornis_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ExecuteUbergraph_Hesperornis_Character_BP");
		
		AHesperornis_Character_BP_C_ExecuteUbergraph_Hesperornis_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHesperornis_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHesperornis_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hesperornis_Character_BP.Hesperornis_Character_BP_C");
		return ptr;
	}

}


