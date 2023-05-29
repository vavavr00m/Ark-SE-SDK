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
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ReceiveDestroyed");
		
		AWeapTekClaws_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ActivateMaxPowerEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AtMaxPower                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::ActivateMaxPowerEffects(bool AtMaxPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ActivateMaxPowerEffects");
		
		AWeapTekClaws_C_ActivateMaxPowerEffects_Params params {};
		params.AtMaxPower = AtMaxPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.BPMeleeAttackStarted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::BPMeleeAttackStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPMeleeAttackStarted");
		
		AWeapTekClaws_C_BPMeleeAttackStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ClientStartBlocking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::ClientStartBlocking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ClientStartBlocking");
		
		AWeapTekClaws_C_ClientStartBlocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ClientStopBlocking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::ClientStopBlocking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ClientStopBlocking");
		
		AWeapTekClaws_C_ClientStopBlocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.StartSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::StartSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.StartSecondaryActionEvent");
		
		AWeapTekClaws_C_StartSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.StopSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::StopSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.StopSecondaryActionEvent");
		
		AWeapTekClaws_C_StopSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.OnAttachmentsAdded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::OnAttachmentsAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.OnAttachmentsAdded");
		
		AWeapTekClaws_C_OnAttachmentsAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ChooseParticleColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ColorID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                ParticleColor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::ChooseParticleColor(int32_t ColorID, struct FLinearColor* ParticleColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ChooseParticleColor");
		
		AWeapTekClaws_C_ChooseParticleColor_Params params {};
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticleColor != nullptr)
			*ParticleColor = params.ParticleColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.GetItemColors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<struct FLinearColor> AWeapTekClaws_C::GetItemColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.GetItemColors");
		
		AWeapTekClaws_C_GetItemColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ApplyParticleColors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        InputPin                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UParticleSystemComponent*                    InputPin2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::ApplyParticleColors(TArray<struct FLinearColor>* InputPin, class UParticleSystemComponent* InputPin2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ApplyParticleColors");
		
		AWeapTekClaws_C_ApplyParticleColors_Params params {};
		params.InputPin2 = InputPin2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputPin != nullptr)
			*InputPin = params.InputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.BPSpawnMeleeEffects
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Impact                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ShootDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::BPSpawnMeleeEffects(const struct FVector& Impact, const struct FVector& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPSpawnMeleeEffects");
		
		AWeapTekClaws_C_BPSpawnMeleeEffects_Params params {};
		params.Impact = Impact;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ReceiveTick");
		
		AWeapTekClaws_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPAnimNotifyCustomEvent");
		
		AWeapTekClaws_C_BPAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ShowBladeFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::ShowBladeFX(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ShowBladeFX");
		
		AWeapTekClaws_C_ShowBladeFX_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.OnPrimalItemEquipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::OnPrimalItemEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.OnPrimalItemEquipped");
		
		AWeapTekClaws_C_OnPrimalItemEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.BPGetSelectedMeleeAttackAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FWeaponAnim AWeapTekClaws_C::BPGetSelectedMeleeAttackAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPGetSelectedMeleeAttackAnim");
		
		AWeapTekClaws_C_BPGetSelectedMeleeAttackAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.BPWeaponDealDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ShootDir                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Impulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AWeapTekClaws_C::BPWeaponDealDamage(struct FHitResult* Impact, struct FVector* ShootDir, int32_t DamageAmount, class UClass* DamageType, float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPWeaponDealDamage");
		
		AWeapTekClaws_C_BPWeaponDealDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.StartUnequipEvent");
		
		AWeapTekClaws_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPStartEquippedNotify");
		
		AWeapTekClaws_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.BPShouldDealDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TestActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWeapTekClaws_C::BPShouldDealDamage(class AActor* TestActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPShouldDealDamage");
		
		AWeapTekClaws_C_BPShouldDealDamage_Params params {};
		params.TestActor = TestActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.UserConstructionScript");
		
		AWeapTekClaws_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ServerSetBlocking
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StartBlocking                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::ServerSetBlocking(bool StartBlocking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ServerSetBlocking");
		
		AWeapTekClaws_C_ServerSetBlocking_Params params {};
		params.StartBlocking = StartBlocking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapTekClaws.WeapTekClaws_C.ExecuteUbergraph_WeapTekClaws
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekClaws_C::ExecuteUbergraph_WeapTekClaws(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ExecuteUbergraph_WeapTekClaws");
		
		AWeapTekClaws_C_ExecuteUbergraph_WeapTekClaws_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTekClaws_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTekClaws_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekClaws.WeapTekClaws_C");
		return ptr;
	}

}


