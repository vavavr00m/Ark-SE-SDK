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
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetNumBatteries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            numBatteries                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::GetNumBatteries(int32_t* numBatteries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetNumBatteries");
		
		ALanternPet_Character_BP_C_GetNumBatteries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (numBatteries != nullptr)
			*numBatteries = params.numBatteries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Variable Interface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::GetChargeVariableInterface(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Variable Interface");
		
		ALanternPet_Character_BP_C_GetChargeVariableInterface_Params params {};
		params.variableType = variableType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (fValue != nullptr)
			*fValue = params.fValue;
		if (dValue != nullptr)
			*dValue = params.dValue;
		if (bBValue != nullptr)
			*bBValue = params.bBValue;
		if (ivalue != nullptr)
			*ivalue = params.ivalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateMaxCharge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::UpdateMaxCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateMaxCharge");
		
		ALanternPet_Character_BP_C_UpdateMaxCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundHighLevelDinos
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::UpdateFoundHighLevelDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundHighLevelDinos");
		
		ALanternPet_Character_BP_C_UpdateFoundHighLevelDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundEnemyPlayers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::UpdateFoundEnemyPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundEnemyPlayers");
		
		ALanternPet_Character_BP_C_UpdateFoundEnemyPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetPassiveChargeGain
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              chargeGain                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::GetPassiveChargeGain(float* chargeGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetPassiveChargeGain");
		
		ALanternPet_Character_BP_C_GetPassiveChargeGain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeGain != nullptr)
			*chargeGain = params.chargeGain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.UnstasisLogic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::UnstasisLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UnstasisLogic");
		
		ALanternPet_Character_BP_C_UnstasisLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTriggerStasisEvent");
		
		ALanternPet_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::DestroyChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff");
		
		ALanternPet_Character_BP_C_DestroyChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPSetupTamed");
		
		ALanternPet_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::CreateChargeManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeManager");
		
		ALanternPet_Character_BP_C_CreateChargeManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateChargeRadius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::UpdateChargeRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateChargeRadius");
		
		ALanternPet_Character_BP_C_UpdateChargeRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetActualRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::GetActualRadius(float* Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetActualRadius");
		
		ALanternPet_Character_BP_C_GetActualRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyInventoryItemChange");
		
		ALanternPet_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
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
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnClearMountedDino");
		
		ALanternPet_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyLevelUp");
		
		ALanternPet_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.InitializeChargeBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::InitializeChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.InitializeChargeBuff");
		
		ALanternPet_Character_BP_C_InitializeChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnSetMountedDino");
		
		ALanternPet_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotifyMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::AnimNotifyMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotifyMountedDino");
		
		ALanternPet_Character_BP_C_AnimNotifyMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.SetLightColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::SetLightColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.SetLightColor");
		
		ALanternPet_Character_BP_C_SetLightColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnLaunched
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LaunchVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bXYOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bZOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnLaunched");
		
		ALanternPet_Character_BP_C_OnLaunched_Params params {};
		params.LaunchVelocity = LaunchVelocity;
		params.bXYOverride = bXYOverride;
		params.bZOverride = bZOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Can Generate Charge OverTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanCharge                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::CanGenerateChargeOverTime(bool* CanCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Can Generate Charge OverTime");
		
		ALanternPet_Character_BP_C_CanGenerateChargeOverTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCharge != nullptr)
			*CanCharge = params.CanCharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.CanPlaySpecialAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanPlay                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::CanPlaySpecialAnim(bool* CanPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CanPlaySpecialAnim");
		
		ALanternPet_Character_BP_C_CanPlaySpecialAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlay != nullptr)
			*CanPlay = params.CanPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Init
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Init");
		
		ALanternPet_Character_BP_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.AutoChargeNotify
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::AutoChargeNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.AutoChargeNotify");
		
		ALanternPet_Character_BP_C_AutoChargeNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPClientDoMultiUse");
		
		ALanternPet_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ALanternPet_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPGetMultiUseEntries");
		
		ALanternPet_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALanternPet_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTryMultiUse");
		
		ALanternPet_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnRep_bAutoChargeActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::OnRep_bAutoChargeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnRep_bAutoChargeActive");
		
		ALanternPet_Character_BP_C_OnRep_bAutoChargeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerNonDedicated");
		
		ALanternPet_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnUpdateMountedDinoMeshHiding
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bshouldBeVisible                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::OnUpdateMountedDinoMeshHiding(bool bshouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnUpdateMountedDinoMeshHiding");
		
		ALanternPet_Character_BP_C_OnUpdateMountedDinoMeshHiding_Params params {};
		params.bshouldBeVisible = bshouldBeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BlueprintDrawFloatingHUD");
		
		ALanternPet_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Receive Montage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::GetChargeReceiveMontage(class UAnimMontage** Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Receive Montage");
		
		ALanternPet_Character_BP_C_GetChargeReceiveMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montage != nullptr)
			*Montage = params.Montage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetChargeFinishedMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::GetChargeFinishedMontage(class UAnimMontage** Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetChargeFinishedMontage");
		
		ALanternPet_Character_BP_C_GetChargeFinishedMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montage != nullptr)
			*Montage = params.Montage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Update ChargeAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::UpdateChargeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Update ChargeAnimation");
		
		ALanternPet_Character_BP_C_UpdateChargeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerServer");
		
		ALanternPet_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateLightIntensity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Emmissive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::UpdateLightIntensity(float DeltaTime, float* Alpha, float* Emmissive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateLightIntensity");
		
		ALanternPet_Character_BP_C_UpdateLightIntensity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alpha != nullptr)
			*Alpha = params.Alpha;
		if (Emmissive != nullptr)
			*Emmissive = params.Emmissive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UserConstructionScript");
		
		ALanternPet_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean MulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventBooleanMulticastInterface(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean MulticastInterface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventBooleanMulticastInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Float Multicast Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventFloatMulticastInterface(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Float Multicast Interface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventFloatMulticastInterface_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Double MulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventDoubleMulticastInterface(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Double MulticastInterface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventDoubleMulticastInterface_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventBooleanInterface(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean Interface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventBooleanInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventFloatInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventFloatInterface(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventFloatInterface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventFloatInterface_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventDoubleInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventDoubleInterface(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventDoubleInterface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventDoubleInterface_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventIntInterface(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntInterface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventIntInterface_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntMulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventIntMulticastInterface(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntMulticastInterface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetUpdateCharge
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::NetUpdateCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetUpdateCharge");
		
		ALanternPet_Character_BP_C_NetUpdateCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPUnstasis");
		
		ALanternPet_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetRestartParticles
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::NetRestartParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetRestartParticles");
		
		ALanternPet_Character_BP_C_NetRestartParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.PlayPetAnimAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::PlayPetAnimAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.PlayPetAnimAfterDelay");
		
		ALanternPet_Character_BP_C_PlayPetAnimAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotify_FinishParticle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::AnimNotify_FinishParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotify_FinishParticle");
		
		ALanternPet_Character_BP_C_AnimNotify_FinishParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Set Charge Variable Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               triggerEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::SetChargeVariableInterface(E_ChargeVariableNames variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Set Charge Variable Interface");
		
		ALanternPet_Character_BP_C_SetChargeVariableInterface_Params params {};
		params.variableType = variableType;
		params.multicast = multicast;
		params.fValue = fValue;
		params.dValue = dValue;
		params.bBValue = bBValue;
		params.triggerEvent = triggerEvent;
		params.multicastEvent = multicastEvent;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Interface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Trigger Multicast Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            iVariable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEventTriggerMulticastInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t iVariable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Trigger Multicast Interface");
		
		ALanternPet_Character_BP_C_ChargeVariableEventTriggerMulticastInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		params.iVariable = iVariable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent");
		
		ALanternPet_Character_BP_C_ChargeVariableEvent_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ChargeVariableEvent_Multicast(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent_Multicast");
		
		ALanternPet_Character_BP_C_ChargeVariableEvent_Multicast_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.CheckForBatteriesAndUpdate_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::CheckForBatteriesAndUpdate_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CheckForBatteriesAndUpdate_Multicast");
		
		ALanternPet_Character_BP_C_CheckForBatteriesAndUpdate_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.Interface Check for Batteries and Update Multicast
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::InterfaceCheckforBatteriesandUpdateMulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Interface Check for Batteries and Update Multicast");
		
		ALanternPet_Character_BP_C_InterfaceCheckforBatteriesandUpdateMulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ReceiveBeginPlay");
		
		ALanternPet_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnDied_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnDied_Event");
		
		ALanternPet_Character_BP_C_OnDied_Event_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.RandomizeUntamedStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::RandomizeUntamedStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.RandomizeUntamedStart");
		
		ALanternPet_Character_BP_C_RandomizeUntamedStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::CreateChargeBuff_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff_Multicast");
		
		ALanternPet_Character_BP_C_CreateChargeBuff_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::CreateChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff");
		
		ALanternPet_Character_BP_C_CreateChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALanternPet_Character_BP_C::DestroyChargeBuff_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff_Multicast");
		
		ALanternPet_Character_BP_C_DestroyChargeBuff_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LanternPet_Character_BP.LanternPet_Character_BP_C.ExecuteUbergraph_LanternPet_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanternPet_Character_BP_C::ExecuteUbergraph_LanternPet_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ExecuteUbergraph_LanternPet_Character_BP");
		
		ALanternPet_Character_BP_C_ExecuteUbergraph_LanternPet_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALanternPet_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALanternPet_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LanternPet_Character_BP.LanternPet_Character_BP_C");
		return ptr;
	}

}


