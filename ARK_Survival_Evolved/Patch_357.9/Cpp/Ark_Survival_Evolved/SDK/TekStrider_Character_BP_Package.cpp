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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Variable Interface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetChargeVariableInterface(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Variable Interface");
		
		ATekStrider_Character_BP_C_GetChargeVariableInterface_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNumBatteries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            numBatteries                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetNumBatteries(int32_t* numBatteries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNumBatteries");
		
		ATekStrider_Character_BP_C_GetNumBatteries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (numBatteries != nullptr)
			*numBatteries = params.numBatteries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnDinoCheat");
		
		ATekStrider_Character_BP_C_BPOnDinoCheat_Params params {};
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Transmitter VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::RestrictTransmitterVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Transmitter VFX");
		
		ATekStrider_Character_BP_C_RestrictTransmitterVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnStartCarried
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        aDino                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BP_OnStartCarried(class APrimalDinoCharacter* aDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnStartCarried");
		
		ATekStrider_Character_BP_C_BP_OnStartCarried_Params params {};
		params.aDino = aDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPCanCryo");
		
		ATekStrider_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Number Of Missions Required To Tame This Strider Scaled By Level
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetNumberOfMissionsRequiredToTameThisStriderScaledByLevel(int32_t* OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Number Of Missions Required To Tame This Strider Scaled By Level");
		
		ATekStrider_Character_BP_C_GetNumberOfMissionsRequiredToTameThisStriderScaledByLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.release right click
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::releaserightclick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.release right click");
		
		ATekStrider_Character_BP_C_releaserightclick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeout Check for Still Holding Right Click
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::TimeoutCheckforStillHoldingRightClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeout Check for Still Holding Right Click");
		
		ATekStrider_Character_BP_C_TimeoutCheckforStillHoldingRightClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.update shield item durability based on health
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::updateshielditemdurabilitybasedonhealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.update shield item durability based on health");
		
		ATekStrider_Character_BP_C_updateshielditemdurabilitybasedonhealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Deactivate Transmitter Vfx on Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::DeactivateTransmitterVfxonTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Deactivate Transmitter Vfx on Timer");
		
		ATekStrider_Character_BP_C_DeactivateTransmitterVfxonTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Triggered Lethal Dmg
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::TriggeredLethalDmg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Triggered Lethal Dmg");
		
		ATekStrider_Character_BP_C_TriggeredLethalDmg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ResetLinkedDediStorageRepVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ResetLinkedDediStorageRepVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ResetLinkedDediStorageRepVars");
		
		ATekStrider_Character_BP_C_ResetLinkedDediStorageRepVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.MakeDediStorageTitleString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      BoxName                                                    (Parm, ZeroConstructor)
	 * 		class UClass*                                      ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForShooterPC                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DistanceToBox                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString ATekStrider_Character_BP_C::MakeDediStorageTitleString(const class FString& BoxName, class UClass* ItemType, class AShooterPlayerController* ForShooterPC, int32_t ItemCount, float DistanceToBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.MakeDediStorageTitleString");
		
		ATekStrider_Character_BP_C_MakeDediStorageTitleString_Params params {};
		params.BoxName = BoxName;
		params.ItemType = ItemType;
		params.ForShooterPC = ForShooterPC;
		params.ItemCount = ItemCount;
		params.DistanceToBox = DistanceToBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.UpdateLinkedDediStorageRepVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::UpdateLinkedDediStorageRepVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.UpdateLinkedDediStorageRepVars");
		
		ATekStrider_Character_BP_C_UpdateLinkedDediStorageRepVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ConstructLinkedDediStorageTitle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForShooterPC                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Title                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void ATekStrider_Character_BP_C::ConstructLinkedDediStorageTitle(class AShooterPlayerController* ForShooterPC, class FString* Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ConstructLinkedDediStorageTitle");
		
		ATekStrider_Character_BP_C_ConstructLinkedDediStorageTitle_Params params {};
		params.ForShooterPC = ForShooterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Title != nullptr)
			*Title = params.Title;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel in Last Slot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasMutagelInLastSlot                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::HasMutagelinLastSlot(class APlayerController* PC, bool* HasMutagelInLastSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel in Last Slot");
		
		ATekStrider_Character_BP_C_HasMutagelinLastSlot_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasMutagelInLastSlot != nullptr)
			*HasMutagelInLastSlot = params.HasMutagelInLastSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Force Destroy Strider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ForceDestroyStrider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Force Destroy Strider");
		
		ATekStrider_Character_BP_C_ForceDestroyStrider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.affinity per hack calculation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Tamingspeedmultiplier                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fordetectingaffinity                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ingraceperiod                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              timeuntilgraceperiodends                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              timeuntilnomoreaffinity                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              affinitygainedbeforetamingmult                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ATekStrider_Character_BP_C::affinityperhackcalculation(float Tamingspeedmultiplier, bool fordetectingaffinity, bool* ingraceperiod, float* timeuntilgraceperiodends, float* timeuntilnomoreaffinity, float* affinitygainedbeforetamingmult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.affinity per hack calculation");
		
		ATekStrider_Character_BP_C_affinityperhackcalculation_Params params {};
		params.Tamingspeedmultiplier = Tamingspeedmultiplier;
		params.fordetectingaffinity = fordetectingaffinity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ingraceperiod != nullptr)
			*ingraceperiod = params.ingraceperiod;
		if (timeuntilgraceperiodends != nullptr)
			*timeuntilgraceperiodends = params.timeuntilgraceperiodends;
		if (timeuntilnomoreaffinity != nullptr)
			*timeuntilnomoreaffinity = params.timeuntilnomoreaffinity;
		if (affinitygainedbeforetamingmult != nullptr)
			*affinitygainedbeforetamingmult = params.affinitygainedbeforetamingmult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.amount of affinity gained as appropriate to the dino level
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ATekStrider_Character_BP_C::amountofaffinitygainedasappropriatetothedinolevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.amount of affinity gained as appropriate to the dino level");
		
		ATekStrider_Character_BP_C_amountofaffinitygainedasappropriatetothedinolevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.RefreshNearbyDediStorageArrays
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::RefreshNearbyDediStorageArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.RefreshNearbyDediStorageArrays");
		
		ATekStrider_Character_BP_C_RefreshNearbyDediStorageArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferAnyItemsToNearbyDediStorages
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::CanTransferAnyItemsToNearbyDediStorages(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferAnyItemsToNearbyDediStorages");
		
		ATekStrider_Character_BP_C_CanTransferAnyItemsToNearbyDediStorages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferItemToDediStorage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 CheckItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_DedicatedStorage_C*                      CheckStorage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCheckForBlacklist                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::CanTransferItemToDediStorage(class UPrimalItem* CheckItem, class ABP_DedicatedStorage_C* CheckStorage, bool bCheckForBlacklist, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferItemToDediStorage");
		
		ATekStrider_Character_BP_C_CanTransferItemToDediStorage_Params params {};
		params.CheckItem = CheckItem;
		params.CheckStorage = CheckStorage;
		params.bCheckForBlacklist = bCheckForBlacklist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanUseLinkedDediStorageLogic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::CanUseLinkedDediStorageLogic(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanUseLinkedDediStorageLogic");
		
		ATekStrider_Character_BP_C_CanUseLinkedDediStorageLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetLinkedDediStorageFloatingHudTitle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForShooterPC                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      TitleString                                                (Parm, OutParm, ZeroConstructor)
	 * 		struct FLinearColor                                TitleColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetLinkedDediStorageFloatingHudTitle(class AShooterPlayerController* ForShooterPC, class FString* TitleString, struct FLinearColor* TitleColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetLinkedDediStorageFloatingHudTitle");
		
		ATekStrider_Character_BP_C_GetLinkedDediStorageFloatingHudTitle_Params params {};
		params.ForShooterPC = ForShooterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TitleString != nullptr)
			*TitleString = params.TitleString;
		if (TitleColor != nullptr)
			*TitleColor = params.TitleColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNameStringForDediStorage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DedicatedStorage_C*                      ForStorage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForShooterPC                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAppendDistance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      NameString                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void ATekStrider_Character_BP_C::GetNameStringForDediStorage(class ABP_DedicatedStorage_C* ForStorage, class AShooterPlayerController* ForShooterPC, bool bAppendDistance, class FString* NameString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNameStringForDediStorage");
		
		ATekStrider_Character_BP_C_GetNameStringForDediStorage_Params params {};
		params.ForStorage = ForStorage;
		params.ForShooterPC = ForShooterPC;
		params.bAppendDistance = bAppendDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NameString != nullptr)
			*NameString = params.NameString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ValidateLinkedDediStorage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ValidateLinkedDediStorage(bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ValidateLinkedDediStorage");
		
		ATekStrider_Character_BP_C_ValidateLinkedDediStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToLinkedDediStorage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::TryTransferItemsToLinkedDediStorage(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToLinkedDediStorage");
		
		ATekStrider_Character_BP_C_TryTransferItemsToLinkedDediStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.RemoveIncompatibleDediStoragesFromArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ABP_DedicatedStorage_C*>              FromArray                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATekStrider_Character_BP_C::RemoveIncompatibleDediStoragesFromArray(TArray<class ABP_DedicatedStorage_C*>* FromArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.RemoveIncompatibleDediStoragesFromArray");
		
		ATekStrider_Character_BP_C_RemoveIncompatibleDediStoragesFromArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FromArray != nullptr)
			*FromArray = params.FromArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToNearbyDediStorages
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForShooterPC                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::TryTransferItemsToNearbyDediStorages(class AShooterPlayerController* ForShooterPC, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToNearbyDediStorages");
		
		ATekStrider_Character_BP_C_TryTransferItemsToNearbyDediStorages_Params params {};
		params.ForShooterPC = ForShooterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsBlacklistedItemClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CheckItemClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::IsBlacklistedItemClass(class UClass* CheckItemClass, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsBlacklistedItemClass");
		
		ATekStrider_Character_BP_C_IsBlacklistedItemClass_Params params {};
		params.CheckItemClass = CheckItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsDediStorageUsable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DedicatedStorage_C*                      CheckStorage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::IsDediStorageUsable(class ABP_DedicatedStorage_C* CheckStorage, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsDediStorageUsable");
		
		ATekStrider_Character_BP_C_IsDediStorageUsable_Params params {};
		params.CheckStorage = CheckStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.FindNearbyUsableDediStorageBoxes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSortByDistance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRemoveIncompatibleStorages                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRemoveLinkedStorage                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundAny                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class ABP_DedicatedStorage_C*>              FoundBoxes                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void ATekStrider_Character_BP_C::FindNearbyUsableDediStorageBoxes(bool bSortByDistance, bool bRemoveIncompatibleStorages, bool bRemoveLinkedStorage, bool* bFoundAny, TArray<class ABP_DedicatedStorage_C*>* FoundBoxes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.FindNearbyUsableDediStorageBoxes");
		
		ATekStrider_Character_BP_C_FindNearbyUsableDediStorageBoxes_Params params {};
		params.bSortByDistance = bSortByDistance;
		params.bRemoveIncompatibleStorages = bRemoveIncompatibleStorages;
		params.bRemoveLinkedStorage = bRemoveLinkedStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundAny != nullptr)
			*bFoundAny = params.bFoundAny;
		if (FoundBoxes != nullptr)
			*FoundBoxes = params.FoundBoxes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryDoDediStorageHarvestTransferMultiUse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::TryDoDediStorageHarvestTransferMultiUse(class APlayerController* ForPC, int32_t UseIndex, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryDoDediStorageHarvestTransferMultiUse");
		
		ATekStrider_Character_BP_C_TryDoDediStorageHarvestTransferMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClientDoDediStorageHarvestTransferMultiUse
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ClientDoDediStorageHarvestTransferMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClientDoDediStorageHarvestTransferMultiUse");
		
		ATekStrider_Character_BP_C_ClientDoDediStorageHarvestTransferMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetDediStorageHarvestTransferMultiUseEntries
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMultiUseEntry>                      AppendToEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class AShooterPlayerController*                    ForShooterPC                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetDediStorageHarvestTransferMultiUseEntries(TArray<struct FMultiUseEntry>* AppendToEntries, class AShooterPlayerController* ForShooterPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetDediStorageHarvestTransferMultiUseEntries");
		
		ATekStrider_Character_BP_C_GetDediStorageHarvestTransferMultiUseEntries_Params params {};
		params.ForShooterPC = ForShooterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppendToEntries != nullptr)
			*AppendToEntries = params.AppendToEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientHandleNetExecCommand");
		
		ATekStrider_Character_BP_C_BPClientHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnRefreshColorization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATekStrider_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnRefreshColorization");
		
		ATekStrider_Character_BP_C_BPOnRefreshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClearLinkedDediStorage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ClearLinkedDediStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClearLinkedDediStorage");
		
		ATekStrider_Character_BP_C_ClearLinkedDediStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnUncryo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BP_OnUncryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnUncryo");
		
		ATekStrider_Character_BP_C_BP_OnUncryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnCryo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BP_OnCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnCryo");
		
		ATekStrider_Character_BP_C_BP_OnCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetLinkedDediStorage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DedicatedStorage_C*                      NewLinkedStorage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::SetLinkedDediStorage(class ABP_DedicatedStorage_C* NewLinkedStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetLinkedDediStorage");
		
		ATekStrider_Character_BP_C_SetLinkedDediStorage_Params params {};
		params.NewLinkedStorage = NewLinkedStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Dinos
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ChangeFiltertoOnlyDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Dinos");
		
		ATekStrider_Character_BP_C_ChangeFiltertoOnlyDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Humans
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ChangeFiltertoOnlyHumans()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Humans");
		
		ATekStrider_Character_BP_C_ChangeFiltertoOnlyHumans_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Both Dinos And Humans
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ChangeFiltertoBothDinosAndHumans()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Both Dinos And Humans");
		
		ATekStrider_Character_BP_C_ChangeFiltertoBothDinosAndHumans_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Quicktap Right Click
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::DetectQuicktapRightClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Quicktap Right Click");
		
		ATekStrider_Character_BP_C_DetectQuicktapRightClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn tamed inventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::Spawntamedinventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn tamed inventory");
		
		ATekStrider_Character_BP_C_Spawntamedinventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn wild Inventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::spawnwildInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn wild Inventory");
		
		ATekStrider_Character_BP_C_spawnwildInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.determine and request appropriate melee attack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::determineandrequestappropriatemeleeattack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.determine and request appropriate melee attack");
		
		ATekStrider_Character_BP_C_determineandrequestappropriatemeleeattack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintGetAttackWeight
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              inputWeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ATekStrider_Character_BP_C::BlueprintGetAttackWeight(int32_t AttackIndex, float inputWeight, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintGetAttackWeight");
		
		ATekStrider_Character_BP_C_BlueprintGetAttackWeight_Params params {};
		params.AttackIndex = AttackIndex;
		params.inputWeight = inputWeight;
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.combined can attack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Attackindex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DIst                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackrangeoffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canattack                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::combinedcanattack(int32_t Attackindex, float DIst, float attackrangeoffset, bool* canattack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.combined can attack");
		
		ATekStrider_Character_BP_C_combinedcanattack_Params params {};
		params.Attackindex = Attackindex;
		params.DIst = DIst;
		params.attackrangeoffset = attackrangeoffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canattack != nullptr)
			*canattack = params.canattack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanRiderAttack");
		
		ATekStrider_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanAttack");
		
		ATekStrider_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Print String Manual
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor)
	 */
	void ATekStrider_Character_BP_C::PrintStringManual(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Print String Manual");
		
		ATekStrider_Character_BP_C_PrintStringManual_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearRider");
		
		ATekStrider_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifySetRider");
		
		ATekStrider_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Capacity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ATekStrider_Character_BP_C::GetChargeCapacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Capacity");
		
		ATekStrider_Character_BP_C_GetChargeCapacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.toggle transmitter vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             timeactivated                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::toggletransmittervfx(bool Activate, double timeactivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.toggle transmitter vfx");
		
		ATekStrider_Character_BP_C_toggletransmittervfx_Params params {};
		params.Activate = Activate;
		params.timeactivated = timeactivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.update tame percent on material
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::updatetamepercentonmaterial(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.update tame percent on material");
		
		ATekStrider_Character_BP_C_updatetamepercentonmaterial_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up dynamic mats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::setupdynamicmats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up dynamic mats");
		
		ATekStrider_Character_BP_C_setupdynamicmats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Focus Suck Location at Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::FocusSuckLocationatTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Focus Suck Location at Target");
		
		ATekStrider_Character_BP_C_FocusSuckLocationatTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPHandlePoop
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekStrider_Character_BP_C::BPHandlePoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPHandlePoop");
		
		ATekStrider_Character_BP_C_BPHandlePoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventFirstPerson
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekStrider_Character_BP_C::BPPreventFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventFirstPerson");
		
		ATekStrider_Character_BP_C_BPPreventFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventInputType
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::BPPreventInputType(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventInputType");
		
		ATekStrider_Character_BP_C_BPPreventInputType_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideHurtAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPath                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageHitNormal                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimMontage* ATekStrider_Character_BP_C::BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideHurtAnim");
		
		ATekStrider_Character_BP_C_BPOverrideHurtAnim_Params params {};
		params.DamageTaken = DamageTaken;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsLocalPath = bIsLocalPath;
		params.bIsPointDamage = bIsPointDamage;
		params.PointDamageLocation = PointDamageLocation;
		params.PointDamageHitNormal = PointDamageHitNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ATekStrider_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPAdjustDamage");
		
		ATekStrider_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnLethalDamage
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventDeath                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPOnLethalDamage(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnLethalDamage");
		
		ATekStrider_Character_BP_C_BPOnLethalDamage_Params params {};
		params.KillingDamage = KillingDamage;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		if (bPreventDeath != nullptr)
			*bPreventDeath = params.bPreventDeath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Blend Time After Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ResetBlendTimeAfterTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Blend Time After Timer");
		
		ATekStrider_Character_BP_C_ResetBlendTimeAfterTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.set blend time
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::setblendtime(float InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.set blend time");
		
		ATekStrider_Character_BP_C_setblendtime_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATekStrider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.tick events
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::tickevents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.tick events");
		
		ATekStrider_Character_BP_C_tickevents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekStrider_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ATekStrider_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Right Click
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::DetectDoubleTapRightClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Right Click");
		
		ATekStrider_Character_BP_C_DetectDoubleTapRightClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Crouch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::DetectDoubleTapCrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Crouch");
		
		ATekStrider_Character_BP_C_DetectDoubleTapCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Current Inventory Mutagel Count
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            currentamount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetCurrentInventoryMutagelCount(class UObject* PC, int32_t* currentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Current Inventory Mutagel Count");
		
		ATekStrider_Character_BP_C_GetCurrentInventoryMutagelCount_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentamount != nullptr)
			*currentamount = params.currentamount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Required Mutagel Count
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            neededamount                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetRequiredMutagelCount(int32_t* neededamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Required Mutagel Count");
		
		ATekStrider_Character_BP_C_GetRequiredMutagelCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (neededamount != nullptr)
			*neededamount = params.neededamount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Use Mutagel And Begin Hacking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::UseMutagelAndBeginHacking(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Use Mutagel And Begin Hacking");
		
		ATekStrider_Character_BP_C_UseMutagelAndBeginHacking_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.completed enough missions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATekStrider_Character_BP_C::completedenoughmissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.completed enough missions");
		
		ATekStrider_Character_BP_C_completedenoughmissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.backup timer has expired to bypass the wander distance if needed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATekStrider_Character_BP_C::backuptimerhasexpiredtobypassthewanderdistanceifneeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.backup timer has expired to bypass the wander distance if needed");
		
		ATekStrider_Character_BP_C_backuptimerhasexpiredtobypassthewanderdistanceifneeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.has wandered far enough to be able to hack again
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              remainingdistance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::haswanderedfarenoughtobeabletohackagain(float* remainingdistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.has wandered far enough to be able to hack again");
		
		ATekStrider_Character_BP_C_haswanderedfarenoughtobeabletohackagain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (remainingdistance != nullptr)
			*remainingdistance = params.remainingdistance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Able To Initiate A Hack Attempt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::IsAbleToInitiateAHackAttempt(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Able To Initiate A Hack Attempt");
		
		ATekStrider_Character_BP_C_IsAbleToInitiateAHackAttempt_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel Ready
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::HasMutagelReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel Ready");
		
		ATekStrider_Character_BP_C_HasMutagelReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Required Mutagel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MutagelPlayerHas                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MutagelRequired                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::HasRequiredMutagel(class UObject* PlayerController, int32_t* MutagelPlayerHas, int32_t* MutagelRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Required Mutagel");
		
		ATekStrider_Character_BP_C_HasRequiredMutagel_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MutagelPlayerHas != nullptr)
			*MutagelPlayerHas = params.MutagelPlayerHas;
		if (MutagelRequired != nullptr)
			*MutagelRequired = params.MutagelRequired;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn targeted hacking particle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     hackingloc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::spawntargetedhackingparticle(const struct FVector& hackingloc, class UObject* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn targeted hacking particle");
		
		ATekStrider_Character_BP_C_spawntargetedhackingparticle_Params params {};
		params.hackingloc = hackingloc;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect If Able To Be Hacked- For blinking lights only
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canhack                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               shouldbevisible                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::DetectIfAbleToBeHackedForblinkinglightsonly(bool* canhack, bool* shouldbevisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect If Able To Be Hacked- For blinking lights only");
		
		ATekStrider_Character_BP_C_DetectIfAbleToBeHackedForblinkinglightsonly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canhack != nullptr)
			*canhack = params.canhack;
		if (shouldbevisible != nullptr)
			*shouldbevisible = params.shouldbevisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.advance hacking point
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::advancehackingpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.advance hacking point");
		
		ATekStrider_Character_BP_C_advancehackingpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up hacking interaction points
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::setuphackinginteractionpoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up hacking interaction points");
		
		ATekStrider_Character_BP_C_setuphackinginteractionpoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekStrider_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		ATekStrider_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Looking At Specific Hack Interaction Point
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLookingat                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HackInteractionSpotWorldLoc                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::IsLookingAtSpecificHackInteractionPoint(class AShooterCharacter* Player, bool* IsLookingat, struct FVector* HackInteractionSpotWorldLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Looking At Specific Hack Interaction Point");
		
		ATekStrider_Character_BP_C_IsLookingAtSpecificHackInteractionPoint_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLookingat != nullptr)
			*IsLookingat = params.IsLookingat;
		if (HackInteractionSpotWorldLoc != nullptr)
			*HackInteractionSpotWorldLoc = params.HackInteractionSpotWorldLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.activate current Hack Interaction Spot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::activatecurrentHackInteractionSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.activate current Hack Interaction Spot");
		
		ATekStrider_Character_BP_C_activatecurrentHackInteractionSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveTick");
		
		ATekStrider_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideFloatingHUDLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector ATekStrider_Character_BP_C::BPOverrideFloatingHUDLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideFloatingHUDLocation");
		
		ATekStrider_Character_BP_C_BPOverrideFloatingHUDLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Throttled Request Mission Count
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ThrottledRequestMissionCount(class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Throttled Request Mission Count");
		
		ATekStrider_Character_BP_C_ThrottledRequestMissionCount_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTamingProgressBarIfActive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool ATekStrider_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");
		
		ATekStrider_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params {};
		
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit success
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::onhackinghitsuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit success");
		
		ATekStrider_Character_BP_C_onhackinghitsuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit fail
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::onhackinghitfail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit fail");
		
		ATekStrider_Character_BP_C_onhackinghitfail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveAnyDamage");
		
		ATekStrider_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.hacking success
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::hackingsuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.hacking success");
		
		ATekStrider_Character_BP_C_hackingsuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.sync mission complete status
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::syncmissioncompletestatus(class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.sync mission complete status");
		
		ATekStrider_Character_BP_C_syncmissioncompletestatus_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Sync Mission Complete Status
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::RestrictSyncMissionCompleteStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Sync Mission Complete Status");
		
		ATekStrider_Character_BP_C_RestrictSyncMissionCompleteStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyToggleHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHudHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPNotifyToggleHUD(bool bHudHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyToggleHUD");
		
		ATekStrider_Character_BP_C_BPNotifyToggleHUD_Params params {};
		params.bHudHidden = bHudHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Passenger Weapon Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              newWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::OnPassengerWeaponChanged(class AShooterWeapon* newWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Passenger Weapon Changed");
		
		ATekStrider_Character_BP_C_OnPassengerWeaponChanged_Params params {};
		params.newWeapon = newWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyAddPassenger");
		
		ATekStrider_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearPassenger");
		
		ATekStrider_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnBasedPawnRemovedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RemovedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BP_OnBasedPawnRemovedNotify(class AActor* RemovedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnBasedPawnRemovedNotify");
		
		ATekStrider_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params params {};
		params.RemovedActor = RemovedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ATekStrider_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ATekStrider_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationArray != nullptr)
			*AnimationArray = params.AnimationArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Tek Transmitter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    NewParam1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::SpawnTekTransmitter(const struct FVector& NewParam, const struct FRotator& NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Tek Transmitter");
		
		ATekStrider_Character_BP_C_SpawnTekTransmitter_Params params {};
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientDoMultiUse");
		
		ATekStrider_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTryMultiUse");
		
		ATekStrider_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ATekStrider_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetMultiUseEntries");
		
		ATekStrider_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Bed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    NewParam1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::SpawnBed(const struct FVector& NewParam, const struct FRotator& NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Bed");
		
		ATekStrider_Character_BP_C_SpawnBed_Params params {};
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ATekStrider_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPServerHandleNetExecCommand");
		
		ATekStrider_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ATekStrider_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.InterceptInputEvent");
		
		ATekStrider_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn platform saddle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::spawnplatformsaddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn platform saddle");
		
		ATekStrider_Character_BP_C_spawnplatformsaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Attachments
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ManuallySetHead                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ManuallySetChest                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::SpawnAttachments(int32_t ManuallySetHead, int32_t ManuallySetChest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Attachments");
		
		ATekStrider_Character_BP_C_SpawnAttachments_Params params {};
		params.ManuallySetHead = ManuallySetHead;
		params.ManuallySetChest = ManuallySetChest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveright
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ResetMoveright()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveright");
		
		ATekStrider_Character_BP_C_ResetMoveright_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveforward
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ResetMoveforward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveforward");
		
		ATekStrider_Character_BP_C_ResetMoveforward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveForward");
		
		ATekStrider_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekStrider_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveRight");
		
		ATekStrider_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ATekStrider_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetHUDElements");
		
		ATekStrider_Character_BP_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPChangedActorTeam
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::BPChangedActorTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPChangedActorTeam");
		
		ATekStrider_Character_BP_C_BPChangedActorTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerNonDedicated");
		
		ATekStrider_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintDrawFloatingHUD");
		
		ATekStrider_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerServer");
		
		ATekStrider_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Max Charge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::UpdateMaxCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Max Charge");
		
		ATekStrider_Character_BP_C_UpdateMaxCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyLevelUp");
		
		ATekStrider_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Unstasis Logic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::UnstasisLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Unstasis Logic");
		
		ATekStrider_Character_BP_C_UnstasisLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPSetupTamed");
		
		ATekStrider_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnRep_bAutoChargeActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::OnRep_bAutoChargeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnRep_bAutoChargeActive");
		
		ATekStrider_Character_BP_C_OnRep_bAutoChargeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Actual Radius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetActualRadius(float* Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Actual Radius");
		
		ATekStrider_Character_BP_C_GetActualRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Passive Charge Gain
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ChargeGain                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetPassiveChargeGain(float* ChargeGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Passive Charge Gain");
		
		ATekStrider_Character_BP_C_GetPassiveChargeGain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChargeGain != nullptr)
			*ChargeGain = params.ChargeGain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Charge Radius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::UpdateChargeRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Charge Radius");
		
		ATekStrider_Character_BP_C_UpdateChargeRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Auto Charge Notify
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::AutoChargeNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Auto Charge Notify");
		
		ATekStrider_Character_BP_C_AutoChargeNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Init
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Init");
		
		ATekStrider_Character_BP_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Initialize Charge Buff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::InitializeChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Initialize Charge Buff");
		
		ATekStrider_Character_BP_C_InitializeChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Buff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::CreateChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Buff");
		
		ATekStrider_Character_BP_C_CreateChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Destroy Charge Buff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::DestroyChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Destroy Charge Buff");
		
		ATekStrider_Character_BP_C_DestroyChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Charge Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::OnChargeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Charge Event");
		
		ATekStrider_Character_BP_C_OnChargeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Manager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::CreateChargeManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Manager");
		
		ATekStrider_Character_BP_C_CreateChargeManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuffs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ABuff_TekStrider_Attachment_Base_C*>  Buffs                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void ATekStrider_Character_BP_C::GetAttachmentBuffs(TArray<class ABuff_TekStrider_Attachment_Base_C*>* Buffs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuffs");
		
		ATekStrider_Character_BP_C_GetAttachmentBuffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buffs != nullptr)
			*Buffs = params.Buffs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekStrider_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetCrosshairAlpha");
		
		ATekStrider_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDoAttack");
		
		ATekStrider_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalEquipmentType                               AttachmentType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABuff_TekStrider_Attachment_Base_C*          Buff                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::GetAttachmentBuff(EPrimalEquipmentType AttachmentType, class ABuff_TekStrider_Attachment_Base_C** Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuff");
		
		ATekStrider_Character_BP_C_GetAttachmentBuff_Params params {};
		params.AttachmentType = AttachmentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buff != nullptr)
			*Buff = params.Buff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyInventoryItemChange");
		
		ATekStrider_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyStructurePlacedNearby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::BPNotifyStructurePlacedNearby(class APrimalStructure* NewStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyStructurePlacedNearby");
		
		ATekStrider_Character_BP_C_BPNotifyStructurePlacedNearby_Params params {};
		params.NewStructure = NewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.UserConstructionScript");
		
		ATekStrider_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__FinishedFunc");
		
		ATekStrider_Character_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__UpdateFunc");
		
		ATekStrider_Character_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean MulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventBooleanMulticastInterface(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean MulticastInterface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventBooleanMulticastInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Float Multicast Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventFloatMulticastInterface(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Float Multicast Interface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventFloatMulticastInterface_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Double MulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventDoubleMulticastInterface(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Double MulticastInterface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventDoubleMulticastInterface_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventBooleanInterface(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean Interface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventBooleanInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventFloatInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventFloatInterface(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventFloatInterface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventFloatInterface_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventDoubleInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventDoubleInterface(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventDoubleInterface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventDoubleInterface_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventIntInterface(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntInterface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventIntInterface_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntMulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventIntMulticastInterface(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntMulticastInterface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffAdded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_TekStrider_Attachment_Base_C*          Buff                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::OnAttachmentBuffAdded(class ABuff_TekStrider_Attachment_Base_C* Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffAdded");
		
		ATekStrider_Character_BP_C_OnAttachmentBuffAdded_Params params {};
		params.Buff = Buff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffRemoved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_TekStrider_Attachment_Base_C*          Buff                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::OnAttachmentBuffRemoved(class ABuff_TekStrider_Attachment_Base_C* Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffRemoved");
		
		ATekStrider_Character_BP_C_OnAttachmentBuffRemoved_Params params {};
		params.Buff = Buff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnJumpPressed");
		
		ATekStrider_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetInventoryTributeStatus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTribute                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::SetInventoryTributeStatus(bool IsTribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetInventoryTributeStatus");
		
		ATekStrider_Character_BP_C_SetInventoryTributeStatus_Params params {};
		params.IsTribute = IsTribute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPUnstasis");
		
		ATekStrider_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveBeginPlay");
		
		ATekStrider_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent");
		
		ATekStrider_Character_BP_C_ChargeVariableEvent_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEvent_Multicast(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent_Multicast");
		
		ATekStrider_Character_BP_C_ChargeVariableEvent_Multicast_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.CheckForBatteriesAndUpdate_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::CheckForBatteriesAndUpdate_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CheckForBatteriesAndUpdate_Multicast");
		
		ATekStrider_Character_BP_C_CheckForBatteriesAndUpdate_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnDied_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnDied_Event");
		
		ATekStrider_Character_BP_C_OnDied_Event_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.CreateChargeBuff_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::CreateChargeBuff_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CreateChargeBuff_Multicast");
		
		ATekStrider_Character_BP_C_CreateChargeBuff_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.DestroyChargeBuff_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::DestroyChargeBuff_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.DestroyChargeBuff_Multicast");
		
		ATekStrider_Character_BP_C_DestroyChargeBuff_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Interface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventInterface_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Trigger Multicast Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            iVariable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ChargeVariableEventTriggerMulticastInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t iVariable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Trigger Multicast Interface");
		
		ATekStrider_Character_BP_C_ChargeVariableEventTriggerMulticastInterface_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Interface Check for Batteries and Update Multicast
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::InterfaceCheckforBatteriesandUpdateMulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Interface Check for Batteries and Update Multicast");
		
		ATekStrider_Character_BP_C_InterfaceCheckforBatteriesandUpdateMulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Set Charge Variable Interface
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
	void ATekStrider_Character_BP_C::SetChargeVariableInterface(E_ChargeVariableNames variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Set Charge Variable Interface");
		
		ATekStrider_Character_BP_C_SetChargeVariableInterface_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.RandomizeUntamedStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::RandomizeUntamedStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.RandomizeUntamedStart");
		
		ATekStrider_Character_BP_C_RandomizeUntamedStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.NetUpdateCharge
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::NetUpdateCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.NetUpdateCharge");
		
		ATekStrider_Character_BP_C_NetUpdateCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoPostBeginPlay");
		
		ATekStrider_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.fade in platform
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::fadeinplatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.fade in platform");
		
		ATekStrider_Character_BP_C_fadeinplatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multicast Start Taming
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::MulticastStartTaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multicast Start Taming");
		
		ATekStrider_Character_BP_C_MulticastStartTaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit success
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     lasttamelocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::multicastonhackhitsuccess(const struct FVector& lasttamelocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit success");
		
		ATekStrider_Character_BP_C_multicastonhackhitsuccess_Params params {};
		params.lasttamelocation = lasttamelocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit fail
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::multicastonhackhitfail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit fail");
		
		ATekStrider_Character_BP_C_multicastonhackhitfail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack complete
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     lasthackspot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::multicastonhackcomplete(const struct FVector& lasthackspot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack complete");
		
		ATekStrider_Character_BP_C_multicastonhackcomplete_Params params {};
		params.lasthackspot = lasthackspot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on complete tame
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::multicastoncompletetame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on complete tame");
		
		ATekStrider_Character_BP_C_multicastoncompletetame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.set strider ref for hacking vfx
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::setstriderrefforhackingvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.set strider ref for hacking vfx");
		
		ATekStrider_Character_BP_C_setstriderrefforhackingvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.immediately set platform visible
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::immediatelysetplatformvisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.immediately set platform visible");
		
		ATekStrider_Character_BP_C_immediatelysetplatformvisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.MultiOnStriderDestroyed
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::MultiOnStriderDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.MultiOnStriderDestroyed");
		
		ATekStrider_Character_BP_C_MultiOnStriderDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.EnableInputMulti
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::EnableInputMulti(bool NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.EnableInputMulti");
		
		ATekStrider_Character_BP_C_EnableInputMulti_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieMulti
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::GetReadyToDieMulti()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieMulti");
		
		ATekStrider_Character_BP_C_GetReadyToDieMulti_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieSkip
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::GetReadyToDieSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieSkip");
		
		ATekStrider_Character_BP_C_GetReadyToDieSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on rocks
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::multicastplayresourcesuckvfxonrocks(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on rocks");
		
		ATekStrider_Character_BP_C_multicastplayresourcesuckvfxonrocks_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on trees
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::multicastplayresourcesuckvfxontrees(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on trees");
		
		ATekStrider_Character_BP_C_multicastplayresourcesuckvfxontrees_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast update tame percent on body
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::multicastupdatetamepercentonbody(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast update tame percent on body");
		
		ATekStrider_Character_BP_C_multicastupdatetamepercentonbody_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast activate transmitter vfx
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             timeactivated                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::multicastactivatetransmittervfx(double timeactivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast activate transmitter vfx");
		
		ATekStrider_Character_BP_C_multicastactivatetransmittervfx_Params params {};
		params.timeactivated = timeactivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast deactivate transmitter vfx
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::multicastdeactivatetransmittervfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast deactivate transmitter vfx");
		
		ATekStrider_Character_BP_C_multicastdeactivatetransmittervfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetupEventBindingsForDediStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DedicatedStorage_C*                      ForStorage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBind                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::SetupEventBindingsForDediStorage(class ABP_DedicatedStorage_C* ForStorage, bool bBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetupEventBindingsForDediStorage");
		
		ATekStrider_Character_BP_C_SetupEventBindingsForDediStorage_Params params {};
		params.ForStorage = ForStorage;
		params.bBind = bBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnLinkedDediStorageDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::OnLinkedDediStorageDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnLinkedDediStorageDestroyed");
		
		ATekStrider_Character_BP_C_OnLinkedDediStorageDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multi_RefreshLinkedDediStorageRef
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DedicatedStorage_C*                      LinkedStorage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::Multi_RefreshLinkedDediStorageRef(class ABP_DedicatedStorage_C* LinkedStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multi_RefreshLinkedDediStorageRef");
		
		ATekStrider_Character_BP_C_Multi_RefreshLinkedDediStorageRef_Params params {};
		params.LinkedStorage = LinkedStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.Server_RequestFixLinkedDediStorageRef
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekStrider_Character_BP_C::Server_RequestFixLinkedDediStorageRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Server_RequestFixLinkedDediStorageRef");
		
		ATekStrider_Character_BP_C_Server_RequestFixLinkedDediStorageRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnActorCustomEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventCustomName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      EventCustomString                                          (Parm, ZeroConstructor)
	 * 		class AActor*                                      InstigatorActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::OnActorCustomEvent_Event(const class FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnActorCustomEvent_Event");
		
		ATekStrider_Character_BP_C_OnActorCustomEvent_Event_Params params {};
		params.EventCustomName = EventCustomName;
		params.EventCustomString = EventCustomString;
		params.InstigatorActor = InstigatorActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.ExecuteUbergraph_TekStrider_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::ExecuteUbergraph_TekStrider_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ExecuteUbergraph_TekStrider_Character_BP");
		
		ATekStrider_Character_BP_C_ExecuteUbergraph_TekStrider_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnStructurePlacedOnSaddle__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekStrider_Character_BP_C::OnStructurePlacedOnSaddle__DelegateSignature(class APrimalStructure* Structure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnStructurePlacedOnSaddle__DelegateSignature");
		
		ATekStrider_Character_BP_C_OnStructurePlacedOnSaddle__DelegateSignature_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekStrider_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekStrider_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekStrider_Character_BP.TekStrider_Character_BP_C");
		return ptr;
	}

}


