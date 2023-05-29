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
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ATherizino_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");
		
		ATherizino_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.Cap Harvest Stats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATherizino_Character_BP_C::CapHarvestStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.Cap Harvest Stats");
		
		ATherizino_Character_BP_C_CapHarvestStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingWeightsArray
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      resourceWeightsIn                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class UPrimalItem*>                         resourceItems                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      resourceWeightsOut                                         (Parm, OutParm, ZeroConstructor)
	 */
	void ATherizino_Character_BP_C::BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingWeightsArray");
		
		ATherizino_Character_BP_C_BPModifyHarvestingWeightsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (resourceWeightsIn != nullptr)
			*resourceWeightsIn = params.resourceWeightsIn;
		if (resourceItems != nullptr)
			*resourceItems = params.resourceItems;
		if (resourceWeightsOut != nullptr)
			*resourceWeightsOut = params.resourceWeightsOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalHarvestingComponent*                  harvestComponent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              inDamage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ATherizino_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent* harvestComponent, float inDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestDamage");
		
		ATherizino_Character_BP_C_BPModifyHarvestDamage_Params params {};
		params.harvestComponent = harvestComponent;
		params.inDamage = inDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.Multiply Items by Attack Type
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATherizino_Character_BP_C::MultiplyItemsbyAttackType(int32_t InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.Multiply Items by Attack Type");
		
		ATherizino_Character_BP_C_MultiplyItemsbyAttackType_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATherizino_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPClientDoMultiUse");
		
		ATherizino_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPDoHarvestAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            harvestIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATherizino_Character_BP_C::BPDoHarvestAttack(int32_t harvestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPDoHarvestAttack");
		
		ATherizino_Character_BP_C_BPDoHarvestAttack_Params params {};
		params.harvestIndex = harvestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATherizino_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanAttack");
		
		ATherizino_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.SetClawAttackAnimByMovement
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Attackindex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATherizino_Character_BP_C::SetClawAttackAnimByMovement(int32_t Attackindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.SetClawAttackAnimByMovement");
		
		ATherizino_Character_BP_C_SetClawAttackAnimByMovement_Params params {};
		params.Attackindex = Attackindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATherizino_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanRiderAttack");
		
		ATherizino_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingQuantity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              originalQuantity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      resourceSelected                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ATherizino_Character_BP_C::BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingQuantity");
		
		ATherizino_Character_BP_C_BPModifyHarvestingQuantity_Params params {};
		params.originalQuantity = originalQuantity;
		params.resourceSelected = resourceSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.GetCurrentHarvestLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CurrentLevel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATherizino_Character_BP_C::GetCurrentHarvestLevel(int32_t* CurrentLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.GetCurrentHarvestLevel");
		
		ATherizino_Character_BP_C_GetCurrentHarvestLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentLevel != nullptr)
			*CurrentLevel = params.CurrentLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATherizino_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPNotifyLevelUp");
		
		ATherizino_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ATherizino_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPGetMultiUseEntries");
		
		ATherizino_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.Harvest Multiplier Level Up
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UseEntryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATherizino_Character_BP_C::HarvestMultiplierLevelUp(int32_t UseEntryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.Harvest Multiplier Level Up");
		
		ATherizino_Character_BP_C_HarvestMultiplierLevelUp_Params params {};
		params.UseEntryIndex = UseEntryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.MakeUseEntryString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString ATherizino_Character_BP_C::MakeUseEntryString(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.MakeUseEntryString");
		
		ATherizino_Character_BP_C_MakeUseEntryString_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATherizino_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPTryMultiUse");
		
		ATherizino_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.AddLevelUpEntries
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMultiUseEntry>                      FullEntryList                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATherizino_Character_BP_C::AddLevelUpEntries(TArray<struct FMultiUseEntry>* FullEntryList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.AddLevelUpEntries");
		
		ATherizino_Character_BP_C_AddLevelUpEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FullEntryList != nullptr)
			*FullEntryList = params.FullEntryList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATherizino_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.UserConstructionScript");
		
		ATherizino_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_HarvestEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATherizino_Character_BP_C::AnimNotify_HarvestEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_HarvestEnd");
		
		ATherizino_Character_BP_C_AnimNotify_HarvestEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_PowerHarvestEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATherizino_Character_BP_C::AnimNotify_PowerHarvestEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_PowerHarvestEnd");
		
		ATherizino_Character_BP_C_AnimNotify_PowerHarvestEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.PlayLevelUpAnim
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATherizino_Character_BP_C::PlayLevelUpAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.PlayLevelUpAnim");
		
		ATherizino_Character_BP_C_PlayLevelUpAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATherizino_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.ReceiveBeginPlay");
		
		ATherizino_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.BPResetClone
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATherizino_Character_BP_C::BPResetClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPResetClone");
		
		ATherizino_Character_BP_C_BPResetClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Therizino_Character_BP.Therizino_Character_BP_C.ExecuteUbergraph_Therizino_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATherizino_Character_BP_C::ExecuteUbergraph_Therizino_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.ExecuteUbergraph_Therizino_Character_BP");
		
		ATherizino_Character_BP_C_ExecuteUbergraph_Therizino_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATherizino_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATherizino_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Therizino_Character_BP.Therizino_Character_BP_C");
		return ptr;
	}

}


