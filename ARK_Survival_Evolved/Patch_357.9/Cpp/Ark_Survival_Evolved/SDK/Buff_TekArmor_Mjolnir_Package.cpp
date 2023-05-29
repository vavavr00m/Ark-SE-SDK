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
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPDeactivated");
		
		ABuff_TekArmor_Mjolnir_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ReceiveTick");
		
		ABuff_TekArmor_Mjolnir_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_CleanupMjolnir
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::MC_CleanupMjolnir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_CleanupMjolnir");
		
		ABuff_TekArmor_Mjolnir_C_MC_CleanupMjolnir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ThrowingMonitorTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::ThrowingMonitorTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ThrowingMonitorTick");
		
		ABuff_TekArmor_Mjolnir_C_ThrowingMonitorTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckIsThrowBlocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     ForThrowLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBlocked                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::CheckIsThrowBlocked(const struct FVector& ForThrowLocation, bool* IsBlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckIsThrowBlocked");
		
		ABuff_TekArmor_Mjolnir_C_CheckIsThrowBlocked_Params params {};
		params.ForThrowLocation = ForThrowLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBlocked != nullptr)
			*IsBlocked = params.IsBlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestFireProjectileMulticast
	 * 		Flags  -> (Net, NetReliable, Public, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ShootDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::ServerRequestFireProjectileMulticast(const struct FVector& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestFireProjectileMulticast");
		
		ABuff_TekArmor_Mjolnir_C_ServerRequestFireProjectileMulticast_Params params {};
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MCHitForEmitter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          HitTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::MCHitForEmitter(const struct UObject_FTransform& HitTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MCHitForEmitter");
		
		ABuff_TekArmor_Mjolnir_C_MCHitForEmitter_Params params {};
		params.HitTransform = HitTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AuthorityProjectileRequestsSync
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::AuthorityProjectileRequestsSync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AuthorityProjectileRequestsSync");
		
		ABuff_TekArmor_Mjolnir_C_AuthorityProjectileRequestsSync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_SyncProjectile
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsStuck                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::MC_SyncProjectile(bool bIsStuck, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_SyncProjectile");
		
		ABuff_TekArmor_Mjolnir_C_MC_SyncProjectile_Params params {};
		params.bIsStuck = bIsStuck;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetCastedArmorPieceRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::SetCastedArmorPieceRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetCastedArmorPieceRef");
		
		ABuff_TekArmor_Mjolnir_C_SetCastedArmorPieceRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckShouldHideWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::CheckShouldHideWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckShouldHideWeapon");
		
		ABuff_TekArmor_Mjolnir_C_CheckShouldHideWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AllowTekPunch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::AllowTekPunch(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AllowTekPunch");
		
		ABuff_TekArmor_Mjolnir_C_AllowTekPunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.canThrow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsForPostCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekArmor_Mjolnir_C::canThrow(bool IsForPostCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.canThrow");
		
		ABuff_TekArmor_Mjolnir_C_canThrow_Params params {};
		params.IsForPostCheck = IsForPostCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_TekArmor_Mjolnir_C::CanAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanAttack");
		
		ABuff_TekArmor_Mjolnir_C_CanAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoLightningFan
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_TekArmor_Mjolnir_C::CanDoLightningFan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoLightningFan");
		
		ABuff_TekArmor_Mjolnir_C_CanDoLightningFan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.HandleBuffAnimNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AnimNotifyName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      AnimNotifyStringData                                       (Parm, ZeroConstructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::HandleBuffAnimNotify(const class FName& AnimNotifyName, const class FString& AnimNotifyStringData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.HandleBuffAnimNotify");
		
		ABuff_TekArmor_Mjolnir_C_HandleBuffAnimNotify_Params params {};
		params.AnimNotifyName = AnimNotifyName;
		params.AnimNotifyStringData = AnimNotifyStringData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnPulseEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::OnPulseEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnPulseEnd");
		
		ABuff_TekArmor_Mjolnir_C_OnPulseEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastSetPulse
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldPulse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::MulticastSetPulse(bool ShouldPulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastSetPulse");
		
		ABuff_TekArmor_Mjolnir_C_MulticastSetPulse_Params params {};
		params.ShouldPulse = ShouldPulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoPulseAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CanPulse                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::CanDoPulseAttack(bool* CanPulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoPulseAttack");
		
		ABuff_TekArmor_Mjolnir_C_CanDoPulseAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPulse != nullptr)
			*CanPulse = params.CanPulse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartPulseAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::TryStartPulseAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartPulseAttack");
		
		ABuff_TekArmor_Mjolnir_C_TryStartPulseAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.IsDoingPulseAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsDoingAttack                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::IsDoingPulseAttack(bool* IsDoingAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.IsDoingPulseAttack");
		
		ABuff_TekArmor_Mjolnir_C_IsDoingPulseAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDoingAttack != nullptr)
			*IsDoingAttack = params.IsDoingAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ClientMjolnirSpawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AProj_Mjolnir_C*                             NewMjolnirProjectile                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::ClientMjolnirSpawned(class AProj_Mjolnir_C* NewMjolnirProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ClientMjolnirSpawned");
		
		ABuff_TekArmor_Mjolnir_C_ClientMjolnirSpawned_Params params {};
		params.NewMjolnirProjectile = NewMjolnirProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastCallbackMjolnir
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::MulticastCallbackMjolnir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastCallbackMjolnir");
		
		ABuff_TekArmor_Mjolnir_C_MulticastCallbackMjolnir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestMjolnirCallback
	 * 		Flags  -> (Net, NetReliable, Public, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::ServerRequestMjolnirCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestMjolnirCallback");
		
		ABuff_TekArmor_Mjolnir_C_ServerRequestMjolnirCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnMjolnirReturned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::OnMjolnirReturned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnMjolnirReturned");
		
		ABuff_TekArmor_Mjolnir_C_OnMjolnirReturned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetLaunchLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LaunchLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::GetLaunchLocation(struct FVector* LaunchLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetLaunchLocation");
		
		ABuff_TekArmor_Mjolnir_C_GetLaunchLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaunchLoc != nullptr)
			*LaunchLoc = params.LaunchLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetAdjustedAim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::GetAdjustedAim(struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetAdjustedAim");
		
		ABuff_TekArmor_Mjolnir_C_GetAdjustedAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestThrowMjolnir
	 * 		Flags  -> (Net, NetReliable, Public, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::ServerRequestThrowMjolnir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestThrowMjolnir");
		
		ABuff_TekArmor_Mjolnir_C_ServerRequestThrowMjolnir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.FireProjectileMulticast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ShootDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::FireProjectileMulticast(const struct FVector& Origin, const struct FVector& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.FireProjectileMulticast");
		
		ABuff_TekArmor_Mjolnir_C_FireProjectileMulticast_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SkillThrowMjolnir
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::SkillThrowMjolnir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SkillThrowMjolnir");
		
		ABuff_TekArmor_Mjolnir_C_SkillThrowMjolnir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStopLightning
	 * 		Flags  -> (Net, NetReliable, Public, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::TryStopLightning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStopLightning");
		
		ABuff_TekArmor_Mjolnir_C_TryStopLightning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UpdateMaterialAndParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::UpdateMaterialAndParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UpdateMaterialAndParticles");
		
		ABuff_TekArmor_Mjolnir_C_UpdateMaterialAndParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::RemoveAllArcsServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsServer");
		
		ABuff_TekArmor_Mjolnir_C_RemoveAllArcsServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyTargetArcMulticast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::DestroyTargetArcMulticast(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyTargetArcMulticast");
		
		ABuff_TekArmor_Mjolnir_C_DestroyTargetArcMulticast_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnNewActorAffectedMulticast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      actorAffected                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::OnNewActorAffectedMulticast(class AActor* actorAffected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnNewActorAffectedMulticast");
		
		ABuff_TekArmor_Mjolnir_C_OnNewActorAffectedMulticast_Params params {};
		params.actorAffected = actorAffected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryAddNewArc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::TryAddNewArc(class AActor* forActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryAddNewArc");
		
		ABuff_TekArmor_Mjolnir_C_TryAddNewArc_Params params {};
		params.forActor = forActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveArcTargetServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ArcTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::RemoveArcTargetServer(class AActor* ArcTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveArcTargetServer");
		
		ABuff_TekArmor_Mjolnir_C_RemoveArcTargetServer_Params params {};
		params.ArcTarget = ArcTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ShouldRemoveArcForTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               shouldRemove                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::ShouldRemoveArcForTarget(class APrimalCharacter* forCharacter, bool* shouldRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ShouldRemoveArcForTarget");
		
		ABuff_TekArmor_Mjolnir_C_ShouldRemoveArcForTarget_Params params {};
		params.forCharacter = forCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldRemove != nullptr)
			*shouldRemove = params.shouldRemove;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcForTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::DestroyArcForTarget(class APrimalCharacter* forCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcForTarget");
		
		ABuff_TekArmor_Mjolnir_C_DestroyArcForTarget_Params params {};
		params.forCharacter = forCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ConnectArcToTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSTR_ChargeBeamInfo                         ArcInfo                                                    (Parm)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::ConnectArcToTarget(const struct FSTR_ChargeBeamInfo& ArcInfo, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ConnectArcToTarget");
		
		ABuff_TekArmor_Mjolnir_C_ConnectArcToTarget_Params params {};
		params.ArcInfo = ArcInfo;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcVisuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSTR_ChargeBeamInfo                         ArcInfo                                                    (Parm)
	 */
	void ABuff_TekArmor_Mjolnir_C::DestroyArcVisuals(const struct FSTR_ChargeBeamInfo& ArcInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcVisuals");
		
		ABuff_TekArmor_Mjolnir_C_DestroyArcVisuals_Params params {};
		params.ArcInfo = ArcInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsClient
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::RemoveAllArcsClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsClient");
		
		ABuff_TekArmor_Mjolnir_C_RemoveAllArcsClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetArcIntensity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    Arc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::SetArcIntensity(class UParticleSystemComponent* Arc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetArcIntensity");
		
		ABuff_TekArmor_Mjolnir_C_SetArcIntensity_Params params {};
		params.Arc = Arc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetEndPoints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    Arc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndPoint1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     endPoint2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     endPoint3                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::SetEndPoints(class UParticleSystemComponent* Arc, const struct FVector& EndPoint1, const struct FVector& endPoint2, const struct FVector& endPoint3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetEndPoints");
		
		ABuff_TekArmor_Mjolnir_C_SetEndPoints_Params params {};
		params.Arc = Arc;
		params.EndPoint1 = EndPoint1;
		params.endPoint2 = endPoint2;
		params.endPoint3 = endPoint3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CreateNewArc
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ToActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::CreateNewArc(class AActor* ToActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CreateNewArc");
		
		ABuff_TekArmor_Mjolnir_C_CreateNewArc_Params params {};
		params.ToActor = ToActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::OnStopLightning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightning");
		
		ABuff_TekArmor_Mjolnir_C_OnStopLightning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightningMulticast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::OnStopLightningMulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightningMulticast");
		
		ABuff_TekArmor_Mjolnir_C_OnStopLightningMulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::LightningTickServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickServer");
		
		ABuff_TekArmor_Mjolnir_C_LightningTickServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickClient
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::LightningTickClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickClient");
		
		ABuff_TekArmor_Mjolnir_C_LightningTickClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::LightningTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTick");
		
		ABuff_TekArmor_Mjolnir_C_LightningTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::OnStartLightning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightning");
		
		ABuff_TekArmor_Mjolnir_C_OnStartLightning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightningMulticast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::OnStartLightningMulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightningMulticast");
		
		ABuff_TekArmor_Mjolnir_C_OnStartLightningMulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartLightning
	 * 		Flags  -> (Net, NetReliable, Public, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::TryStartLightning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartLightning");
		
		ABuff_TekArmor_Mjolnir_C_TryStartLightning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPSetupForInstigator");
		
		ABuff_TekArmor_Mjolnir_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UserConstructionScript");
		
		ABuff_TekArmor_Mjolnir_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_AltFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::Proxy_InputAction_AltFire(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_AltFire");
		
		ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_AltFire_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger_Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::Proxy_Gamepad_Right_Trigger_Hold(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger_Hold");
		
		ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Right_Trigger_Hold_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::Proxy_Gamepad_Right_Trigger(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger");
		
		ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Right_Trigger_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting_Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::Proxy_InputAction_Targeting_Hold(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting_Hold");
		
		ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_Targeting_Hold_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger_Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::Proxy_Gamepad_Left_Trigger_Hold(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger_Hold");
		
		ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Left_Trigger_Hold_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::Proxy_InputAction_Targeting(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting");
		
		ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_Targeting_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::Proxy_Gamepad_Left_Trigger(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger");
		
		ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Left_Trigger_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayCameraShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::PlayCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayCameraShake");
		
		ABuff_TekArmor_Mjolnir_C_PlayCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_PlayThrow
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::MC_PlayThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_PlayThrow");
		
		ABuff_TekArmor_Mjolnir_C_MC_PlayThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayHoldForReturn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Mjolnir_C::PlayHoldForReturn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayHoldForReturn");
		
		ABuff_TekArmor_Mjolnir_C_PlayHoldForReturn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ExecuteUbergraph_Buff_TekArmor_Mjolnir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Mjolnir_C::ExecuteUbergraph_Buff_TekArmor_Mjolnir(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ExecuteUbergraph_Buff_TekArmor_Mjolnir");
		
		ABuff_TekArmor_Mjolnir_C_ExecuteUbergraph_Buff_TekArmor_Mjolnir_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekArmor_Mjolnir_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekArmor_Mjolnir_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C");
		return ptr;
	}

}


