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
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveTick");
		
		ABaseSwarmChar_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::ThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ThrottledTick");
		
		ABaseSwarmChar_BP_C_ThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Set Material Vector Parameter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        SM                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::SetMaterialVectorParameter(class UStaticMeshComponent* SM, const class FName& Parameter, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Set Material Vector Parameter");
		
		ABaseSwarmChar_BP_C_SetMaterialVectorParameter_Params params {};
		params.SM = SM;
		params.Parameter = Parameter;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SendTargetedMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::SendTargetedMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SendTargetedMessage");
		
		ABaseSwarmChar_BP_C_SendTargetedMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SwarmLifetimeEnded
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::SwarmLifetimeEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SwarmLifetimeEnded");
		
		ABaseSwarmChar_BP_C_SwarmLifetimeEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetSwarmLifetime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::SetSwarmLifetime(float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetSwarmLifetime");
		
		ABaseSwarmChar_BP_C_SetSwarmLifetime_Params params {};
		params.LifeTime = LifeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.FinishedAttackingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::FinishedAttackingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.FinishedAttackingTarget");
		
		ABaseSwarmChar_BP_C_FinishedAttackingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.StartAttackingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::StartAttackingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.StartAttackingTarget");
		
		ABaseSwarmChar_BP_C_StartAttackingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SpottedTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::SpottedTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SpottedTarget");
		
		ABaseSwarmChar_BP_C_SpottedTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateBoidSM
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UStaticMeshComponent* ABaseSwarmChar_BP_C::CreateBoidSM(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateBoidSM");
		
		ABaseSwarmChar_BP_C_CreateBoidSM_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UpdateDeadBoids
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::UpdateDeadBoids(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UpdateDeadBoids");
		
		ABaseSwarmChar_BP_C_UpdateDeadBoids_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPSetCharacterMeshesMaterialScalarParamValue
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::BPSetCharacterMeshesMaterialScalarParamValue(const class FName& ParamName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPSetCharacterMeshesMaterialScalarParamValue");
		
		ABaseSwarmChar_BP_C_BPSetCharacterMeshesMaterialScalarParamValue_Params params {};
		params.ParamName = ParamName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetMaterialScalarParameter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        SM                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::SetMaterialScalarParameter(class UStaticMeshComponent* SM, const class FName& Parameter, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetMaterialScalarParameter");
		
		ABaseSwarmChar_BP_C_SetMaterialScalarParameter_Params params {};
		params.SM = SM;
		params.Parameter = Parameter;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StaticMeshComp                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::KillBoid(class UStaticMeshComponent* StaticMeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boid");
		
		ABaseSwarmChar_BP_C_KillBoid_Params params {};
		params.StaticMeshComp = StaticMeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnRefreshColorization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABaseSwarmChar_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnRefreshColorization");
		
		ABaseSwarmChar_BP_C_BPOnRefreshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Attack Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StopAttacking                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::AttackTarget(bool* StopAttacking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Attack Target");
		
		ABaseSwarmChar_BP_C_AttackTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StopAttacking != nullptr)
			*StopAttacking = params.StopAttacking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.GetDestroyNonCharacterTargetDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::GetDestroyNonCharacterTargetDuration(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.GetDestroyNonCharacterTargetDuration");
		
		ABaseSwarmChar_BP_C_GetDestroyNonCharacterTargetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.DestroyTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::DestroyTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.DestroyTarget");
		
		ABaseSwarmChar_BP_C_DestroyTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetFlockBehavior
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::SetFlockBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetFlockBehavior");
		
		ABaseSwarmChar_BP_C_SetFlockBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnRep_FlockShape
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::OnRep_FlockShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnRep_FlockShape");
		
		ABaseSwarmChar_BP_C_OnRep_FlockShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Get Damage Type Adjuster
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::GetDamageTypeAdjuster(class UClass* Type, float* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Get Damage Type Adjuster");
		
		ABaseSwarmChar_BP_C_GetDamageTypeAdjuster_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boids Based On Health
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::KillBoidsBasedOnHealth(float DamageIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boids Based On Health");
		
		ABaseSwarmChar_BP_C_KillBoidsBasedOnHealth_Params params {};
		params.DamageIn = DamageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnTargetChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::OnTargetChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnTargetChanged");
		
		ABaseSwarmChar_BP_C_OnTargetChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Can Damage Victim in Radius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanDamage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::CanDamageVictiminRadius(class AActor* Victim, bool* CanDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Can Damage Victim in Radius");
		
		ABaseSwarmChar_BP_C_CanDamageVictiminRadius_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDamage != nullptr)
			*CanDamage = params.CanDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateFlock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::CreateFlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateFlock");
		
		ABaseSwarmChar_BP_C_CreateFlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.TickFlock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::TickFlock(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.TickFlock");
		
		ABaseSwarmChar_BP_C_TickFlock_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ArrayContainsParentDamageType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              DamageTypes                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UClass*                                      DamageType                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::ArrayContainsParentDamageType(TArray<class UClass*>* DamageTypes, class UClass** DamageType, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ArrayContainsParentDamageType");
		
		ABaseSwarmChar_BP_C_ArrayContainsParentDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageTypes != nullptr)
			*DamageTypes = params.DamageTypes;
		if (DamageType != nullptr)
			*DamageType = params.DamageType;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ABaseSwarmChar_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPAdjustDamage");
		
		ABaseSwarmChar_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victim in Radius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDidDoDamage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::DamageVictiminRadius(class AActor* Victim, bool* bDidDoDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victim in Radius");
		
		ABaseSwarmChar_BP_C_DamageVictiminRadius_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDidDoDamage != nullptr)
			*bDidDoDamage = params.bDidDoDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victims In Radius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::DamageVictimsInRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victims In Radius");
		
		ABaseSwarmChar_BP_C_DamageVictimsInRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABaseSwarmChar_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPCanCryo");
		
		ABaseSwarmChar_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnLethalDamage
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventDeath                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::BPOnLethalDamage(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnLethalDamage");
		
		ABaseSwarmChar_BP_C_BPOnLethalDamage_Params params {};
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
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABaseSwarmChar_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BlueprintAdjustOutputDamage");
		
		ABaseSwarmChar_BP_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UserConstructionScript");
		
		ABaseSwarmChar_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveBeginPlay");
		
		ABaseSwarmChar_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.MultiOnLethalDamage
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::MultiOnLethalDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.MultiOnLethalDamage");
		
		ABaseSwarmChar_BP_C_MultiOnLethalDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_SpottedTargetEvent
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::Server_SpottedTargetEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_SpottedTargetEvent");
		
		ABaseSwarmChar_BP_C_Server_SpottedTargetEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_SpottedTargetEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::Multicast_SpottedTargetEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_SpottedTargetEvent");
		
		ABaseSwarmChar_BP_C_Multicast_SpottedTargetEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_StartAttackingTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::Server_StartAttackingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_StartAttackingTarget");
		
		ABaseSwarmChar_BP_C_Server_StartAttackingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_StartAttackingTarget
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::Multicast_StartAttackingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_StartAttackingTarget");
		
		ABaseSwarmChar_BP_C_Multicast_StartAttackingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_FinishedAttackingTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::Server_FinishedAttackingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_FinishedAttackingTarget");
		
		ABaseSwarmChar_BP_C_Server_FinishedAttackingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_FinishedAttackingTarget
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseSwarmChar_BP_C::Multicast_FinishedAttackingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_FinishedAttackingTarget");
		
		ABaseSwarmChar_BP_C_Multicast_FinishedAttackingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multi_KillBoidsBasedOnHealth
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::Multi_KillBoidsBasedOnHealth(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multi_KillBoidsBasedOnHealth");
		
		ABaseSwarmChar_BP_C_Multi_KillBoidsBasedOnHealth_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ExecuteUbergraph_BaseSwarmChar_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseSwarmChar_BP_C::ExecuteUbergraph_BaseSwarmChar_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ExecuteUbergraph_BaseSwarmChar_BP");
		
		ABaseSwarmChar_BP_C_ExecuteUbergraph_BaseSwarmChar_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseSwarmChar_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseSwarmChar_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseSwarmChar_BP.BaseSwarmChar_BP_C");
		return ptr;
	}

}


