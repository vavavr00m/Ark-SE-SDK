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
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetBuffDetails
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              BuffInfo                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void AWeapAdminBlinkRifle_C::GetBuffDetails(class APrimalCharacter* Character, TArray<class FString>* BuffInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetBuffDetails");
		
		AWeapAdminBlinkRifle_C_GetBuffDetails_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BuffInfo != nullptr)
			*BuffInfo = params.BuffInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetInspectText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              Desc                                                       (Parm, OutParm, ZeroConstructor)
	 */
	void AWeapAdminBlinkRifle_C::GetInspectText(class AActor* Actor, class UObject* Component, TArray<class FString>* Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetInspectText");
		
		AWeapAdminBlinkRifle_C_GetInspectText_Params params {};
		params.Actor = Actor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Desc != nullptr)
			*Desc = params.Desc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorDescriptiveName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Desc                                                       (Parm, OutParm, ZeroConstructor)
	 */
	void AWeapAdminBlinkRifle_C::GetActorDescriptiveName(class AActor* Actor, class FString* Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorDescriptiveName");
		
		AWeapAdminBlinkRifle_C_GetActorDescriptiveName_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Desc != nullptr)
			*Desc = params.Desc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorScreenLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   ScreenLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::GetActorScreenLocation(class AActor* TargetActor, struct FVector2D* ScreenLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorScreenLocation");
		
		AWeapAdminBlinkRifle_C_GetActorScreenLocation_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenLoc != nullptr)
			*ScreenLoc = params.ScreenLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.InspectTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm)
	 */
	bool AWeapAdminBlinkRifle_C::InspectTrace(const struct FVector2D& Start, float End, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.InspectTrace");
		
		AWeapAdminBlinkRifle_C_InspectTrace_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.HasAdminPermission
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAdmin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::HasAdminPermission(bool* IsAdmin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.HasAdminPermission");
		
		AWeapAdminBlinkRifle_C_HasAdminPermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAdmin != nullptr)
			*IsAdmin = params.IsAdmin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Destroy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::Tick_Destroy(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Destroy");
		
		AWeapAdminBlinkRifle_C_Tick_Destroy_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Inspect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::Tick_Inspect(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Inspect");
		
		AWeapAdminBlinkRifle_C_Tick_Inspect_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Blink
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::Tick_Blink(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Blink");
		
		AWeapAdminBlinkRifle_C_Tick_Blink_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapAdminBlinkRifle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveBeginPlay");
		
		AWeapAdminBlinkRifle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPOnStartTargeting
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepadLeft                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::BPOnStartTargeting(bool bFromGamepadLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPOnStartTargeting");
		
		AWeapAdminBlinkRifle_C_BPOnStartTargeting_Params params {};
		params.bFromGamepadLeft = bFromGamepadLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveTick");
		
		AWeapAdminBlinkRifle_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapAdminBlinkRifle_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPFiredWeapon");
		
		AWeapAdminBlinkRifle_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPAllowNativeFireWeapon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapAdminBlinkRifle_C::BPAllowNativeFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPAllowNativeFireWeapon");
		
		AWeapAdminBlinkRifle_C_BPAllowNativeFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPDrawHud
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::BPDrawHud(class AShooterHUD* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPDrawHud");
		
		AWeapAdminBlinkRifle_C_BPDrawHud_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapAdminBlinkRifle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.UserConstructionScript");
		
		AWeapAdminBlinkRifle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestBlinkToTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAirTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::ServerRequestBlinkToTarget(const struct FVector& Location, bool IsAirTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestBlinkToTarget");
		
		AWeapAdminBlinkRifle_C_ServerRequestBlinkToTarget_Params params {};
		params.Location = Location;
		params.IsAirTarget = IsAirTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetMode
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::ServerRequestSetMode(int32_t Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetMode");
		
		AWeapAdminBlinkRifle_C_ServerRequestSetMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.MultiUpdateCurrentMode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::MultiUpdateCurrentMode(int32_t Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.MultiUpdateCurrentMode");
		
		AWeapAdminBlinkRifle_C_MultiUpdateCurrentMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeEntered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::OnModeEntered(int32_t NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeEntered");
		
		AWeapAdminBlinkRifle_C_OnModeEntered_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeExited
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OldMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::OnModeExited(int32_t OldMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeExited");
		
		AWeapAdminBlinkRifle_C_OnModeExited_Params params {};
		params.OldMode = OldMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientUpdatePermissionCheck
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanOwnerCheat                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::ClientUpdatePermissionCheck(bool CanOwnerCheat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientUpdatePermissionCheck");
		
		AWeapAdminBlinkRifle_C_ClientUpdatePermissionCheck_Params params {};
		params.CanOwnerCheat = CanOwnerCheat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetInspectTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InspectTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     InspectComponent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::ServerRequestSetInspectTarget(class AActor* InspectTarget, class UObject* InspectComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetInspectTarget");
		
		AWeapAdminBlinkRifle_C_ServerRequestSetInspectTarget_Params params {};
		params.InspectTarget = InspectTarget;
		params.InspectComponent = InspectComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestDestroyTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::ServerRequestDestroyTarget(class AActor* DestroyTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestDestroyTarget");
		
		AWeapAdminBlinkRifle_C_ServerRequestDestroyTarget_Params params {};
		params.DestroyTarget = DestroyTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestActorDescription
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::ServerRequestActorDescription(class AActor* Actor, class UObject* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestActorDescription");
		
		AWeapAdminBlinkRifle_C_ServerRequestActorDescription_Params params {};
		params.Actor = Actor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientReceiveActorDescription
	 * 		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              Desc                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FString>                              Buffs                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AWeapAdminBlinkRifle_C::ClientReceiveActorDescription(class AActor* Actor, TArray<class FString>* Desc, TArray<class FString>* Buffs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientReceiveActorDescription");
		
		AWeapAdminBlinkRifle_C_ClientReceiveActorDescription_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Desc != nullptr)
			*Desc = params.Desc;
		if (Buffs != nullptr)
			*Buffs = params.Buffs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ExecuteUbergraph_WeapAdminBlinkRifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAdminBlinkRifle_C::ExecuteUbergraph_WeapAdminBlinkRifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ExecuteUbergraph_WeapAdminBlinkRifle");
		
		AWeapAdminBlinkRifle_C_ExecuteUbergraph_WeapAdminBlinkRifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapAdminBlinkRifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapAdminBlinkRifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapAdminBlinkRifle.WeapAdminBlinkRifle_C");
		return ptr;
	}

}


