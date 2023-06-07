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
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check intermittantly if player is controlling missile or not
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::checkintermittantlyifplayeriscontrollingmissileornot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check intermittantly if player is controlling missile or not");
		
		AWeapTekCruiseMissile_C_checkintermittantlyifplayeriscontrollingmissileornot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPPreventSwitchingWeapon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapTekCruiseMissile_C::BPPreventSwitchingWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPPreventSwitchingWeapon");
		
		AWeapTekCruiseMissile_C_BPPreventSwitchingWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Release Missile Possession And Break on unequip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::ReleaseMissilePossessionAndBreakonunequip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Release Missile Possession And Break on unequip");
		
		AWeapTekCruiseMissile_C_ReleaseMissilePossessionAndBreakonunequip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPRemainEquipped
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapTekCruiseMissile_C::BPRemainEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPRemainEquipped");
		
		AWeapTekCruiseMissile_C_BPRemainEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPCanEquip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByCharacter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWeapTekCruiseMissile_C::BPCanEquip(class AShooterCharacter* ByCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPCanEquip");
		
		AWeapTekCruiseMissile_C_BPCanEquip_Params params {};
		params.ByCharacter = ByCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.break item
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::breakitem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.break item");
		
		AWeapTekCruiseMissile_C_breakitem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveBeginPlay");
		
		AWeapTekCruiseMissile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapTekCruiseMissile_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPWeaponCanFire");
		
		AWeapTekCruiseMissile_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekCruiseMissile_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPAnimNotifyCustomEvent");
		
		AWeapTekCruiseMissile_C_BPAnimNotifyCustomEvent_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartUnequipEvent");
		
		AWeapTekCruiseMissile_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::StartSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartSecondaryActionEvent");
		
		AWeapTekCruiseMissile_C_StartSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekCruiseMissile_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveTick");
		
		AWeapTekCruiseMissile_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Despawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::MissileDespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Despawned");
		
		AWeapTekCruiseMissile_C_MissileDespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Launched
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      missile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekCruiseMissile_C::MissileLaunched(class AActor* missile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Launched");
		
		AWeapTekCruiseMissile_C_MissileLaunched_Params params {};
		params.missile = missile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPFiredWeapon");
		
		AWeapTekCruiseMissile_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.UserConstructionScript");
		
		AWeapTekCruiseMissile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__FinishedFunc");
		
		AWeapTekCruiseMissile_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__UpdateFunc");
		
		AWeapTekCruiseMissile_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Clear Description
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::ClearDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Clear Description");
		
		AWeapTekCruiseMissile_C_ClearDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Set rocket message
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::Setrocketmessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Set rocket message");
		
		AWeapTekCruiseMissile_C_Setrocketmessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Hide Projectile on Fire
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::HideProjectileonFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Hide Projectile on Fire");
		
		AWeapTekCruiseMissile_C_HideProjectileonFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron in
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::ironin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron in");
		
		AWeapTekCruiseMissile_C_ironin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron out
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::ironout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron out");
		
		AWeapTekCruiseMissile_C_ironout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.delay break and iron out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               delayforzoomout                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekCruiseMissile_C::delaybreakandironout(bool delayforzoomout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.delay break and iron out");
		
		AWeapTekCruiseMissile_C_delaybreakandironout_Params params {};
		params.delayforzoomout = delayforzoomout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check if launch succeeded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::checkiflaunchsucceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check if launch succeeded");
		
		AWeapTekCruiseMissile_C_checkiflaunchsucceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.multicast remove from base
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekCruiseMissile_C::multicastremovefrombase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.multicast remove from base");
		
		AWeapTekCruiseMissile_C_multicastremovefrombase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ExecuteUbergraph_WeapTekCruiseMissile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekCruiseMissile_C::ExecuteUbergraph_WeapTekCruiseMissile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ExecuteUbergraph_WeapTekCruiseMissile");
		
		AWeapTekCruiseMissile_C_ExecuteUbergraph_WeapTekCruiseMissile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTekCruiseMissile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTekCruiseMissile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekCruiseMissile.WeapTekCruiseMissile_C");
		return ptr;
	}

}


