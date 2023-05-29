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
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPIsHidden
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADeathworm_Character_BP_C::BPIsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPIsHidden");
		
		ADeathworm_Character_BP_C_BPIsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ADeathworm_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPAdjustDamage");
		
		ADeathworm_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerNonDedicated");
		
		ADeathworm_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerServer");
		
		ADeathworm_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.Set Death Worm CollisionState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeathworm_Character_BP_C::SetDeathWormCollisionState(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.Set Death Worm CollisionState");
		
		ADeathworm_Character_BP_C_SetDeathWormCollisionState_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.UpdateDeathwormTrail
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::UpdateDeathwormTrail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.UpdateDeathwormTrail");
		
		ADeathworm_Character_BP_C_UpdateDeathwormTrail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.RefreshDeathwormState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::RefreshDeathwormState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.RefreshDeathwormState");
		
		ADeathworm_Character_BP_C_RefreshDeathwormState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.OnRep_isUnderground
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::OnRep_isUnderground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.OnRep_isUnderground");
		
		ADeathworm_Character_BP_C_OnRep_isUnderground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.CheckTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             LastTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TimeHasPassed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeathworm_Character_BP_C::CheckTime(double LastTime, float Duration, bool* TimeHasPassed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.CheckTime");
		
		ADeathworm_Character_BP_C_CheckTime_Params params {};
		params.LastTime = LastTime;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeHasPassed != nullptr)
			*TimeHasPassed = params.TimeHasPassed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.Pop Up
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::PopUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.Pop Up");
		
		ADeathworm_Character_BP_C_PopUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.DiveIn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::DiveIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.DiveIn");
		
		ADeathworm_Character_BP_C_DiveIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeathworm_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BlueprintCanAttack");
		
		ADeathworm_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.UserConstructionScript");
		
		ADeathworm_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.ReceiveBeginPlay");
		
		ADeathworm_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.PlayDeathwormVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               orientToGround                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystem*                             ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OffsetFromRoot                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeathworm_Character_BP_C::PlayDeathwormVFX(bool orientToGround, class UParticleSystem* ParticleSystem, const struct FVector& OffsetFromRoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.PlayDeathwormVFX");
		
		ADeathworm_Character_BP_C_PlayDeathwormVFX_Params params {};
		params.orientToGround = orientToGround;
		params.ParticleSystem = ParticleSystem;
		params.OffsetFromRoot = OffsetFromRoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.EnableUndergroundMovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeathworm_Character_BP_C::EnableUndergroundMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.EnableUndergroundMovement");
		
		ADeathworm_Character_BP_C_EnableUndergroundMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deathworm_Character_BP.Deathworm_Character_BP_C.ExecuteUbergraph_Deathworm_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeathworm_Character_BP_C::ExecuteUbergraph_Deathworm_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.ExecuteUbergraph_Deathworm_Character_BP");
		
		ADeathworm_Character_BP_C_ExecuteUbergraph_Deathworm_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeathworm_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeathworm_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deathworm_Character_BP.Deathworm_Character_BP_C");
		return ptr;
	}

}


