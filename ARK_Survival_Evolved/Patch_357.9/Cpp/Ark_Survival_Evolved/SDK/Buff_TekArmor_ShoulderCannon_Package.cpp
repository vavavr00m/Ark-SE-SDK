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
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPDeactivated
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPDeactivated");
		
		ABuff_TekArmor_ShoulderCannon_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampFireTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          InTransform                                                (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct UObject_FTransform ABuff_TekArmor_ShoulderCannon_C::ClampFireTransform(struct UObject_FTransform* InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampFireTransform");
		
		ABuff_TekArmor_ShoulderCannon_C_ClampFireTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTransform != nullptr)
			*InTransform = params.InTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Overheated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::OnRep_Overheated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Overheated");
		
		ABuff_TekArmor_ShoulderCannon_C_OnRep_Overheated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Activated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::OnRep_Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Activated");
		
		ABuff_TekArmor_ShoulderCannon_C_OnRep_Activated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ModeIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UpdateSound(int32_t ModeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateSound");
		
		ABuff_TekArmor_ShoulderCannon_C_UpdateSound_Params params {};
		params.ModeIndex = ModeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsAllowedToFire
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::IsAllowedToFire(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsAllowedToFire");
		
		ABuff_TekArmor_ShoulderCannon_C_IsAllowedToFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UpdateTarget(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateTarget");
		
		ABuff_TekArmor_ShoulderCannon_C_UpdateTarget_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponHeat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UpdateWeaponHeat(float A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponHeat");
		
		ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponHeat_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampPitchByYaw
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_TekArmor_ShoulderCannon_C::ClampPitchByYaw(float Yaw, float Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampPitchByYaw");
		
		ABuff_TekArmor_ShoulderCannon_C_ClampPitchByYaw_Params params {};
		params.Yaw = Yaw;
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateAmmo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UpdateAmmo(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateAmmo");
		
		ABuff_TekArmor_ShoulderCannon_C_UpdateAmmo_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UseAlternateSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseAlt                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UseAlternateSocket(bool* UseAlt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UseAlternateSocket");
		
		ABuff_TekArmor_ShoulderCannon_C_UseAlternateSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UseAlt != nullptr)
			*UseAlt = params.UseAlt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.CanAimAtTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekArmor_ShoulderCannon_C::CanAimAtTarget(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.CanAimAtTarget");
		
		ABuff_TekArmor_ShoulderCannon_C_CanAimAtTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Fire Mode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UpdateFireMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Fire Mode");
		
		ABuff_TekArmor_ShoulderCannon_C_UpdateFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPAnimNotifyCustomEvent");
		
		ABuff_TekArmor_ShoulderCannon_C_BPAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.DrawBuffFloatingHUD");
		
		ABuff_TekArmor_ShoulderCannon_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Calculate Ready to Fire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::CalculateReadytoFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Calculate Ready to Fire");
		
		ABuff_TekArmor_ShoulderCannon_C_CalculateReadytoFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsValidTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekArmor_ShoulderCannon_C::IsValidTarget(class APrimalCharacter* TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsValidTarget");
		
		ABuff_TekArmor_ShoulderCannon_C_IsValidTarget_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.TryFire Weapon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          AimTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::TryFireWeapon(const struct UObject_FTransform& AimTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.TryFire Weapon");
		
		ABuff_TekArmor_ShoulderCannon_C_TryFireWeapon_Params params {};
		params.AimTransform = AimTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPClientDoMultiUse");
		
		ABuff_TekArmor_ShoulderCannon_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekArmor_ShoulderCannon_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPTryMultiUse");
		
		ABuff_TekArmor_ShoulderCannon_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_TekArmor_ShoulderCannon_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetMultiUseEntries");
		
		ABuff_TekArmor_ShoulderCannon_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetHUDElements");
		
		ABuff_TekArmor_ShoulderCannon_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ApplyAccuracy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct UObject_FTransform                          InTransform                                                (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct UObject_FTransform ABuff_TekArmor_ShoulderCannon_C::ApplyAccuracy(struct UObject_FTransform* InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ApplyAccuracy");
		
		ABuff_TekArmor_ShoulderCannon_C_ApplyAccuracy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTransform != nullptr)
			*InTransform = params.InTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.SpawnProjectile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          InTransform                                                (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::SpawnProjectile(struct UObject_FTransform* InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.SpawnProjectile");
		
		ABuff_TekArmor_ShoulderCannon_C_SpawnProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTransform != nullptr)
			*InTransform = params.InTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsElectricalStormActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _return_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::IsElectricalStormActive(bool* _return_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsElectricalStormActive");
		
		ABuff_TekArmor_ShoulderCannon_C_IsElectricalStormActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_return_ != nullptr)
			*_return_ = params._return_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Firing
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UpdateWeaponFiring(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Firing");
		
		ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponFiring_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPSetupForInstigator");
		
		ABuff_TekArmor_ShoulderCannon_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.GetTargetPos
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ABuff_TekArmor_ShoulderCannon_C::GetTargetPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.GetTargetPos");
		
		ABuff_TekArmor_ShoulderCannon_C_GetTargetPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Position
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UpdateWeaponPosition(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Position");
		
		ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponPosition_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponAim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UpdateWeaponAim(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponAim");
		
		ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponAim_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickServer");
		
		ABuff_TekArmor_ShoulderCannon_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickClient");
		
		ABuff_TekArmor_ShoulderCannon_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.PreventBlockingWithShield
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_TekArmor_ShoulderCannon_C::PreventBlockingWithShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.PreventBlockingWithShield");
		
		ABuff_TekArmor_ShoulderCannon_C_PreventBlockingWithShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UserConstructionScript");
		
		ABuff_TekArmor_ShoulderCannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSpawnProjectile
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          SpawnTransform                                             (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              NewChargeValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::ClientSpawnProjectile(const struct UObject_FTransform& SpawnTransform, float NewChargeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSpawnProjectile");
		
		ABuff_TekArmor_ShoulderCannon_C_ClientSpawnProjectile_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.NewChargeValue = NewChargeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerTryFire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          SpawnTranform                                              (Parm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::ServerTryFire(const struct UObject_FTransform& SpawnTranform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerTryFire");
		
		ABuff_TekArmor_ShoulderCannon_C_ServerTryFire_Params params {};
		params.SpawnTranform = SpawnTranform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetAnimIdle
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Idle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::ServerSetAnimIdle(bool Idle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetAnimIdle");
		
		ABuff_TekArmor_ShoulderCannon_C_ServerSetAnimIdle_Params params {};
		params.Idle = Idle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSetFireMode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewFireMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::ClientSetFireMode(int32_t NewFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSetFireMode");
		
		ABuff_TekArmor_ShoulderCannon_C_ClientSetFireMode_Params params {};
		params.NewFireMode = NewFireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::ServerSetTarget(const struct FVector& TargetPos, class APrimalCharacter* TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetTarget");
		
		ABuff_TekArmor_ShoulderCannon_C_ServerSetTarget_Params params {};
		params.TargetPos = TargetPos;
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetLockedTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::ServerSetLockedTarget(class APrimalCharacter* TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetLockedTarget");
		
		ABuff_TekArmor_ShoulderCannon_C_ServerSetLockedTarget_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ExecuteUbergraph_Buff_TekArmor_ShoulderCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_ShoulderCannon_C::ExecuteUbergraph_Buff_TekArmor_ShoulderCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ExecuteUbergraph_Buff_TekArmor_ShoulderCannon");
		
		ABuff_TekArmor_ShoulderCannon_C_ExecuteUbergraph_Buff_TekArmor_ShoulderCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekArmor_ShoulderCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekArmor_ShoulderCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C");
		return ptr;
	}

}


