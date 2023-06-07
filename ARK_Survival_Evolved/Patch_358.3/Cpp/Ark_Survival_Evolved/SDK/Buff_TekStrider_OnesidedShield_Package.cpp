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
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get activation charge cost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_TekStrider_OnesidedShield_C::getactivationchargecost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get activation charge cost");
		
		ABuff_TekStrider_OnesidedShield_C_getactivationchargecost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.inverse map range
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InRangeA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InRangeB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MappedrangeAinverse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MappedrangeBinverse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::inversemaprange(float Value, float InRangeA, float InRangeB, float MappedrangeAinverse, float MappedrangeBinverse, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.inverse map range");
		
		ABuff_TekStrider_OnesidedShield_C_inversemaprange_Params params {};
		params.Value = Value;
		params.InRangeA = InRangeA;
		params.InRangeB = InRangeB;
		params.MappedrangeAinverse = MappedrangeAinverse;
		params.MappedrangeBinverse = MappedrangeBinverse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Activate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::RestrictDoubletapActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Activate");
		
		ABuff_TekStrider_OnesidedShield_C_RestrictDoubletapActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.toggle active on ai
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::toggleactiveonai(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.toggle active on ai");
		
		ABuff_TekStrider_OnesidedShield_C_toggleactiveonai_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.is ai controlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::isaicontrolled(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.is ai controlled");
		
		ABuff_TekStrider_OnesidedShield_C_isaicontrolled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BuffTickServer");
		
		ABuff_TekStrider_OnesidedShield_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.can activate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::canactivate(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.can activate");
		
		ABuff_TekStrider_OnesidedShield_C_canactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield loc to aiming direction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::adjustshieldloctoaimingdirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield loc to aiming direction");
		
		ABuff_TekStrider_OnesidedShield_C_adjustshieldloctoaimingdirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Deactivating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::IsDeactivating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Deactivating");
		
		ABuff_TekStrider_OnesidedShield_C_IsDeactivating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Deactivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::RestrictDoubletapDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Deactivate");
		
		ABuff_TekStrider_OnesidedShield_C_RestrictDoubletapDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerDoubletapped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::TriggerDoubletapped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerDoubletapped");
		
		ABuff_TekStrider_OnesidedShield_C_TriggerDoubletapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceivePointDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ShotFromDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceivePointDamage");
		
		ABuff_TekStrider_OnesidedShield_C_ReceivePointDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.HitComponent = HitComponent;
		params.BoneName = BoneName;
		params.ShotFromDirection = ShotFromDirection;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Dynamic Material
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::GetDynamicMaterial(class UMaterialInstanceDynamic** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Dynamic Material");
		
		ABuff_TekStrider_OnesidedShield_C_GetDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerReleased
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::TriggerReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerReleased");
		
		ABuff_TekStrider_OnesidedShield_C_TriggerReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get local yaw and roll
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Roll                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::getlocalyawandroll(float* Yaw, float* Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get local yaw and roll");
		
		ABuff_TekStrider_OnesidedShield_C_getlocalyawandroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yaw != nullptr)
			*Yaw = params.Yaw;
		if (Roll != nullptr)
			*Roll = params.Roll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::adjustshieldlocation(class APlayerController* PC, float Yaw, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield location");
		
		ABuff_TekStrider_OnesidedShield_C_adjustshieldlocation_Params params {};
		params.PC = PC;
		params.Yaw = Yaw;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPGetHUDElements");
		
		ABuff_TekStrider_OnesidedShield_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.timeout cancel shield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::timeoutcancelshield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.timeout cancel shield");
		
		ABuff_TekStrider_OnesidedShield_C_timeoutcancelshield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Held Direction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HeldDirection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::GetHeldDirection(struct FVector* HeldDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Held Direction");
		
		ABuff_TekStrider_OnesidedShield_C_GetHeldDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeldDirection != nullptr)
			*HeldDirection = params.HeldDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_TekStrider_OnesidedShield_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPServerHandleNetExecCommand");
		
		ABuff_TekStrider_OnesidedShield_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekStrider_OnesidedShield_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPClientHandleNetExecCommand");
		
		ABuff_TekStrider_OnesidedShield_C_BPClientHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::deactivateshield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield");
		
		ABuff_TekStrider_OnesidedShield_C_deactivateshield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Trigger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Trigger");
		
		ABuff_TekStrider_OnesidedShield_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceiveAnyDamage");
		
		ABuff_TekStrider_OnesidedShield_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPDeactivated");
		
		ABuff_TekStrider_OnesidedShield_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPSetupForInstigator");
		
		ABuff_TekStrider_OnesidedShield_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.UserConstructionScript");
		
		ABuff_TekStrider_OnesidedShield_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__FinishedFunc");
		
		ABuff_TekStrider_OnesidedShield_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__UpdateFunc");
		
		ABuff_TekStrider_OnesidedShield_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__FinishedFunc");
		
		ABuff_TekStrider_OnesidedShield_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__UpdateFunc");
		
		ABuff_TekStrider_OnesidedShield_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__FinishedFunc");
		
		ABuff_TekStrider_OnesidedShield_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__UpdateFunc");
		
		ABuff_TekStrider_OnesidedShield_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_ActivateShield
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              shielddurability                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Multicast_ActivateShield(float shielddurability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_ActivateShield");
		
		ABuff_TekStrider_OnesidedShield_C_Multicast_ActivateShield_Params params {};
		params.shielddurability = shielddurability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_DeactivateShield
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::Multicast_DeactivateShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_DeactivateShield");
		
		ABuff_TekStrider_OnesidedShield_C_Multicast_DeactivateShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.SetShieldRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::SetShieldRotation(float Yaw, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.SetShieldRotation");
		
		ABuff_TekStrider_OnesidedShield_C_SetShieldRotation_Params params {};
		params.Yaw = Yaw;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Activate Shield VFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::ActivateShieldVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Activate Shield VFX");
		
		ABuff_TekStrider_OnesidedShield_C_ActivateShieldVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield vfx
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_OnesidedShield_C::deactivateshieldvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield vfx");
		
		ABuff_TekStrider_OnesidedShield_C_deactivateshieldvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield color
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              durability                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::adjustshieldcolor(float durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield color");
		
		ABuff_TekStrider_OnesidedShield_C_adjustshieldcolor_Params params {};
		params.durability = durability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Spawn Particle At Hit Point
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Hit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::SpawnParticleAtHitPoint(const struct FVector& Location, const struct FVector& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Spawn Particle At Hit Point");
		
		ABuff_TekStrider_OnesidedShield_C_SpawnParticleAtHitPoint_Params params {};
		params.Location = Location;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ExecuteUbergraph_Buff_TekStrider_OnesidedShield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_OnesidedShield_C::ExecuteUbergraph_Buff_TekStrider_OnesidedShield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ExecuteUbergraph_Buff_TekStrider_OnesidedShield");
		
		ABuff_TekStrider_OnesidedShield_C_ExecuteUbergraph_Buff_TekStrider_OnesidedShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStrider_OnesidedShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStrider_OnesidedShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C");
		return ptr;
	}

}


