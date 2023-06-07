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
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.BPHandleMeleeAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::BPHandleMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPHandleMeleeAttack");
		
		AWeapGlowStick_C_BPHandleMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPAnimNotifyCustomEvent");
		
		AWeapGlowStick_C_BPAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.BPLostController
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::BPLostController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPLostController");
		
		AWeapGlowStick_C_BPLostController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ReceiveTick");
		
		AWeapGlowStick_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.IsColorized
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                currColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::IsColorized(const struct FLinearColor& currColor, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.IsColorized");
		
		AWeapGlowStick_C_IsColorized_Params params {};
		params.currColor = currColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.ClampMinColorVals
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MinVal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                clampedColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::ClampMinColorVals(const struct FLinearColor& Color, float MinVal, struct FLinearColor* clampedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ClampMinColorVals");
		
		AWeapGlowStick_C_ClampMinColorVals_Params params {};
		params.Color = Color;
		params.MinVal = MinVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (clampedColor != nullptr)
			*clampedColor = params.clampedColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.BPAppliedPrimalItemToWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::BPAppliedPrimalItemToWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPAppliedPrimalItemToWeapon");
		
		AWeapGlowStick_C_BPAppliedPrimalItemToWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.PullOutNewGlowStick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::PullOutNewGlowStick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.PullOutNewGlowStick");
		
		AWeapGlowStick_C_PullOutNewGlowStick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapGlowStick_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPWeaponCanFire");
		
		AWeapGlowStick_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.InitGlowStick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::InitGlowStick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.InitGlowStick");
		
		AWeapGlowStick_C_InitGlowStick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.NetSetIsBroken
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIsBroken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::NetSetIsBroken(bool newIsBroken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.NetSetIsBroken");
		
		AWeapGlowStick_C_NetSetIsBroken_Params params {};
		params.newIsBroken = newIsBroken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.TurnOnGlowStick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::TurnOnGlowStick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.TurnOnGlowStick");
		
		AWeapGlowStick_C_TurnOnGlowStick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPStartEquippedNotify");
		
		AWeapGlowStick_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.BP_OnReloadNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::BP_OnReloadNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BP_OnReloadNotify");
		
		AWeapGlowStick_C_BP_OnReloadNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.PlayCameraShake
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::PlayCameraShake(float Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.PlayCameraShake");
		
		AWeapGlowStick_C_PlayCameraShake_Params params {};
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.OnRep_IsBroken
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::OnRep_IsBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.OnRep_IsBroken");
		
		AWeapGlowStick_C_OnRep_IsBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.Create Dynamic Material
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::CreateDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.Create Dynamic Material");
		
		AWeapGlowStick_C_CreateDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.TurnOffGlowStick
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::TurnOffGlowStick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.TurnOffGlowStick");
		
		AWeapGlowStick_C_TurnOffGlowStick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.SetMaterialEmissiveness
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::SetMaterialEmissiveness(class UMaterialInstanceDynamic* Material, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.SetMaterialEmissiveness");
		
		AWeapGlowStick_C_SetMaterialEmissiveness_Params params {};
		params.Material = Material;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.SetLightIntensityAndAttenuationRadius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPointLightComponent*                        Light                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::SetLightIntensityAndAttenuationRadius(class UPointLightComponent* Light, float Intensity, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.SetLightIntensityAndAttenuationRadius");
		
		AWeapGlowStick_C_SetLightIntensityAndAttenuationRadius_Params params {};
		params.Light = Light;
		params.Intensity = Intensity;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.UserConstructionScript");
		
		AWeapGlowStick_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.ProjectileFired
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::ProjectileFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ProjectileFired");
		
		AWeapGlowStick_C_ProjectileFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ReceiveBeginPlay");
		
		AWeapGlowStick_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.StartUnequipEvent");
		
		AWeapGlowStick_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.Multi_FakeReload
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::Multi_FakeReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.Multi_FakeReload");
		
		AWeapGlowStick_C_Multi_FakeReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.BPFireWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::BPFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPFireWeapon");
		
		AWeapGlowStick_C_BPFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.AfterProjectileFired_ROS
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::AfterProjectileFired_ROS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.AfterProjectileFired_ROS");
		
		AWeapGlowStick_C_AfterProjectileFired_ROS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.CrackGlowStickAfterDelay
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::CrackGlowStickAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.CrackGlowStickAfterDelay");
		
		AWeapGlowStick_C_CrackGlowStickAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.Multi_UnequipGlowStick
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::Multi_UnequipGlowStick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.Multi_UnequipGlowStick");
		
		AWeapGlowStick_C_Multi_UnequipGlowStick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.PlayTPVShakeAnimAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::PlayTPVShakeAnimAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.PlayTPVShakeAnimAfterDelay");
		
		AWeapGlowStick_C_PlayTPVShakeAnimAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.CrackGlowStick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::CrackGlowStick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.CrackGlowStick");
		
		AWeapGlowStick_C_CrackGlowStick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.OnMeleeAttack_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::OnMeleeAttack_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.OnMeleeAttack_Multicast");
		
		AWeapGlowStick_C_OnMeleeAttack_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.MultiFakeReloadAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::MultiFakeReloadAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.MultiFakeReloadAfterDelay");
		
		AWeapGlowStick_C_MultiFakeReloadAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.PreventUsingGlowstickForDuration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::PreventUsingGlowstickForDuration(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.PreventUsingGlowstickForDuration");
		
		AWeapGlowStick_C_PreventUsingGlowstickForDuration_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.Multi_BeginCrackingGlowstick
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_C::Multi_BeginCrackingGlowstick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.Multi_BeginCrackingGlowstick");
		
		AWeapGlowStick_C_Multi_BeginCrackingGlowstick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGlowStick.WeapGlowStick_C.ExecuteUbergraph_WeapGlowStick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGlowStick_C::ExecuteUbergraph_WeapGlowStick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ExecuteUbergraph_WeapGlowStick");
		
		AWeapGlowStick_C_ExecuteUbergraph_WeapGlowStick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapGlowStick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapGlowStick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapGlowStick.WeapGlowStick_C");
		return ptr;
	}

}


