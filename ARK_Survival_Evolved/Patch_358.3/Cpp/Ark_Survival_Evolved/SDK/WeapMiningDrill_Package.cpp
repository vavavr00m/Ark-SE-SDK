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
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMiningDrill_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.StartUnequipEvent");
		
		AWeapMiningDrill_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.HandleActivation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMiningDrill_C::HandleActivation(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.HandleActivation");
		
		AWeapMiningDrill_C_HandleActivation_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMiningDrill_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.ReceiveDestroyed");
		
		AWeapMiningDrill_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.CreateDynamicMats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMiningDrill_C::CreateDynamicMats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.CreateDynamicMats");
		
		AWeapMiningDrill_C_CreateDynamicMats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.BPSpawnHarvestEffects
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Impacts                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AWeapMiningDrill_C::BPSpawnHarvestEffects(TArray<struct FVector>* Impacts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPSpawnHarvestEffects");
		
		AWeapMiningDrill_C_BPSpawnHarvestEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impacts != nullptr)
			*Impacts = params.Impacts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.CalculateTargetPosition
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector AWeapMiningDrill_C::CalculateTargetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.CalculateTargetPosition");
		
		AWeapMiningDrill_C_CalculateTargetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMiningDrill_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPStartEquippedNotify");
		
		AWeapMiningDrill_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponDealDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ShootDir                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Impulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AWeapMiningDrill_C::BPWeaponDealDamage(struct FHitResult* Impact, struct FVector* ShootDir, int32_t DamageAmount, class UClass* DamageType, float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponDealDamage");
		
		AWeapMiningDrill_C_BPWeaponDealDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.DamageType = DamageType;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impact != nullptr)
			*Impact = params.Impact;
		if (ShootDir != nullptr)
			*ShootDir = params.ShootDir;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.BPPreFireEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ShootDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMiningDrill_C::BPPreFireEvent(const struct FVector& Origin, const struct FVector& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPPreFireEvent");
		
		AWeapMiningDrill_C_BPPreFireEvent_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapMiningDrill_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponCanFire");
		
		AWeapMiningDrill_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.OnRep_Overheated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMiningDrill_C::OnRep_Overheated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.OnRep_Overheated");
		
		AWeapMiningDrill_C_OnRep_Overheated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.UpdateWeaponHeat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMiningDrill_C::UpdateWeaponHeat(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.UpdateWeaponHeat");
		
		AWeapMiningDrill_C_UpdateWeaponHeat_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMiningDrill_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPFiredWeapon");
		
		AWeapMiningDrill_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMiningDrill_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.ReceiveTick");
		
		AWeapMiningDrill_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMiningDrill_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.UserConstructionScript");
		
		AWeapMiningDrill_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.SpawnImpact
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMiningDrill_C::SpawnImpact(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.SpawnImpact");
		
		AWeapMiningDrill_C_SpawnImpact_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.TurnOffIfRiding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMiningDrill_C::TurnOffIfRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.TurnOffIfRiding");
		
		AWeapMiningDrill_C_TurnOffIfRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMiningDrill.WeapMiningDrill_C.ExecuteUbergraph_WeapMiningDrill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMiningDrill_C::ExecuteUbergraph_WeapMiningDrill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.ExecuteUbergraph_WeapMiningDrill");
		
		AWeapMiningDrill_C_ExecuteUbergraph_WeapMiningDrill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapMiningDrill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapMiningDrill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapMiningDrill.WeapMiningDrill_C");
		return ptr;
	}

}


