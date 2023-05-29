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
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Try To Add  Resource from first trace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         hitcomponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FOverlappedFoliageElement>           Resources                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     impactpoint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::TryToAddResourcefromfirsttrace(class UPrimitiveComponent* hitcomponent, TArray<struct FOverlappedFoliageElement>* Resources, const struct FVector& impactpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Try To Add  Resource from first trace");
		
		ABuff_TekStrider_Harvester_C_TryToAddResourcefromfirsttrace_Params params {};
		params.hitcomponent = hitcomponent;
		params.impactpoint = impactpoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Resources != nullptr)
			*Resources = params.Resources;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp angle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_TekStrider_Harvester_C::clampangle(const struct FVector& A, float InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp angle");
		
		ABuff_TekStrider_Harvester_C_clampangle_Params params {};
		params.A = A;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Deactivate Firing Vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::DeactivateFiringVfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Deactivate Firing Vfx");
		
		ABuff_TekStrider_Harvester_C_DeactivateFiringVfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickServer");
		
		ABuff_TekStrider_Harvester_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekStrider_Harvester_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetHUDElements");
		
		ABuff_TekStrider_Harvester_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.CanActivateHarvester
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkspecialconditionsfordebugging                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::CanActivateHarvester(bool checkspecialconditionsfordebugging, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.CanActivateHarvester");
		
		ABuff_TekStrider_Harvester_C_CanActivateHarvester_Params params {};
		params.checkspecialconditionsfordebugging = checkspecialconditionsfordebugging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetOwnerStriderLinkedDediStorageSelectedItemClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ItemClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::GetOwnerStriderLinkedDediStorageSelectedItemClass(bool* bIsValid, class UClass** ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetOwnerStriderLinkedDediStorageSelectedItemClass");
		
		ABuff_TekStrider_Harvester_C_GetOwnerStriderLinkedDediStorageSelectedItemClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ItemClass != nullptr)
			*ItemClass = params.ItemClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ShouldHarvestFoliage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOverlappedFoliageElement                   CheckFoliage                                               (Parm)
	 * 		struct FVector                                     overrideharvestloc                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::ShouldHarvestFoliage(const struct FOverlappedFoliageElement& CheckFoliage, const struct FVector& overrideharvestloc, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ShouldHarvestFoliage");
		
		ABuff_TekStrider_Harvester_C_ShouldHarvestFoliage_Params params {};
		params.CheckFoliage = CheckFoliage;
		params.overrideharvestloc = overrideharvestloc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPClientDoMultiUse");
		
		ABuff_TekStrider_Harvester_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Cannot Fire Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::CannotFireTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Cannot Fire Timer");
		
		ABuff_TekStrider_Harvester_C_CannotFireTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_TekStrider_Harvester_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetMultiUseEntries");
		
		ABuff_TekStrider_Harvester_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.add found foliage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FOverlappedFoliageElement>           Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_TekStrider_Harvester_C::addfoundfoliage(TArray<struct FOverlappedFoliageElement>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.add found foliage");
		
		ABuff_TekStrider_Harvester_C_addfoundfoliage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.spawn targeting vfx
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             InputPin                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_TekStrider_Harvester_C::spawntargetingvfx(TArray<struct FVector>* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.spawn targeting vfx");
		
		ABuff_TekStrider_Harvester_C_spawntargetingvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputPin != nullptr)
			*InputPin = params.InputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Pass In Foliage Limit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::PassInFoliageLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Pass In Foliage Limit");
		
		ABuff_TekStrider_Harvester_C_PassInFoliageLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing Clientside
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::IsFiringClientside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing Clientside");
		
		ABuff_TekStrider_Harvester_C_IsFiringClientside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restriction on Passing Foliage to Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::RestrictiononPassingFoliagetoServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restriction on Passing Foliage to Server");
		
		ABuff_TekStrider_Harvester_C_RestrictiononPassingFoliagetoServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx 2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::DelayDisableIndependantImpactMiningVfx2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx 2");
		
		ABuff_TekStrider_Harvester_C_DelayDisableIndependantImpactMiningVfx2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp aiming angle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     inVec                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_TekStrider_Harvester_C::clampaimingangle(const struct FVector& inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp aiming angle");
		
		ABuff_TekStrider_Harvester_C_clampaimingangle_Params params {};
		params.inVec = inVec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.set aim indicator direction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::setaimindicatordirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.set aim indicator direction");
		
		ABuff_TekStrider_Harvester_C_setaimindicatordirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restrict Too Frequent Calls to Show Gather Vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::RestrictTooFrequentCallstoShowGatherVfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restrict Too Frequent Calls to Show Gather Vfx");
		
		ABuff_TekStrider_Harvester_C_RestrictTooFrequentCallstoShowGatherVfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing");
		
		ABuff_TekStrider_Harvester_C_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ReceiveBeginPlay");
		
		ABuff_TekStrider_Harvester_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::DelayDisableIndependantImpactMiningVfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx");
		
		ABuff_TekStrider_Harvester_C_DelayDisableIndependantImpactMiningVfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Trigger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Trigger");
		
		ABuff_TekStrider_Harvester_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Get Beam Origin and End
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::GetBeamOriginandEnd(struct FVector* Origin, struct FVector* End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Get Beam Origin and End");
		
		ABuff_TekStrider_Harvester_C_GetBeamOriginandEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Origin != nullptr)
			*Origin = params.Origin;
		if (End != nullptr)
			*End = params.End;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetBeamImpact
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BeamStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BeamEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BeamImpact                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitSomething                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::GetBeamImpact(const struct FVector& BeamStart, const struct FVector& BeamEnd, struct FVector* BeamImpact, bool* HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetBeamImpact");
		
		ABuff_TekStrider_Harvester_C_GetBeamImpact_Params params {};
		params.BeamStart = BeamStart;
		params.BeamEnd = BeamEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BeamImpact != nullptr)
			*BeamImpact = params.BeamImpact;
		if (HitSomething != nullptr)
			*HitSomething = params.HitSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.IsAIControlled?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsAI                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::IsAIControlled(bool* IsAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.IsAIControlled?");
		
		ABuff_TekStrider_Harvester_C_IsAIControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAI != nullptr)
			*IsAI = params.IsAI;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Update Beam Impact Location
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::UpdateBeamImpactLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Update Beam Impact Location");
		
		ABuff_TekStrider_Harvester_C_UpdateBeamImpactLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPSetupForInstigator");
		
		ABuff_TekStrider_Harvester_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickClient");
		
		ABuff_TekStrider_Harvester_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Buff Tick Server Logic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::BuffTickServerLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Buff Tick Server Logic");
		
		ABuff_TekStrider_Harvester_C_BuffTickServerLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Visual Beam Origin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void ABuff_TekStrider_Harvester_C::VisualBeamOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Visual Beam Origin");
		
		ABuff_TekStrider_Harvester_C_VisualBeamOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.UserConstructionScript");
		
		ABuff_TekStrider_Harvester_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_ActivateBeam
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::Multicast_ActivateBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_ActivateBeam");
		
		ABuff_TekStrider_Harvester_C_Multicast_ActivateBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_DeactivateBeam
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::Multicast_DeactivateBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_DeactivateBeam");
		
		ABuff_TekStrider_Harvester_C_Multicast_DeactivateBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ValidatePlayerBeamOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ImpactPoint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::ValidatePlayerBeamOnServer(const struct FVector& ImpactPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ValidatePlayerBeamOnServer");
		
		ABuff_TekStrider_Harvester_C_ValidatePlayerBeamOnServer_Params params {};
		params.ImpactPoint = ImpactPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_UpdateBeamImpactLocation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BeamImpactLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::Multicast_UpdateBeamImpactLocation(const struct FVector& BeamImpactLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_UpdateBeamImpactLocation");
		
		ABuff_TekStrider_Harvester_C_Multicast_UpdateBeamImpactLocation_Params params {};
		params.BeamImpactLocation = BeamImpactLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Pass_Multiple_Impact_Locations
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             impactlocations                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               containedrocks                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::Multicast_Pass_Multiple_Impact_Locations(TArray<struct FVector>* impactlocations, bool containedrocks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Pass_Multiple_Impact_Locations");
		
		ABuff_TekStrider_Harvester_C_Multicast_Pass_Multiple_Impact_Locations_Params params {};
		params.containedrocks = containedrocks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (impactlocations != nullptr)
			*impactlocations = params.impactlocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.multicast begin charging shot
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::multicastbeginchargingshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.multicast begin charging shot");
		
		ABuff_TekStrider_Harvester_C_multicastbeginchargingshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.InventoryItemAdded__DelegateSignature_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   inventory                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmountAdded                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquippedItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::InventoryItemAdded__DelegateSignature_Event(class UPrimalInventoryComponent* inventory, class UPrimalItem* Item, int32_t AmountAdded, bool bEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.InventoryItemAdded__DelegateSignature_Event");
		
		ABuff_TekStrider_Harvester_C_InventoryItemAdded__DelegateSignature_Event_Params params {};
		params.inventory = inventory;
		params.Item = Item;
		params.AmountAdded = AmountAdded;
		params.bEquippedItem = bEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.bind item added
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::binditemadded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.bind item added");
		
		ABuff_TekStrider_Harvester_C_binditemadded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.unbind item added
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Harvester_C::unbinditemadded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.unbind item added");
		
		ABuff_TekStrider_Harvester_C_unbinditemadded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Charge_Upcoming_Zaps
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             impactlocations                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               containedrocks                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::Multicast_Charge_Upcoming_Zaps(TArray<struct FVector>* impactlocations, bool containedrocks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Charge_Upcoming_Zaps");
		
		ABuff_TekStrider_Harvester_C_Multicast_Charge_Upcoming_Zaps_Params params {};
		params.containedrocks = containedrocks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (impactlocations != nullptr)
			*impactlocations = params.impactlocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.passed-in foliage
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FOverlappedFoliageElement>           Foliage                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_TekStrider_Harvester_C::passedinfoliage(TArray<struct FOverlappedFoliageElement>* Foliage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.passed-in foliage");
		
		ABuff_TekStrider_Harvester_C_passedinfoliage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Foliage != nullptr)
			*Foliage = params.Foliage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ExecuteUbergraph_Buff_TekStrider_Harvester
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Harvester_C::ExecuteUbergraph_Buff_TekStrider_Harvester(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ExecuteUbergraph_Buff_TekStrider_Harvester");
		
		ABuff_TekStrider_Harvester_C_ExecuteUbergraph_Buff_TekStrider_Harvester_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStrider_Harvester_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStrider_Harvester_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C");
		return ptr;
	}

}


