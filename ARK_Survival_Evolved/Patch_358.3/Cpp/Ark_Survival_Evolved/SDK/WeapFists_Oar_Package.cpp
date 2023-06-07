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
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.SendOarInputsToServer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFists_Oar_C::SendOarInputsToServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.SendOarInputsToServer");
		
		AWeapFists_Oar_C_SendOarInputsToServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.HandleViewModeChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFists_Oar_C::HandleViewModeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.HandleViewModeChange");
		
		AWeapFists_Oar_C_HandleViewModeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.InterpToSocket
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFists_Oar_C::InterpToSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InterpToSocket");
		
		AWeapFists_Oar_C_InterpToSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.OnChangedViewMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFirstPerson                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::OnChangedViewMode(bool bIsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.OnChangedViewMode");
		
		AWeapFists_Oar_C_OnChangedViewMode_Params params {};
		params.bIsFirstPerson = bIsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.PlayPaddleAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FWeaponAnim                                 AnimToPlay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::PlayPaddleAnim(const struct FWeaponAnim& AnimToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.PlayPaddleAnim");
		
		AWeapFists_Oar_C_PlayPaddleAnim_Params params {};
		params.AnimToPlay = AnimToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideFPVMasterPoseComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class USkeletalMeshComponent* AWeapFists_Oar_C::BPOverrideFPVMasterPoseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideFPVMasterPoseComponent");
		
		AWeapFists_Oar_C_BPOverrideFPVMasterPoseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFists_Oar_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ReceiveDestroyed");
		
		AWeapFists_Oar_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.HandlePaddleAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFists_Oar_C::HandlePaddleAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.HandlePaddleAnimation");
		
		AWeapFists_Oar_C_HandlePaddleAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.GetCurrentPaddleAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FWeaponAnim                                 AnimToPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundAnim                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECardinal_Directions_Enum                          Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::GetCurrentPaddleAnimation(struct FWeaponAnim* AnimToPlay, bool* bFoundAnim, ECardinal_Directions_Enum* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.GetCurrentPaddleAnimation");
		
		AWeapFists_Oar_C_GetCurrentPaddleAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimToPlay != nullptr)
			*AnimToPlay = params.AnimToPlay;
		if (bFoundAnim != nullptr)
			*bFoundAnim = params.bFoundAnim;
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.GetStandingAnimation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OutBlendInTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutBlendOutTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimSequence* AWeapFists_Oar_C::GetStandingAnimation(float* OutBlendInTime, float* OutBlendOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.GetStandingAnimation");
		
		AWeapFists_Oar_C_GetStandingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBlendInTime != nullptr)
			*OutBlendInTime = params.OutBlendInTime;
		if (OutBlendOutTime != nullptr)
			*OutBlendOutTime = params.OutBlendOutTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.BPAnimNotifyCustomEvent");
		
		AWeapFists_Oar_C_BPAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideRootRotationOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    InRootRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AWeapFists_Oar_C::BPOverrideRootRotationOffset(const struct FRotator& InRootRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideRootRotationOffset");
		
		AWeapFists_Oar_C_BPOverrideRootRotationOffset_Params params {};
		params.InRootRotation = InRootRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.BPHandleMeleeAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFists_Oar_C::BPHandleMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.BPHandleMeleeAttack");
		
		AWeapFists_Oar_C_BPHandleMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFists_Oar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.UserConstructionScript");
		
		AWeapFists_Oar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_245
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapFists_Oar_C::InpActEvt_AltFire_K2Node_InputActionEvent_245()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_245");
		
		AWeapFists_Oar_C_InpActEvt_AltFire_K2Node_InputActionEvent_245_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_244
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapFists_Oar_C::InpActEvt_AltFire_K2Node_InputActionEvent_244()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_244");
		
		AWeapFists_Oar_C_InpActEvt_AltFire_K2Node_InputActionEvent_244_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFists_Oar_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ReceiveBeginPlay");
		
		AWeapFists_Oar_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272");
		
		AWeapFists_Oar_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153");
		
		AWeapFists_Oar_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ReceiveTick");
		
		AWeapFists_Oar_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.Server_ReceiveOarInputs
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCanoePassengerClientInputAxes              SavedInputs                                                (Parm)
	 */
	void AWeapFists_Oar_C::Server_ReceiveOarInputs(const struct FCanoePassengerClientInputAxes& SavedInputs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.Server_ReceiveOarInputs");
		
		AWeapFists_Oar_C_Server_ReceiveOarInputs_Params params {};
		params.SavedInputs = SavedInputs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.Server_SetCanoeWantsToBeach
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::Server_SetCanoeWantsToBeach(bool bNewVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.Server_SetCanoeWantsToBeach");
		
		AWeapFists_Oar_C_Server_SetCanoeWantsToBeach_Params params {};
		params.bNewVal = bNewVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.ReceiveOarInputAxes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Forward                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::ReceiveOarInputAxes(float Forward, float Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ReceiveOarInputAxes");
		
		AWeapFists_Oar_C_ReceiveOarInputAxes_Params params {};
		params.Forward = Forward;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFists_Oar.WeapFists_Oar_C.ExecuteUbergraph_WeapFists_Oar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFists_Oar_C::ExecuteUbergraph_WeapFists_Oar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ExecuteUbergraph_WeapFists_Oar");
		
		AWeapFists_Oar_C_ExecuteUbergraph_WeapFists_Oar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapFists_Oar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapFists_Oar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapFists_Oar.WeapFists_Oar_C");
		return ptr;
	}

}


