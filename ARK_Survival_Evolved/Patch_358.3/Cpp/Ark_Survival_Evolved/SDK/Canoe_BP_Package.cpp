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
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.AllowGrappling
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ACanoe_BP_C::AllowGrappling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.AllowGrappling");
		
		ACanoe_BP_C_AllowGrappling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.OnCanoeAtRestStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::OnCanoeAtRestStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnCanoeAtRestStateChanged");
		
		ACanoe_BP_C_OnCanoeAtRestStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.UpdateCanoeAtRest
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::UpdateCanoeAtRest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateCanoeAtRest");
		
		ACanoe_BP_C_UpdateCanoeAtRest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity_External
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::GetCanoeVelocity_External(struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity_External");
		
		ACanoe_BP_C_GetCanoeVelocity_External_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::GetCanoeVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity");
		
		ACanoe_BP_C_GetCanoeVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPAllowMovementSound
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ACanoe_BP_C::BPAllowMovementSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPAllowMovementSound");
		
		ACanoe_BP_C_BPAllowMovementSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.CanModifyCanoeDesiredRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::CanModifyCanoeDesiredRotation(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.CanModifyCanoeDesiredRotation");
		
		ACanoe_BP_C_CanModifyCanoeDesiredRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.GetCanoeNumPassengers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumPassengers                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::GetCanoeNumPassengers(int32_t* NumPassengers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetCanoeNumPassengers");
		
		ACanoe_BP_C_GetCanoeNumPassengers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumPassengers != nullptr)
			*NumPassengers = params.NumPassengers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.DoesCanoeHaveAnyPassengers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::DoesCanoeHaveAnyPassengers(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DoesCanoeHaveAnyPassengers");
		
		ACanoe_BP_C_DoesCanoeHaveAnyPassengers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.IsPlayerCanoePassenger
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           CheckPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::IsPlayerCanoePassenger(class AShooterCharacter* CheckPlayer, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.IsPlayerCanoePassenger");
		
		ACanoe_BP_C_IsPlayerCanoePassenger_Params params {};
		params.CheckPlayer = CheckPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.UpdateCanoeHudTextOverlay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::UpdateCanoeHudTextOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateCanoeHudTextOverlay");
		
		ACanoe_BP_C_UpdateCanoeHudTextOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.RemoveCanoeHudTextOverlayFromPassenger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           FromPassenger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::RemoveCanoeHudTextOverlayFromPassenger(class AShooterCharacter* FromPassenger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.RemoveCanoeHudTextOverlayFromPassenger");
		
		ACanoe_BP_C_RemoveCanoeHudTextOverlayFromPassenger_Params params {};
		params.FromPassenger = FromPassenger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.AddCanoeHudTextOverlayToPassenger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ToPassenger                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::AddCanoeHudTextOverlayToPassenger(class AShooterCharacter* ToPassenger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.AddCanoeHudTextOverlayToPassenger");
		
		ACanoe_BP_C_AddCanoeHudTextOverlayToPassenger_Params params {};
		params.ToPassenger = ToPassenger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPRemovedAttachmentsForItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BPRemovedAttachmentsForItem(class UPrimalItem* anItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPRemovedAttachmentsForItem");
		
		ACanoe_BP_C_BPRemovedAttachmentsForItem_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_OnPaintingComponentInitialized
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStructurePaintingComponent*                 PaintingComp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BP_OnPaintingComponentInitialized(class UStructurePaintingComponent* PaintingComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OnPaintingComponentInitialized");
		
		ACanoe_BP_C_BP_OnPaintingComponentInitialized_Params params {};
		params.PaintingComp = PaintingComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.CanUsePassengerReplicatedInputQueue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::CanUsePassengerReplicatedInputQueue(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.CanUsePassengerReplicatedInputQueue");
		
		ACanoe_BP_C_CanUsePassengerReplicatedInputQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.OnRep_bPreventCanoeExitingWater
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::OnRep_bPreventCanoeExitingWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnRep_bPreventCanoeExitingWater");
		
		ACanoe_BP_C_OnRep_bPreventCanoeExitingWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.CanDynamicalyPreventExitingWater
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::CanDynamicalyPreventExitingWater(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.CanDynamicalyPreventExitingWater");
		
		ACanoe_BP_C_CanDynamicalyPreventExitingWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.UpdateBeachInputHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::UpdateBeachInputHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateBeachInputHUD");
		
		ACanoe_BP_C_UpdateBeachInputHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.OnUpdateCanoePreventExitingWater
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::OnUpdateCanoePreventExitingWater(bool bNewVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnUpdateCanoePreventExitingWater");
		
		ACanoe_BP_C_OnUpdateCanoePreventExitingWater_Params params {};
		params.bNewVal = bNewVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.UpdateCanoeWantsToBeach
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::UpdateCanoeWantsToBeach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateCanoeWantsToBeach");
		
		ACanoe_BP_C_UpdateCanoeWantsToBeach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACanoe_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_PreventMovementMode");
		
		ACanoe_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.UpdatePreventCanoeFromExitingWater
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::UpdatePreventCanoeFromExitingWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdatePreventCanoeFromExitingWater");
		
		ACanoe_BP_C_UpdatePreventCanoeFromExitingWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.PackInputAxesIntoVector2D
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Forward                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::PackInputAxesIntoVector2D(float Forward, float Right, struct FVector2D* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PackInputAxesIntoVector2D");
		
		ACanoe_BP_C_PackInputAxesIntoVector2D_Params params {};
		params.Forward = Forward;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Right
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::ProcessReceivedPassengerInputsQueue_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Right");
		
		ACanoe_BP_C_ProcessReceivedPassengerInputsQueue_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Forward
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::ProcessReceivedPassengerInputsQueue_Forward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Forward");
		
		ACanoe_BP_C_ProcessReceivedPassengerInputsQueue_Forward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ConvertServerReceivedPassengerInputsIntoVector2Ds
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector2D>                           Inputs                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ACanoe_BP_C::ConvertServerReceivedPassengerInputsIntoVector2Ds(TArray<struct FVector2D>* Inputs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ConvertServerReceivedPassengerInputsIntoVector2Ds");
		
		ACanoe_BP_C_ConvertServerReceivedPassengerInputsIntoVector2Ds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inputs != nullptr)
			*Inputs = params.Inputs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_OverrideSwimmingAcceleration
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ModifyAcceleration                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BP_OverrideSwimmingAcceleration(struct FVector* ModifyAcceleration, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OverrideSwimmingAcceleration");
		
		ACanoe_BP_C_BP_OverrideSwimmingAcceleration_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifyAcceleration != nullptr)
			*ModifyAcceleration = params.ModifyAcceleration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ReceivedSavedPassengerInputStruct
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCanoePassengerClientInputAxes              ClientSavedInputs                                          (Parm)
	 * 		class AShooterCharacter*                           ForPassengerPlayer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::ReceivedSavedPassengerInputStruct(const struct FCanoePassengerClientInputAxes& ClientSavedInputs, class AShooterCharacter* ForPassengerPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ReceivedSavedPassengerInputStruct");
		
		ACanoe_BP_C_ReceivedSavedPassengerInputStruct_Params params {};
		params.ClientSavedInputs = ClientSavedInputs;
		params.ForPassengerPlayer = ForPassengerPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPOverridePassengerAdditiveAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForPassenger                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimSequence* ACanoe_BP_C::BPOverridePassengerAdditiveAnim(class APrimalCharacter* ForPassenger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPOverridePassengerAdditiveAnim");
		
		ACanoe_BP_C_BPOverridePassengerAdditiveAnim_Params params {};
		params.ForPassenger = ForPassenger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.IsCanoeAdvancedSimProxy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::IsCanoeAdvancedSimProxy(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.IsCanoeAdvancedSimProxy");
		
		ACanoe_BP_C_IsCanoeAdvancedSimProxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.CleanUpAllOarWeapons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::CleanUpAllOarWeapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.CleanUpAllOarWeapons");
		
		ACanoe_BP_C_CleanUpAllOarWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OnSetDeath");
		
		ACanoe_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.SetPlayerUseOarWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNewUse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::SetPlayerUseOarWeapon(class AShooterCharacter* ForPlayer, bool bNewUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.SetPlayerUseOarWeapon");
		
		ACanoe_BP_C_SetPlayerUseOarWeapon_Params params {};
		params.ForPlayer = ForPlayer;
		params.bNewUse = bNewUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPAddedAttachmentsForItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BPAddedAttachmentsForItem(class UPrimalItem* anItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPAddedAttachmentsForItem");
		
		ACanoe_BP_C_BPAddedAttachmentsForItem_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPOnRefreshColorization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ACanoe_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPOnRefreshColorization");
		
		ACanoe_BP_C_BPOnRefreshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.DebugPrintReplicatedInputs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::DebugPrintReplicatedInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DebugPrintReplicatedInputs");
		
		ACanoe_BP_C_DebugPrintReplicatedInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.DebugCanoeMovementVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::DebugCanoeMovementVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DebugCanoeMovementVars");
		
		ACanoe_BP_C_DebugCanoeMovementVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPOverrideSwimmingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FluidFriction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NetBuoyancy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ACanoe_BP_C::BPOverrideSwimmingVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float FluidFriction, float NetBuoyancy, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPOverrideSwimmingVelocity");
		
		ACanoe_BP_C_BPOverrideSwimmingVelocity_Params params {};
		params.InitialVelocity = InitialVelocity;
		params.Gravity = Gravity;
		params.FluidFriction = FluidFriction;
		params.NetBuoyancy = NetBuoyancy;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.TryRow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             WithGameTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::TryRow(double WithGameTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.TryRow");
		
		ACanoe_BP_C_TryRow_Params params {};
		params.WithGameTime = WithGameTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.FetchLocallyControlledPassengerInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::FetchLocallyControlledPassengerInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.FetchLocallyControlledPassengerInputs");
		
		ACanoe_BP_C_FetchLocallyControlledPassengerInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ForceClearPassengerInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::ForceClearPassengerInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ForceClearPassengerInputs");
		
		ACanoe_BP_C_ForceClearPassengerInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.SetUseAdvancedCanoeSimMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::SetUseAdvancedCanoeSimMovement(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.SetUseAdvancedCanoeSimMovement");
		
		ACanoe_BP_C_SetUseAdvancedCanoeSimMovement_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ResetSimCanoeVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::ResetSimCanoeVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ResetSimCanoeVars");
		
		ACanoe_BP_C_ResetSimCanoeVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPOnMovementModeChangedNotify");
		
		ACanoe_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ShouldUseAdvancedSimMovement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::ShouldUseAdvancedSimMovement(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ShouldUseAdvancedSimMovement");
		
		ACanoe_BP_C_ShouldUseAdvancedSimMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnRemovedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RemovedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BP_OnBasedPawnRemovedNotify(class AActor* RemovedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnRemovedNotify");
		
		ACanoe_BP_C_BP_OnBasedPawnRemovedNotify_Params params {};
		params.RemovedActor = RemovedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnAddedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AddedActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BP_OnBasedPawnAddedNotify(class AActor* AddedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnAddedNotify");
		
		ACanoe_BP_C_BP_OnBasedPawnAddedNotify_Params params {};
		params.AddedActor = AddedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.DebugPerPassengerMovementVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::DebugPerPassengerMovementVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DebugPerPassengerMovementVars");
		
		ACanoe_BP_C_DebugPerPassengerMovementVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.UpdateCurrentPassengerInputs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAnyActive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::UpdateCurrentPassengerInputs(bool* bAnyActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateCurrentPassengerInputs");
		
		ACanoe_BP_C_UpdateCurrentPassengerInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAnyActive != nullptr)
			*bAnyActive = params.bAnyActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.OnRep_ReplicatedPassengerInputs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::OnRep_ReplicatedPassengerInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnRep_ReplicatedPassengerInputs");
		
		ACanoe_BP_C_OnRep_ReplicatedPassengerInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.UnpackReplicatedPassengerInputs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::UnpackReplicatedPassengerInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UnpackReplicatedPassengerInputs");
		
		ACanoe_BP_C_UnpackReplicatedPassengerInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.PackReplicatedPassengerInputs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::PackReplicatedPassengerInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PackReplicatedPassengerInputs");
		
		ACanoe_BP_C_PackReplicatedPassengerInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.PerformSimCanoeMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::PerformSimCanoeMovement(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PerformSimCanoeMovement");
		
		ACanoe_BP_C_PerformSimCanoeMovement_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPTimerNonDedicated");
		
		ACanoe_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPTimerServer");
		
		ACanoe_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_OverrideCameraTargetOriginLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutOverrideOrigin                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FName                                        WithCameraStyle                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BP_OverrideCameraTargetOriginLocation(struct FVector* OutOverrideOrigin, const class FName& WithCameraStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OverrideCameraTargetOriginLocation");
		
		ACanoe_BP_C_BP_OverrideCameraTargetOriginLocation_Params params {};
		params.WithCameraStyle = WithCameraStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOverrideOrigin != nullptr)
			*OutOverrideOrigin = params.OutOverrideOrigin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ReceiveHit
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
	void ACanoe_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ReceiveHit");
		
		ACanoe_BP_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPCanTakePassenger
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PassengerSeatIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForcePassenger                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowFlyersAndWaterDinos                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACanoe_BP_C::BPCanTakePassenger(class APrimalCharacter* Character, int32_t PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPCanTakePassenger");
		
		ACanoe_BP_C_BPCanTakePassenger_Params params {};
		params.Character = Character;
		params.PassengerSeatIndex = PassengerSeatIndex;
		params.bForcePassenger = bForcePassenger;
		params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.GetPlayerSpawnLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector ACanoe_BP_C::GetPlayerSpawnLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetPlayerSpawnLocation");
		
		ACanoe_BP_C_GetPlayerSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ACanoe_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPServerHandleNetExecCommand");
		
		ACanoe_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPDinoPostBeginPlay");
		
		ACanoe_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_ForceAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACanoe_BP_C::BP_ForceAllowAddBuff(class UClass* BuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_ForceAllowAddBuff");
		
		ACanoe_BP_C_BP_ForceAllowAddBuff_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.HandleFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::HandleFX(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.HandleFX");
		
		ACanoe_BP_C_HandleFX_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.SortSeatsByDistance
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ToLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSaddlePassengerSeatDefinition>      SortedSeatDefinitons                                       (Parm, OutParm, ZeroConstructor)
	 * 		TArray<int32_t>                                    Sortedindices                                              (Parm, OutParm, ZeroConstructor)
	 */
	void ACanoe_BP_C::SortSeatsByDistance(const struct FVector& ToLocation, class APrimalCharacter* forCharacter, TArray<struct FSaddlePassengerSeatDefinition>* SortedSeatDefinitons, TArray<int32_t>* Sortedindices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.SortSeatsByDistance");
		
		ACanoe_BP_C_SortSeatsByDistance_Params params {};
		params.ToLocation = ToLocation;
		params.forCharacter = forCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortedSeatDefinitons != nullptr)
			*SortedSeatDefinitons = params.SortedSeatDefinitons;
		if (Sortedindices != nullptr)
			*Sortedindices = params.Sortedindices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPCameraBaseOrientation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ACanoe_BP_C::BPCameraBaseOrientation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPCameraBaseOrientation");
		
		ACanoe_BP_C_BPCameraBaseOrientation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPLimitPlayerRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InViewRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ACanoe_BP_C::BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPLimitPlayerRotation");
		
		ACanoe_BP_C_BPLimitPlayerRotation_Params params {};
		params.viewingCharacter = viewingCharacter;
		params.InViewRotation = InViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACanoe_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPModifyDesiredRotation");
		
		ACanoe_BP_C_BPModifyDesiredRotation_Params params {};
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
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.PassengerWeaponChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              newWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::PassengerWeaponChanged(class AShooterWeapon* newWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PassengerWeaponChanged");
		
		ACanoe_BP_C_PassengerWeaponChanged_Params params {};
		params.newWeapon = newWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.OnSpawnedForItem
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ForItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::OnSpawnedForItem(class UPrimalItem* ForItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnSpawnedForItem");
		
		ACanoe_BP_C_OnSpawnedForItem_Params params {};
		params.ForItem = ForItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BP_ForceAllowMountedWeapon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WeaponTemplate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACanoe_BP_C::BP_ForceAllowMountedWeapon(class UClass* WeaponTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_ForceAllowMountedWeapon");
		
		ACanoe_BP_C_BP_ForceAllowMountedWeapon_Params params {};
		params.WeaponTemplate = WeaponTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.GetCurrentPassengerAxisInputs
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDebug                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAnyActiveInputs                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector2D>                           PerPassengerInputs                                         (Parm, OutParm, ZeroConstructor)
	 * 		float                                              AvgForward                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AvgRight                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumActiveForward                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumActiveRight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::GetCurrentPassengerAxisInputs(bool bDebug, bool* bAnyActiveInputs, TArray<struct FVector2D>* PerPassengerInputs, float* AvgForward, float* AvgRight, int32_t* NumActiveForward, int32_t* NumActiveRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetCurrentPassengerAxisInputs");
		
		ACanoe_BP_C_GetCurrentPassengerAxisInputs_Params params {};
		params.bDebug = bDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAnyActiveInputs != nullptr)
			*bAnyActiveInputs = params.bAnyActiveInputs;
		if (PerPassengerInputs != nullptr)
			*PerPassengerInputs = params.PerPassengerInputs;
		if (AvgForward != nullptr)
			*AvgForward = params.AvgForward;
		if (AvgRight != nullptr)
			*AvgRight = params.AvgRight;
		if (NumActiveForward != nullptr)
			*NumActiveForward = params.NumActiveForward;
		if (NumActiveRight != nullptr)
			*NumActiveRight = params.NumActiveRight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPNotifyClearPassenger");
		
		ACanoe_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPNotifyAddPassenger");
		
		ACanoe_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.PickupCanoe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::PickupCanoe(class AShooterCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PickupCanoe");
		
		ACanoe_BP_C_PickupCanoe_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACanoe_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPTryMultiUse");
		
		ACanoe_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ACanoe_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPGetMultiUseEntries");
		
		ACanoe_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACanoe_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPCanBeBaseForCharacter");
		
		ACanoe_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACanoe_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPCanCryo");
		
		ACanoe_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ReceiveAnyDamage");
		
		ACanoe_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UserConstructionScript");
		
		ACanoe_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.DoPlayKnockAnimation
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            KnockDirectionIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::DoPlayKnockAnimation(int32_t KnockDirectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DoPlayKnockAnimation");
		
		ACanoe_BP_C_DoPlayKnockAnimation_Params params {};
		params.KnockDirectionIndex = KnockDirectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.Multicast_RefreshColors
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ACanoe_BP_C::Multicast_RefreshColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.Multicast_RefreshColors");
		
		ACanoe_BP_C_Multicast_RefreshColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Canoe_BP.Canoe_BP_C.ExecuteUbergraph_Canoe_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACanoe_BP_C::ExecuteUbergraph_Canoe_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ExecuteUbergraph_Canoe_BP");
		
		ACanoe_BP_C_ExecuteUbergraph_Canoe_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACanoe_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACanoe_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Canoe_BP.Canoe_BP_C");
		return ptr;
	}

}


