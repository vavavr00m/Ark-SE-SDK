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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ADesmodus_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetHUDElements");
		
		ADesmodus_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOnLifeSteal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::TurnOnLifeSteal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOnLifeSteal");
		
		ADesmodus_Character_BP_C_TurnOnLifeSteal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetRidingMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ADesmodus_Character_BP_C::BPGetRidingMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetRidingMultiUseEntries");
		
		ADesmodus_Character_BP_C_BPGetRidingMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ADesmodus_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAdjustDamage");
		
		ADesmodus_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetTargetingDesirability
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ADesmodus_Character_BP_C::BPGetTargetingDesirability(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetTargetingDesirability");
		
		ADesmodus_Character_BP_C_BPGetTargetingDesirability_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ADesmodus_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetGravityZScale");
		
		ADesmodus_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.Multicast Lifesteal Sound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isStealing                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFromInit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::MulticastLifestealSound(bool isStealing, bool IsFromInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.Multicast Lifesteal Sound");
		
		ADesmodus_Character_BP_C_MulticastLifestealSound_Params params {};
		params.isStealing = isStealing;
		params.IsFromInit = IsFromInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoPingSound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             CharacterComponent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::MulticastEchoPingSound(class USceneComponent* CharacterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoPingSound");
		
		ADesmodus_Character_BP_C_MulticastEchoPingSound_Params params {};
		params.CharacterComponent = CharacterComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoBuffSound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::MulticastEchoBuffSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoBuffSound");
		
		ADesmodus_Character_BP_C_MulticastEchoBuffSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastInvisibleSound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isInvisible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::MulticastInvisibleSound(bool isInvisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastInvisibleSound");
		
		ADesmodus_Character_BP_C_MulticastInvisibleSound_Params params {};
		params.isInvisible = isInvisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPUnstasis");
		
		ADesmodus_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterruptLatching
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::InterruptLatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterruptLatching");
		
		ADesmodus_Character_BP_C_InterruptLatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetLatchValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LatchedDownwards                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LatchingSurfaceNormal                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LatchingLoc                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InitialSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::SetLatchValues(bool LatchedDownwards, const struct FVector& LatchingSurfaceNormal, const struct FVector& LatchingLoc, bool InitialSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetLatchValues");
		
		ADesmodus_Character_BP_C_SetLatchValues_Params params {};
		params.LatchedDownwards = LatchedDownwards;
		params.LatchingSurfaceNormal = LatchingSurfaceNormal;
		params.LatchingLoc = LatchingLoc;
		params.InitialSpawn = InitialSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADesmodus_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOnStartJump");
		
		ADesmodus_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanAttack");
		
		ADesmodus_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShouldTryLatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LandOnFailureToLatch                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::ShouldTryLatch(bool* Ret, bool* LandOnFailureToLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShouldTryLatch");
		
		ADesmodus_Character_BP_C_ShouldTryLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
		if (LandOnFailureToLatch != nullptr)
			*LandOnFailureToLatch = params.LandOnFailureToLatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAllowCarryCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            checkCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter* checkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAllowCarryCharacter");
		
		ADesmodus_Character_BP_C_BPAllowCarryCharacter_Params params {};
		params.checkCharacter = checkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.UpdateHUD
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::UpdateHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.UpdateHUD");
		
		ADesmodus_Character_BP_C_UpdateHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanScreech
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::CanScreech(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanScreech");
		
		ADesmodus_Character_BP_C_CanScreech_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanRiderAttack");
		
		ADesmodus_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ADesmodus_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyFOV");
		
		ADesmodus_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPCanLand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanLand                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::BPCanLand(bool CanLand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPCanLand");
		
		ADesmodus_Character_BP_C_BPCanLand_Params params {};
		params.CanLand = CanLand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CurrentCameraMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DesiredCameraLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraRotation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DesiredFOV                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraRotation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraFOV                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraFOV                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideCameraViewTarget");
		
		ADesmodus_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
		params.CurrentCameraMode = CurrentCameraMode;
		params.DesiredCameraLocation = DesiredCameraLocation;
		params.DesiredCameraRotation = DesiredCameraRotation;
		params.DesiredFOV = DesiredFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverrideCameraLocation != nullptr)
			*bOverrideCameraLocation = params.bOverrideCameraLocation;
		if (CameraLocation != nullptr)
			*CameraLocation = params.CameraLocation;
		if (bOverrideCameraRotation != nullptr)
			*bOverrideCameraRotation = params.bOverrideCameraRotation;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
		if (bOverrideCameraFOV != nullptr)
			*bOverrideCameraFOV = params.bOverrideCameraFOV;
		if (CameraFOV != nullptr)
			*CameraFOV = params.CameraFOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ADesmodus_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetCrosshairAlpha");
		
		ADesmodus_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPLimitPlayerRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InViewRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ADesmodus_Character_BP_C::BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPLimitPlayerRotation");
		
		ADesmodus_Character_BP_C_BPLimitPlayerRotation_Params params {};
		params.viewingCharacter = viewingCharacter;
		params.InViewRotation = InViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeAdult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::BPBecomeAdult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeAdult");
		
		ADesmodus_Character_BP_C_BPBecomeAdult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeBaby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::BPBecomeBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeBaby");
		
		ADesmodus_Character_BP_C_BPBecomeBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPIsValidUnStasisCaster
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADesmodus_Character_BP_C::BPIsValidUnStasisCaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPIsValidUnStasisCaster");
		
		ADesmodus_Character_BP_C_BPIsValidUnStasisCaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.LatchToCeilingOnSpawn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::LatchToCeilingOnSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.LatchToCeilingOnSpawn");
		
		ADesmodus_Character_BP_C_LatchToCeilingOnSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_OnTamedOrderReceived
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_OnTamedOrderReceived");
		
		ADesmodus_Character_BP_C_BP_OnTamedOrderReceived_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideMoveToOrder
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MoveToLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           OrderingPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::BPOverrideMoveToOrder(const struct FVector& MoveToLocation, class AShooterCharacter* OrderingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideMoveToOrder");
		
		ADesmodus_Character_BP_C_BPOverrideMoveToOrder_Params params {};
		params.MoveToLocation = MoveToLocation;
		params.OrderingPlayer = OrderingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleUseButtonPress");
		
		ADesmodus_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideStencilAllianceForTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetDino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EStencilAlliance ADesmodus_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter* TargetDino, class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideStencilAllianceForTarget");
		
		ADesmodus_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params {};
		params.TargetDino = TargetDino;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bInCave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::OnRep_bInCave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bInCave");
		
		ADesmodus_Character_BP_C_OnRep_bInCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckInCave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::CheckInCave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckInCave");
		
		ADesmodus_Character_BP_C_CheckInCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.StopInvisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::StopInvisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.StopInvisibility");
		
		ADesmodus_Character_BP_C_StopInvisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.DecreaseInvisibilityStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::DecreaseInvisibilityStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.DecreaseInvisibilityStamina");
		
		ADesmodus_Character_BP_C_DecreaseInvisibilityStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ADesmodus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ADesmodus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryLatch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BackwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::TryLatch(const struct FVector& Offset, bool BackwardsLatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryLatch");
		
		ADesmodus_Character_BP_C_TryLatch_Params params {};
		params.Offset = Offset;
		params.BackwardsLatching = BackwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsDiving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::OnRep_bIsDiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsDiving");
		
		ADesmodus_Character_BP_C_OnRep_bIsDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveHit
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
	void ADesmodus_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveHit");
		
		ADesmodus_Character_BP_C_ReceiveHit_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ADesmodus_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ADesmodus_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveAnyDamage");
		
		ADesmodus_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidSetCarriedCharacter");
		
		ADesmodus_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidClearCarriedCharacter");
		
		ADesmodus_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnKillGrabbedDino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        KilledDino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::OnKillGrabbedDino(class APrimalDinoCharacter* KilledDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnKillGrabbedDino");
		
		ADesmodus_Character_BP_C_OnKillGrabbedDino_Params params {};
		params.KilledDino = KilledDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bNightVisionOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::OnRep_bNightVisionOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bNightVisionOn");
		
		ADesmodus_Character_BP_C_OnRep_bNightVisionOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPTryMultiUse");
		
		ADesmodus_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShowMultiUse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::ShowMultiUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShowMultiUse");
		
		ADesmodus_Character_BP_C_ShowMultiUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ADesmodus_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetMultiUseEntries");
		
		ADesmodus_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ToggleNightVision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::ToggleNightVision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ToggleNightVision");
		
		ADesmodus_Character_BP_C_ToggleNightVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickDiving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::TickDiving(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickDiving");
		
		ADesmodus_Character_BP_C_TickDiving_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADesmodus_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPShouldForceFlee");
		
		ADesmodus_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.RemoveNightVisionForRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::RemoveNightVisionForRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.RemoveNightVisionForRider");
		
		ADesmodus_Character_BP_C_RemoveNightVisionForRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.Add Night VisionForRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::AddNightVisionForRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.Add Night VisionForRider");
		
		ADesmodus_Character_BP_C_AddNightVisionForRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.DestroyHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::DestroyHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.DestroyHUD");
		
		ADesmodus_Character_BP_C_DestroyHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetupHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::SetupHUD(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetupHUD");
		
		ADesmodus_Character_BP_C_SetupHUD_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifySetRider");
		
		ADesmodus_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddTamingAffinityFromLifeSteal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::AddTamingAffinityFromLifeSteal(class AShooterCharacter* ForPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddTamingAffinityFromLifeSteal");
		
		ADesmodus_Character_BP_C_AddTamingAffinityFromLifeSteal_Params params {};
		params.ForPlayer = ForPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyAimOffsetTargetLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimTargetLocation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ADesmodus_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyAimOffsetTargetLocation");
		
		ADesmodus_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimTargetLocation != nullptr)
			*AimTargetLocation = params.AimTargetLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickTameGrabAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::TickTameGrabAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickTameGrabAttack");
		
		ADesmodus_Character_BP_C_TickTameGrabAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInNight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::OnRep_bIsInNight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInNight");
		
		ADesmodus_Character_BP_C_OnRep_bIsInNight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickCanLatchClient
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanLatch                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::TickCanLatchClient(bool* CanLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickCanLatchClient");
		
		ADesmodus_Character_BP_C_TickCanLatchClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanLatch != nullptr)
			*CanLatch = params.CanLatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryUseBloodPack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::TryUseBloodPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryUseBloodPack");
		
		ADesmodus_Character_BP_C_TryUseBloodPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.SendToServerTryToggleInvisible
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::SendToServerTryToggleInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.SendToServerTryToggleInvisible");
		
		ADesmodus_Character_BP_C_SendToServerTryToggleInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesmodus_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ADesmodus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanStartLifeSteal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::CanStartLifeSteal(bool* canStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanStartLifeSteal");
		
		ADesmodus_Character_BP_C_CanStartLifeSteal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canStart != nullptr)
			*canStart = params.canStart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOffLifeSteal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::TurnOffLifeSteal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOffLifeSteal");
		
		ADesmodus_Character_BP_C_TurnOffLifeSteal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsLifeStealing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::OnRep_bIsLifeStealing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsLifeStealing");
		
		ADesmodus_Character_BP_C_OnRep_bIsLifeStealing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleLifeSteal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::TryToggleLifeSteal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleLifeSteal");
		
		ADesmodus_Character_BP_C_TryToggleLifeSteal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDoAttack");
		
		ADesmodus_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInvisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::OnRep_bIsInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInvisible");
		
		ADesmodus_Character_BP_C_OnRep_bIsInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleInvisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::TryToggleInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleInvisible");
		
		ADesmodus_Character_BP_C_TryToggleInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ADesmodus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPServerHandleNetExecCommand");
		
		ADesmodus_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ADesmodus_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterceptInputEvent");
		
		ADesmodus_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.RidingTick");
		
		ADesmodus_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifyClearRider");
		
		ADesmodus_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckTrackingActors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::CheckTrackingActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckTrackingActors");
		
		ADesmodus_Character_BP_C_CheckTrackingActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddActorToTrackingList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::AddActorToTrackingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddActorToTrackingList");
		
		ADesmodus_Character_BP_C_AddActorToTrackingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.Get All Revealed TargetForCurrentScream
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              RevealedCharacter                                          (Parm, OutParm, ZeroConstructor)
	 */
	void ADesmodus_Character_BP_C::GetAllRevealedTargetForCurrentScream(TArray<class AActor*>* RevealedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.Get All Revealed TargetForCurrentScream");
		
		ADesmodus_Character_BP_C_GetAllRevealedTargetForCurrentScream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RevealedCharacter != nullptr)
			*RevealedCharacter = params.RevealedCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ADesmodus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.GetLifeStealAmountFromCurrentAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::GetLifeStealAmountFromCurrentAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.GetLifeStealAmountFromCurrentAttack");
		
		ADesmodus_Character_BP_C_GetLifeStealAmountFromCurrentAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAnimNotifyCustomState_End
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotifyState*                            AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::BPAnimNotifyCustomState_End(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotifyState* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAnimNotifyCustomState_End");
		
		ADesmodus_Character_BP_C_BPAnimNotifyCustomState_End_Params params {};
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
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.LineTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BackwardLatching                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitSomthing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::LineTrace(class UMeshComponent* Mesh, const class FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* HitSomthing, struct FVector* Location, struct FVector* Normal, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.LineTrace");
		
		ADesmodus_Character_BP_C_LineTrace_Params params {};
		params.Mesh = Mesh;
		params.SocketName = SocketName;
		params.Actor = Actor;
		params.Offset = Offset;
		params.BackwardLatching = BackwardLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitSomthing != nullptr)
			*HitSomthing = params.HitSomthing;
		if (Location != nullptr)
			*Location = params.Location;
		if (Normal != nullptr)
			*Normal = params.Normal;
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.UserConstructionScript");
		
		ADesmodus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_288
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_288()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_288");
		
		ADesmodus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_288_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_287
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_287()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_287");
		
		ADesmodus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_287_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_286
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_286()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_286");
		
		ADesmodus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_286_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_285
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_285()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_285");
		
		ADesmodus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_285_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.LocalFaceLatchingObject
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::LocalFaceLatchingObject(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.LocalFaceLatchingObject");
		
		ADesmodus_Character_BP_C_LocalFaceLatchingObject_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveTick");
		
		ADesmodus_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveBeginPlay");
		
		ADesmodus_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartDaytime_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::OnStartDaytime_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartDaytime_Event");
		
		ADesmodus_Character_BP_C_OnStartDaytime_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartNighttime_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::OnStartNighttime_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartNighttime_Event");
		
		ADesmodus_Character_BP_C_OnStartNighttime_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClearHUDReference
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::ClearHUDReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClearHUDReference");
		
		ADesmodus_Character_BP_C_ClearHUDReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ResetTamingVars
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::ResetTamingVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ResetTamingVars");
		
		ADesmodus_Character_BP_C_ResetTamingVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.Client_SpawnSuccessBloddpackVFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::Client_SpawnSuccessBloddpackVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.Client_SpawnSuccessBloddpackVFX");
		
		ADesmodus_Character_BP_C_Client_SpawnSuccessBloddpackVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.BindDayCycleManager
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::BindDayCycleManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BindDayCycleManager");
		
		ADesmodus_Character_BP_C_BindDayCycleManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.MoveDuringUnlatching
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::MoveDuringUnlatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.MoveDuringUnlatching");
		
		ADesmodus_Character_BP_C_MoveDuringUnlatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClientNotEnoughStamina
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::ClientNotEnoughStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClientNotEnoughStamina");
		
		ADesmodus_Character_BP_C_ClientNotEnoughStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryLatch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LatchedBackwards                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LatchingSurfaceNormal                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LatchingLoc                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::ServerTryLatch(bool LatchedBackwards, const struct FVector& LatchingSurfaceNormal, const struct FVector& LatchingLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryLatch");
		
		ADesmodus_Character_BP_C_ServerTryLatch_Params params {};
		params.LatchedBackwards = LatchedBackwards;
		params.LatchingSurfaceNormal = LatchingSurfaceNormal;
		params.LatchingLoc = LatchingLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.CrouchTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::CrouchTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CrouchTick");
		
		ADesmodus_Character_BP_C_CrouchTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.JumpTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::JumpTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.JumpTick");
		
		ADesmodus_Character_BP_C_JumpTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryToggleLifeSteal
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADesmodus_Character_BP_C::ServerTryToggleLifeSteal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryToggleLifeSteal");
		
		ADesmodus_Character_BP_C_ServerTryToggleLifeSteal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Desmodus_Character_BP.Desmodus_Character_BP_C.ExecuteUbergraph_Desmodus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesmodus_Character_BP_C::ExecuteUbergraph_Desmodus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ExecuteUbergraph_Desmodus_Character_BP");
		
		ADesmodus_Character_BP_C_ExecuteUbergraph_Desmodus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADesmodus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADesmodus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desmodus_Character_BP.Desmodus_Character_BP_C");
		return ptr;
	}

}


