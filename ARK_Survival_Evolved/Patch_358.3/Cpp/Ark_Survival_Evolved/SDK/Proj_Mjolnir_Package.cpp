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
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.TimedExpandingAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::TimedExpandingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.TimedExpandingAudio");
		
		AProj_Mjolnir_C_TimedExpandingAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.MulticastSpawnHitEmitter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          SpawnTransform                                             (Parm, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::MulticastSpawnHitEmitter(const struct UObject_FTransform& SpawnTransform, class APawn* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.MulticastSpawnHitEmitter");
		
		AProj_Mjolnir_C_MulticastSpawnHitEmitter_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.HasLosFromPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     FromPosition                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            ToActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasLOS                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::HasLosFromPosition(const struct FVector& FromPosition, class APrimalCharacter* ToActor, bool* HasLOS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.HasLosFromPosition");
		
		AProj_Mjolnir_C_HasLosFromPosition_Params params {};
		params.FromPosition = FromPosition;
		params.ToActor = ToActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasLOS != nullptr)
			*HasLOS = params.HasLOS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.BP_IgnoreProjectileImpact
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHit                                                  (Parm)
	 */
	bool AProj_Mjolnir_C::BP_IgnoreProjectileImpact(const struct FHitResult& ImpactHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.BP_IgnoreProjectileImpact");
		
		AProj_Mjolnir_C_BP_IgnoreProjectileImpact_Params params {};
		params.ImpactHit = ImpactHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.CheckForHit
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (Parm)
	 */
	void AProj_Mjolnir_C::CheckForHit(const struct FHitResult& HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.CheckForHit");
		
		AProj_Mjolnir_C_CheckForHit_Params params {};
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.GetLosOffsetCheckPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     CheckPOS                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::GetLosOffsetCheckPosition(struct FVector* CheckPOS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.GetLosOffsetCheckPosition");
		
		AProj_Mjolnir_C_GetLosOffsetCheckPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckPOS != nullptr)
			*CheckPOS = params.CheckPOS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.SetColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::SetColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.SetColors");
		
		AProj_Mjolnir_C_SetColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.ClientSetLightningPulse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPulsing                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::ClientSetLightningPulse(bool IsPulsing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ClientSetLightningPulse");
		
		AProj_Mjolnir_C_ClientSetLightningPulse_Params params {};
		params.IsPulsing = IsPulsing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.TickLightningPulse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::TickLightningPulse(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.TickLightningPulse");
		
		AProj_Mjolnir_C_TickLightningPulse_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.DoLightningPulse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::DoLightningPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.DoLightningPulse");
		
		AProj_Mjolnir_C_DoLightningPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.GetSquaredDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              SqDistance                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::GetSquaredDistance(const struct FVector& A, const struct FVector& B, float* SqDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.GetSquaredDistance");
		
		AProj_Mjolnir_C_GetSquaredDistance_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SqDistance != nullptr)
			*SqDistance = params.SqDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.PickedUp
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByCharacter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::PickedUp(class AShooterCharacter* ByCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.PickedUp");
		
		AProj_Mjolnir_C_PickedUp_Params params {};
		params.ByCharacter = ByCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.PickUpCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::PickUpCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.PickUpCheck");
		
		AProj_Mjolnir_C_PickUpCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.Explode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProj_Mjolnir_C::Explode(struct FHitResult* Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.Explode");
		
		AProj_Mjolnir_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impact != nullptr)
			*Impact = params.Impact;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.OnImpact
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bFromReplication                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::OnImpact(struct FHitResult* HitResult, bool bFromReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnImpact");
		
		AProj_Mjolnir_C_OnImpact_Params params {};
		params.bFromReplication = bFromReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.ReturnToOwner
	 * 		Flags  -> (NetReliable, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::ReturnToOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ReturnToOwner");
		
		AProj_Mjolnir_C_ReturnToOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveBeginPlay");
		
		AProj_Mjolnir_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.Init_Projectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterWeapon*                              ForWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 ForControllingBuff                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::Init_Projectile(class AShooterCharacter* forCharacter, class AShooterWeapon* ForWeapon, class APrimalBuff* ForControllingBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.Init_Projectile");
		
		AProj_Mjolnir_C_Init_Projectile_Params params {};
		params.forCharacter = forCharacter;
		params.ForWeapon = ForWeapon;
		params.ForControllingBuff = ForControllingBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveTick");
		
		AProj_Mjolnir_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.UserConstructionScript");
		
		AProj_Mjolnir_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void AProj_Mjolnir_C::BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature");
		
		AProj_Mjolnir_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepResult != nullptr)
			*SweepResult = params.SweepResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.ExecuteUbergraph_Proj_Mjolnir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::ExecuteUbergraph_Proj_Mjolnir(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ExecuteUbergraph_Proj_Mjolnir");
		
		AProj_Mjolnir_C_ExecuteUbergraph_Proj_Mjolnir_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.OnHitForEmitter__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          HitTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::OnHitForEmitter__DelegateSignature(const struct UObject_FTransform& HitTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnHitForEmitter__DelegateSignature");
		
		AProj_Mjolnir_C_OnHitForEmitter__DelegateSignature_Params params {};
		params.HitTransform = HitTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.OnRequestSyncProjectile__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::OnRequestSyncProjectile__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnRequestSyncProjectile__DelegateSignature");
		
		AProj_Mjolnir_C_OnRequestSyncProjectile__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.OnShieldReflected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::OnShieldReflected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnShieldReflected__DelegateSignature");
		
		AProj_Mjolnir_C_OnShieldReflected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.OnStartReturnToPlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::OnStartReturnToPlayer__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnStartReturnToPlayer__DelegateSignature");
		
		AProj_Mjolnir_C_OnStartReturnToPlayer__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.OnPulseEnded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::OnPulseEnded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnPulseEnded__DelegateSignature");
		
		AProj_Mjolnir_C_OnPulseEnded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.OnClientMjolnirSpawned__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AProj_Mjolnir_C*                             NewMjolnir                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Mjolnir_C::OnClientMjolnirSpawned__DelegateSignature(class AProj_Mjolnir_C* NewMjolnir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnClientMjolnirSpawned__DelegateSignature");
		
		AProj_Mjolnir_C_OnClientMjolnirSpawned__DelegateSignature_Params params {};
		params.NewMjolnir = NewMjolnir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_Mjolnir.Proj_Mjolnir_C.OnReturnedToPlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Mjolnir_C::OnReturnedToPlayer__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnReturnedToPlayer__DelegateSignature");
		
		AProj_Mjolnir_C_OnReturnedToPlayer__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Mjolnir_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Mjolnir_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Mjolnir.Proj_Mjolnir_C");
		return ptr;
	}

}


