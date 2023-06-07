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
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_TamedLeaderOfWildPack_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BuffAdjustDamage");
		
		ABuff_TamedLeaderOfWildPack_C_BuffAdjustDamage_Params params {};
		params.Damage = Damage;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.TheDamgeType = TheDamgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_TamedLeaderOfWildPack_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPServerHandleNetExecCommand");
		
		ABuff_TamedLeaderOfWildPack_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.IsFollower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               characterIsFollower                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::IsFollower(class APrimalDinoCharacter* DinoCharacter, bool* characterIsFollower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.IsFollower");
		
		ABuff_TamedLeaderOfWildPack_C_IsFollower_Params params {};
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (characterIsFollower != nullptr)
			*characterIsFollower = params.characterIsFollower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OrderFollowersAttack Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      characterToAttack                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canOverrideTarget                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               showArrowEffect                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::OrderFollowersAttackTarget(class AActor* characterToAttack, class APrimalCharacter* FromCharacter, bool canOverrideTarget, bool showArrowEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OrderFollowersAttack Target");
		
		ABuff_TamedLeaderOfWildPack_C_OrderFollowersAttackTarget_Params params {};
		params.characterToAttack = characterToAttack;
		params.FromCharacter = FromCharacter;
		params.canOverrideTarget = canOverrideTarget;
		params.showArrowEffect = showArrowEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TamedLeaderOfWildPack_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveDestroyed");
		
		ABuff_TamedLeaderOfWildPack_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnBuffDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TamedLeaderOfWildPack_C::OnBuffDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnBuffDeactivated");
		
		ABuff_TamedLeaderOfWildPack_C_OnBuffDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPDeactivated");
		
		ABuff_TamedLeaderOfWildPack_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnAddedFollower
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        newFollower                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::OnAddedFollower(class APrimalDinoCharacter* newFollower, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnAddedFollower");
		
		ABuff_TamedLeaderOfWildPack_C_OnAddedFollower_Params params {};
		params.newFollower = newFollower;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.InitializeBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              classesCanFollow                                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            maxNumFollowers                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::InitializeBuff(TArray<class UClass*>* classesCanFollow, int32_t maxNumFollowers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.InitializeBuff");
		
		ABuff_TamedLeaderOfWildPack_C_InitializeBuff_Params params {};
		params.maxNumFollowers = maxNumFollowers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (classesCanFollow != nullptr)
			*classesCanFollow = params.classesCanFollow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TryAdd Follower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        newFollower                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               followerAdded                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::TryAddFollower(class APrimalDinoCharacter* newFollower, bool* followerAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TryAdd Follower");
		
		ABuff_TamedLeaderOfWildPack_C_TryAddFollower_Params params {};
		params.newFollower = newFollower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (followerAdded != nullptr)
			*followerAdded = params.followerAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.PreventActorTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ByActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TamedLeaderOfWildPack_C::PreventActorTargeting(class AActor* ByActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.PreventActorTargeting");
		
		ABuff_TamedLeaderOfWildPack_C_PreventActorTargeting_Params params {};
		params.ByActor = ByActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TamedLeaderOfWildPack_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.UserConstructionScript");
		
		ABuff_TamedLeaderOfWildPack_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        follower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::LinkDamage(class APrimalDinoCharacter* follower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamage");
		
		ABuff_TamedLeaderOfWildPack_C_LinkDamage_Params params {};
		params.follower = follower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnTakeAnyDamage_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::OnTakeAnyDamage_Event(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnTakeAnyDamage_Event");
		
		ABuff_TamedLeaderOfWildPack_C_OnTakeAnyDamage_Event_Params params {};
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
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        follower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::SpawnParticlesForFollowers_Multicast(class APrimalDinoCharacter* follower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers_Multicast");
		
		ABuff_TamedLeaderOfWildPack_C_SpawnParticlesForFollowers_Multicast_Params params {};
		params.follower = follower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        follower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::SpawnParticlesForFollowers(class APrimalDinoCharacter* follower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers");
		
		ABuff_TamedLeaderOfWildPack_C_SpawnParticlesForFollowers_Params params {};
		params.follower = follower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnInitialParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            numParticlesAlreadySpawned                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::SpawnInitialParticles(int32_t numParticlesAlreadySpawned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnInitialParticles");
		
		ABuff_TamedLeaderOfWildPack_C_SpawnInitialParticles_Params params {};
		params.numParticlesAlreadySpawned = numParticlesAlreadySpawned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TamedLeaderOfWildPack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveBeginPlay");
		
		ABuff_TamedLeaderOfWildPack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamageTaken
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::LinkDamageTaken(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamageTaken");
		
		ABuff_TamedLeaderOfWildPack_C_LinkDamageTaken_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TakePointDamageSignature__DelegateSignature_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         FHitComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ShotFromDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::TakePointDamageSignature__DelegateSignature_Event(float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TakePointDamageSignature__DelegateSignature_Event");
		
		ABuff_TamedLeaderOfWildPack_C_TakePointDamageSignature__DelegateSignature_Event_Params params {};
		params.Damage = Damage;
		params.InstigatedBy = InstigatedBy;
		params.HitLocation = HitLocation;
		params.FHitComponent = FHitComponent;
		params.BoneName = BoneName;
		params.ShotFromDirection = ShotFromDirection;
		params.DamageType = DamageType;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ExecuteUbergraph_Buff_TamedLeaderOfWildPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TamedLeaderOfWildPack_C::ExecuteUbergraph_Buff_TamedLeaderOfWildPack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ExecuteUbergraph_Buff_TamedLeaderOfWildPack");
		
		ABuff_TamedLeaderOfWildPack_C_ExecuteUbergraph_Buff_TamedLeaderOfWildPack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TamedLeaderOfWildPack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TamedLeaderOfWildPack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C");
		return ptr;
	}

}


