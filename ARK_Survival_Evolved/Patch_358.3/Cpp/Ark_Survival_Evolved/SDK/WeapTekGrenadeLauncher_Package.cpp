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
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotDifference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::GetSlotDifference(int32_t A, int32_t B, int32_t* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotDifference");
		
		AWeapTekGrenadeLauncher_C_GetSlotDifference_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difference != nullptr)
			*Difference = params.Difference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetCurrentSlotAdvancement
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentSlot                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Remainder                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::GetCurrentSlotAdvancement(int32_t* CurrentSlot, float* Remainder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetCurrentSlotAdvancement");
		
		AWeapTekGrenadeLauncher_C_GetCurrentSlotAdvancement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentSlot != nullptr)
			*CurrentSlot = params.CurrentSlot;
		if (Remainder != nullptr)
			*Remainder = params.Remainder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedFullReload
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::FinishedFullReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedFullReload");
		
		AWeapTekGrenadeLauncher_C_FinishedFullReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.CanReloadLauncher
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanReload                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::CanReloadLauncher(bool* bCanReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.CanReloadLauncher");
		
		AWeapTekGrenadeLauncher_C_CanReloadLauncher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanReload != nullptr)
			*bCanReload = params.bCanReload;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideRootRotationOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    InRootRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AWeapTekGrenadeLauncher_C::BPOverrideRootRotationOffset(const struct FRotator& InRootRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideRootRotationOffset");
		
		AWeapTekGrenadeLauncher_C_BPOverrideRootRotationOffset_Params params {};
		params.InRootRotation = InRootRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPCanEquip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByCharacter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWeapTekGrenadeLauncher_C::BPCanEquip(class AShooterCharacter* ByCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPCanEquip");
		
		AWeapTekGrenadeLauncher_C_BPCanEquip_Params params {};
		params.ByCharacter = ByCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOnSpawnedProjectile
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterProjectile*                          Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::BPOnSpawnedProjectile(class AShooterProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOnSpawnedProjectile");
		
		AWeapTekGrenadeLauncher_C_BPOnSpawnedProjectile_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveDestroyed");
		
		AWeapTekGrenadeLauncher_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientInit
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::ClientInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientInit");
		
		AWeapTekGrenadeLauncher_C_ClientInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedReloadSequence
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::FinishedReloadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedReloadSequence");
		
		AWeapTekGrenadeLauncher_C_FinishedReloadSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyHeatLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::ModifyHeatLevel(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyHeatLevel");
		
		AWeapTekGrenadeLauncher_C_ModifyHeatLevel_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetReloadAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            FromSlot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FWeaponAnim                                 Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::GetReloadAnim(int32_t FromSlot, struct FWeaponAnim* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetReloadAnim");
		
		AWeapTekGrenadeLauncher_C_GetReloadAnim_Params params {};
		params.FromSlot = FromSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileArcVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::SetProjectileArcVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileArcVisibility");
		
		AWeapTekGrenadeLauncher_C_SetProjectileArcVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateProjectileArc
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::UpdateProjectileArc(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateProjectileArc");
		
		AWeapTekGrenadeLauncher_C_UpdateProjectileArc_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPGetTPVCameraOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector AWeapTekGrenadeLauncher_C::BPGetTPVCameraOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPGetTPVCameraOffset");
		
		AWeapTekGrenadeLauncher_C_BPGetTPVCameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideAimDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DesiredAimDirection                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector AWeapTekGrenadeLauncher_C::BPOverrideAimDirection(struct FVector* DesiredAimDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideAimDirection");
		
		AWeapTekGrenadeLauncher_C_BPOverrideAimDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredAimDirection != nullptr)
			*DesiredAimDirection = params.DesiredAimDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateSlotMeshes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::UpdateSlotMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateSlotMeshes");
		
		AWeapTekGrenadeLauncher_C_UpdateSlotMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncAmmoInClipValue
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::SyncAmmoInClipValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncAmmoInClipValue");
		
		AWeapTekGrenadeLauncher_C_SyncAmmoInClipValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveTick");
		
		AWeapTekGrenadeLauncher_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotInfo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               GotValidSlotData                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      AmmoType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastFiredNetworkTime                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AmmoLoaded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::GetSlotInfo(int32_t SlotIdx, bool* GotValidSlotData, class UClass** AmmoType, double* LastFiredNetworkTime, bool* AmmoLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotInfo");
		
		AWeapTekGrenadeLauncher_C_GetSlotInfo_Params params {};
		params.SlotIdx = SlotIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GotValidSlotData != nullptr)
			*GotValidSlotData = params.GotValidSlotData;
		if (AmmoType != nullptr)
			*AmmoType = params.AmmoType;
		if (LastFiredNetworkTime != nullptr)
			*LastFiredNetworkTime = params.LastFiredNetworkTime;
		if (AmmoLoaded != nullptr)
			*AmmoLoaded = params.AmmoLoaded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SaveAmmoToItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::SaveAmmoToItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SaveAmmoToItem");
		
		AWeapTekGrenadeLauncher_C_SaveAmmoToItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.LoadAmmoFromItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::LoadAmmoFromItem(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.LoadAmmoFromItem");
		
		AWeapTekGrenadeLauncher_C_LoadAmmoFromItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileSlotType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::SetProjectileSlotType(int32_t SlotIdx, class UClass* ItemType, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileSlotType");
		
		AWeapTekGrenadeLauncher_C_SetProjectileSlotType_Params params {};
		params.SlotIdx = SlotIdx;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetProjectileTypeFromItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ProjectileType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::GetProjectileTypeFromItem(class UClass* ItemType, bool* IsValid, class UClass** ProjectileType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetProjectileTypeFromItem");
		
		AWeapTekGrenadeLauncher_C_GetProjectileTypeFromItem_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (ProjectileType != nullptr)
			*ProjectileType = params.ProjectileType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::StartSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartSecondaryActionEvent");
		
		AWeapTekGrenadeLauncher_C_StartSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BP_OnReloadNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::BP_OnReloadNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BP_OnReloadNotify");
		
		AWeapTekGrenadeLauncher_C_BP_OnReloadNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyAmmoQuantityInInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AmmoType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AddAmmo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::ModifyAmmoQuantityInInventory(class UClass* AmmoType, int32_t Delta, bool AddAmmo, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyAmmoQuantityInInventory");
		
		AWeapTekGrenadeLauncher_C_ModifyAmmoQuantityInInventory_Params params {};
		params.AmmoType = AmmoType;
		params.Delta = Delta;
		params.AddAmmo = AddAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveBeginPlay");
		
		AWeapTekGrenadeLauncher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetAmmoCountOfType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AmmoType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AvailableAmmo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::GetAmmoCountOfType(class UClass* AmmoType, int32_t* AvailableAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetAmmoCountOfType");
		
		AWeapTekGrenadeLauncher_C_GetAmmoCountOfType_Params params {};
		params.AmmoType = AmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableAmmo != nullptr)
			*AvailableAmmo = params.AvailableAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetNextAvailableSlot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SlotIsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SlotIdx                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TimeToAdvance                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::GetNextAvailableSlot(bool* SlotIsValid, int32_t* SlotIdx, float* TimeToAdvance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetNextAvailableSlot");
		
		AWeapTekGrenadeLauncher_C_GetNextAvailableSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotIsValid != nullptr)
			*SlotIsValid = params.SlotIsValid;
		if (SlotIdx != nullptr)
			*SlotIdx = params.SlotIdx;
		if (TimeToAdvance != nullptr)
			*TimeToAdvance = params.TimeToAdvance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapTekGrenadeLauncher_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPWeaponCanFire");
		
		AWeapTekGrenadeLauncher_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReloadProjectiles
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumReloadedSlots                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::ReloadProjectiles(int32_t* NumReloadedSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReloadProjectiles");
		
		AWeapTekGrenadeLauncher_C_ReloadProjectiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumReloadedSlots != nullptr)
			*NumReloadedSlots = params.NumReloadedSlots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPFiredWeapon");
		
		AWeapTekGrenadeLauncher_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPSelectProjectileToFire
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ProjectileClassOverride                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundCue*                                   FireSoundOverride                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSpawnOnClient                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideMaxSpeed                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::BPSelectProjectileToFire(class UClass** ProjectileClassOverride, class USoundCue** FireSoundOverride, bool* bSpawnOnClient, float* OverrideMaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPSelectProjectileToFire");
		
		AWeapTekGrenadeLauncher_C_BPSelectProjectileToFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectileClassOverride != nullptr)
			*ProjectileClassOverride = params.ProjectileClassOverride;
		if (FireSoundOverride != nullptr)
			*FireSoundOverride = params.FireSoundOverride;
		if (bSpawnOnClient != nullptr)
			*bSpawnOnClient = params.bSpawnOnClient;
		if (OverrideMaxSpeed != nullptr)
			*OverrideMaxSpeed = params.OverrideMaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartUnequipEvent");
		
		AWeapTekGrenadeLauncher_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPStartEquippedNotify");
		
		AWeapTekGrenadeLauncher_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UserConstructionScript");
		
		AWeapTekGrenadeLauncher_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlots
	 * 		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTekGrenadeLauncherSlot>             UpdatedSlots                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AWeapTekGrenadeLauncher_C::ClientUpdateSlots(TArray<struct FTekGrenadeLauncherSlot>* UpdatedSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlots");
		
		AWeapTekGrenadeLauncher_C_ClientUpdateSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdatedSlots != nullptr)
			*UpdatedSlots = params.UpdatedSlots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncSlots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bJustFiredGrenade                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::SyncSlots(bool bJustFiredGrenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncSlots");
		
		AWeapTekGrenadeLauncher_C_SyncSlots_Params params {};
		params.bJustFiredGrenade = bJustFiredGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestSwitchAmmoType
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      NewAmmoType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::ServerRequestSwitchAmmoType(int32_t SlotIdx, class UClass* NewAmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestSwitchAmmoType");
		
		AWeapTekGrenadeLauncher_C_ServerRequestSwitchAmmoType_Params params {};
		params.SlotIdx = SlotIdx;
		params.NewAmmoType = NewAmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientPlayReloadAnim
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::ClientPlayReloadAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientPlayReloadAnim");
		
		AWeapTekGrenadeLauncher_C_ClientPlayReloadAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifySetArcDisplay
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowArcDisplay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::ServerNotifySetArcDisplay(bool ShowArcDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifySetArcDisplay");
		
		AWeapTekGrenadeLauncher_C_ServerNotifySetArcDisplay_Params params {};
		params.ShowArcDisplay = ShowArcDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ToggleArcDisplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::ToggleArcDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ToggleArcDisplay");
		
		AWeapTekGrenadeLauncher_C_ToggleArcDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestAdvanceSlot
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::ServerRequestAdvanceSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestAdvanceSlot");
		
		AWeapTekGrenadeLauncher_C_ServerRequestAdvanceSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlotMeshes
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::ClientUpdateSlotMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlotMeshes");
		
		AWeapTekGrenadeLauncher_C_ClientUpdateSlotMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifyReplicationReady
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekGrenadeLauncher_C::ServerNotifyReplicationReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifyReplicationReady");
		
		AWeapTekGrenadeLauncher_C_ServerNotifyReplicationReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UTickingHelperComponent*                     TickingComponent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature(class UTickingHelperComponent* TickingComponent, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature");
		
		AWeapTekGrenadeLauncher_C_BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature_Params params {};
		params.TickingComponent = TickingComponent;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestUnloadSlot
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::ServerRequestUnloadSlot(int32_t Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestUnloadSlot");
		
		AWeapTekGrenadeLauncher_C_ServerRequestUnloadSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ExecuteUbergraph_WeapTekGrenadeLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekGrenadeLauncher_C::ExecuteUbergraph_WeapTekGrenadeLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ExecuteUbergraph_WeapTekGrenadeLauncher");
		
		AWeapTekGrenadeLauncher_C_ExecuteUbergraph_WeapTekGrenadeLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTekGrenadeLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTekGrenadeLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C");
		return ptr;
	}

}


