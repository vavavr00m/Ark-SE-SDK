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
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Deactivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::RestrictDoubletapDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Deactivate");
		
		ABuff_TekStrider_Shield_C_RestrictDoubletapDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Activate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::RestrictDoubletapActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Activate");
		
		ABuff_TekStrider_Shield_C_RestrictDoubletapActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.is ai controlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::isaicontrolled(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.is ai controlled");
		
		ABuff_TekStrider_Shield_C_isaicontrolled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Toggle Active On Ai
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::ToggleActiveOnAi(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Toggle Active On Ai");
		
		ABuff_TekStrider_Shield_C_ToggleActiveOnAi_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BuffTickServer");
		
		ABuff_TekStrider_Shield_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekStrider_Shield_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPGetHUDElements");
		
		ABuff_TekStrider_Shield_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.can activate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::canactivate(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.can activate");
		
		ABuff_TekStrider_Shield_C_canactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Get Dynamic Mat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UMaterialInstanceDynamic* ABuff_TekStrider_Shield_C::GetDynamicMat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Get Dynamic Mat");
		
		ABuff_TekStrider_Shield_C_GetDynamicMat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceivePointDamage
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
	void ABuff_TekStrider_Shield_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceivePointDamage");
		
		ABuff_TekStrider_Shield_C_ReceivePointDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::deactivateshield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield");
		
		ABuff_TekStrider_Shield_C_deactivateshield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Trigger
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Trigger");
		
		ABuff_TekStrider_Shield_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveAnyDamage");
		
		ABuff_TekStrider_Shield_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPDeactivated");
		
		ABuff_TekStrider_Shield_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UpdateShieldedCharacters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::UpdateShieldedCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UpdateShieldedCharacters");
		
		ABuff_TekStrider_Shield_C_UpdateShieldedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPSetupForInstigator");
		
		ABuff_TekStrider_Shield_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UserConstructionScript");
		
		ABuff_TekStrider_Shield_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::forwardactivateshieldvfx__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__FinishedFunc");
		
		ABuff_TekStrider_Shield_C_forwardactivateshieldvfx__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::forwardactivateshieldvfx__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__UpdateFunc");
		
		ABuff_TekStrider_Shield_C_forwardactivateshieldvfx__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::reverseactivateshieldvfx__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__FinishedFunc");
		
		ABuff_TekStrider_Shield_C_reverseactivateshieldvfx__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::reverseactivateshieldvfx__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__UpdateFunc");
		
		ABuff_TekStrider_Shield_C_reverseactivateshieldvfx__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_ActivateShield
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              durability                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::Multicast_ActivateShield(float durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_ActivateShield");
		
		ABuff_TekStrider_Shield_C_Multicast_ActivateShield_Params params {};
		params.durability = durability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_DeactivateShield
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceDeactivate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::Multicast_DeactivateShield(bool ForceDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_DeactivateShield");
		
		ABuff_TekStrider_Shield_C_Multicast_DeactivateShield_Params params {};
		params.ForceDeactivate = ForceDeactivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Activate Shield VFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::ActivateShieldVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Activate Shield VFX");
		
		ABuff_TekStrider_Shield_C_ActivateShieldVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield vfx
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::deactivateshieldvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield vfx");
		
		ABuff_TekStrider_Shield_C_deactivateshieldvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Spawn Particle At Hit Point
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     hitnormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::SpawnParticleAtHitPoint(const struct FVector& Location, const struct FVector& hitnormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Spawn Particle At Hit Point");
		
		ABuff_TekStrider_Shield_C_SpawnParticleAtHitPoint_Params params {};
		params.Location = Location;
		params.hitnormal = hitnormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.adjust shield color
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              durability                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::adjustshieldcolor(float durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.adjust shield color");
		
		ABuff_TekStrider_Shield_C_adjustshieldcolor_Params params {};
		params.durability = durability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Shield_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveBeginPlay");
		
		ABuff_TekStrider_Shield_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ExecuteUbergraph_Buff_TekStrider_Shield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Shield_C::ExecuteUbergraph_Buff_TekStrider_Shield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ExecuteUbergraph_Buff_TekStrider_Shield");
		
		ABuff_TekStrider_Shield_C_ExecuteUbergraph_Buff_TekStrider_Shield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStrider_Shield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStrider_Shield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_Shield.Buff_TekStrider_Shield_C");
		return ptr;
	}

}


