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
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPCanBaseOnCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BaseCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGiantTurtle_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter* BaseCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPCanBaseOnCharacter");
		
		AGiantTurtle_Character_BP_C_BPCanBaseOnCharacter_Params params {};
		params.BaseCharacter = BaseCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeAdult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::BPBecomeAdult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeAdult");
		
		AGiantTurtle_Character_BP_C_BPBecomeAdult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeBaby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::BPBecomeBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeBaby");
		
		AGiantTurtle_Character_BP_C_BPBecomeBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPUnstasis");
		
		AGiantTurtle_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOnDinoCheat");
		
		AGiantTurtle_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyToggleHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHudHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BPNotifyToggleHUD(bool bHudHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyToggleHUD");
		
		AGiantTurtle_Character_BP_C_BPNotifyToggleHUD_Params params {};
		params.bHudHidden = bHudHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.OnRep_bAllowMating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::OnRep_bAllowMating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.OnRep_bAllowMating");
		
		AGiantTurtle_Character_BP_C_OnRep_bAllowMating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveBeginPlay");
		
		AGiantTurtle_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetAllowMating
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::GetAllowMating(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetAllowMating");
		
		AGiantTurtle_Character_BP_C_GetAllowMating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintDrawFloatingHUD");
		
		AGiantTurtle_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateAllowMating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::UpdateAllowMating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateAllowMating");
		
		AGiantTurtle_Character_BP_C_UpdateAllowMating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPTimerServer");
		
		AGiantTurtle_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveDestroyed");
		
		AGiantTurtle_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroyHudWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DestroyNow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::DestroyHudWidget(bool DestroyNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroyHudWidget");
		
		AGiantTurtle_Character_BP_C_DestroyHudWidget_Params params {};
		params.DestroyNow = DestroyNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyClearRider");
		
		AGiantTurtle_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifySetRider");
		
		AGiantTurtle_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyLevelUp");
		
		AGiantTurtle_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGiantTurtle_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AllowPlayMontage");
		
		AGiantTurtle_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGiantTurtle_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_InterceptMoveForward");
		
		AGiantTurtle_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckRaftMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::CheckRaftMode(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckRaftMode");
		
		AGiantTurtle_Character_BP_C_CheckRaftMode_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPostLoadedFromSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::BPPostLoadedFromSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPostLoadedFromSaveGame");
		
		AGiantTurtle_Character_BP_C_BPPostLoadedFromSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ClearPreventHurtAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::ClearPreventHurtAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ClearPreventHurtAnim");
		
		AGiantTurtle_Character_BP_C_ClearPreventHurtAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AnimBpSetBreathing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::AnimBpSetBreathing(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AnimBpSetBreathing");
		
		AGiantTurtle_Character_BP_C_AnimBpSetBreathing_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroySaddle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::DestroySaddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroySaddle");
		
		AGiantTurtle_Character_BP_C_DestroySaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BPPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPlayDying");
		
		AGiantTurtle_Character_BP_C_BPPlayDying_Params params {};
		params.KillingDamage = KillingDamage;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickWake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::TickWake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickWake");
		
		AGiantTurtle_Character_BP_C_TickWake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::UpdateMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateMaterial");
		
		AGiantTurtle_Character_BP_C_UpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BubbleAttackToggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BubbleAttackToggle(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BubbleAttackToggle");
		
		AGiantTurtle_Character_BP_C_BubbleAttackToggle_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AGiantTurtle_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOverrideHurtAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPath                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageHitNormal                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimMontage* AGiantTurtle_Character_BP_C::BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOverrideHurtAnim");
		
		AGiantTurtle_Character_BP_C_BPOverrideHurtAnim_Params params {};
		params.DamageTaken = DamageTaken;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsLocalPath = bIsLocalPath;
		params.bIsPointDamage = bIsPointDamage;
		params.PointDamageLocation = PointDamageLocation;
		params.PointDamageHitNormal = PointDamageHitNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckCave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::CheckCave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckCave");
		
		AGiantTurtle_Character_BP_C_CheckCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TurnOffFlock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::TurnOffFlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TurnOffFlock");
		
		AGiantTurtle_Character_BP_C_TurnOffFlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AGiantTurtle_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPAdjustDamage");
		
		AGiantTurtle_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup Flock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::SetupFlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup Flock");
		
		AGiantTurtle_Character_BP_C_SetupFlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckTurtleTargetForFollowers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::CheckTurtleTargetForFollowers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckTurtleTargetForFollowers");
		
		AGiantTurtle_Character_BP_C_CheckTurtleTargetForFollowers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickTaming
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::TickTaming(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickTaming");
		
		AGiantTurtle_Character_BP_C_TickTaming_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckFullyInWater
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::CheckFullyInWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckFullyInWater");
		
		AGiantTurtle_Character_BP_C_CheckFullyInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBirdsFlock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::TickBirdsFlock(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBirdsFlock");
		
		AGiantTurtle_Character_BP_C_TickBirdsFlock_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.PushBackPawnNotInWater
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::PushBackPawnNotInWater(class APrimalCharacter* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.PushBackPawnNotInWater");
		
		AGiantTurtle_Character_BP_C_PushBackPawnNotInWater_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBubbleCooldown
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::TickBubbleCooldown(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBubbleCooldown");
		
		AGiantTurtle_Character_BP_C_TickBubbleCooldown_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AGiantTurtle_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetHUDElements");
		
		AGiantTurtle_Character_BP_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateBreath Rotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::UpdateBreathRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateBreath Rotation");
		
		AGiantTurtle_Character_BP_C_UpdateBreathRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Tick Breathing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltSeconds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::TickBreathing(float DeltSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Tick Breathing");
		
		AGiantTurtle_Character_BP_C_TickBreathing_Params params {};
		params.DeltSeconds = DeltSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AGiantTurtle_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetCrosshairAlpha");
		
		AGiantTurtle_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGiantTurtle_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AGiantTurtle_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AGiantTurtle_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleOnStopTargeting");
		
		AGiantTurtle_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetPlayersOnSeats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::GetPlayersOnSeats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetPlayersOnSeats");
		
		AGiantTurtle_Character_BP_C_GetPlayersOnSeats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.K2_OnMovementModeChanged");
		
		AGiantTurtle_Character_BP_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGiantTurtle_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintCanRiderAttack");
		
		AGiantTurtle_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubble
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::SpawnBubble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubble");
		
		AGiantTurtle_Character_BP_C_SpawnBubble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AGiantTurtle_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		AGiantTurtle_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup New Crop DataStruct
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LocationIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItemConsumableSeed_C*                 SeedItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::SetupNewCropDataStruct(int32_t LocationIndex, class UPrimalItemConsumableSeed_C* SeedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup New Crop DataStruct");
		
		AGiantTurtle_Character_BP_C_SetupNewCropDataStruct_Params params {};
		params.LocationIndex = LocationIndex;
		params.SeedItem = SeedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Check Inventory for Seed Items
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::CheckInventoryforSeedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Check Inventory for Seed Items");
		
		AGiantTurtle_Character_BP_C_CheckInventoryforSeedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetCropGrowLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LocationIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::GetCropGrowLocation(int32_t* LocationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetCropGrowLocation");
		
		AGiantTurtle_Character_BP_C_GetCropGrowLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationIndex != nullptr)
			*LocationIndex = params.LocationIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnOxygenVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::SpawnOxygenVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnOxygenVFX");
		
		AGiantTurtle_Character_BP_C_SpawnOxygenVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Update CropsVisuals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::UpdateCropsVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Update CropsVisuals");
		
		AGiantTurtle_Character_BP_C_UpdateCropsVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateFlowerAndMushroom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSecond                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::UpdateFlowerAndMushroom(float DeltaSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateFlowerAndMushroom");
		
		AGiantTurtle_Character_BP_C_UpdateFlowerAndMushroom_Params params {};
		params.DeltaSecond = DeltaSecond;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateCropStructs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::UpdateCropStructs(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateCropStructs");
		
		AGiantTurtle_Character_BP_C_UpdateCropStructs_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AddOxygenBuff
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::AddOxygenBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AddOxygenBuff");
		
		AGiantTurtle_Character_BP_C_AddOxygenBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyInventoryItemChange");
		
		AGiantTurtle_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetMovementMontage
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERootMotionMovementMode                            Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                Montage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::GetMovementMontage(ERootMotionMovementMode Mode, class UAnimMontage** Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetMovementMontage");
		
		AGiantTurtle_Character_BP_C_GetMovementMontage_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montage != nullptr)
			*Montage = params.Montage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AGiantTurtle_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetRiderUnboardLocation");
		
		AGiantTurtle_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UserConstructionScript");
		
		AGiantTurtle_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveTick");
		
		AGiantTurtle_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubbles
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::SpawnBubbles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubbles");
		
		AGiantTurtle_Character_BP_C_SpawnBubbles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetIsBreathing
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsBreathing                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::Server_SetIsBreathing(bool bIsBreathing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetIsBreathing");
		
		AGiantTurtle_Character_BP_C_Server_SetIsBreathing_Params params {};
		params.bIsBreathing = bIsBreathing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetBreathDirection
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BreathViewStartLocation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BreathDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::Server_SetBreathDirection(const struct FVector& BreathViewStartLocation, const struct FVector& BreathDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetBreathDirection");
		
		AGiantTurtle_Character_BP_C_Server_SetBreathDirection_Params params {};
		params.BreathViewStartLocation = BreathViewStartLocation;
		params.BreathDirection = BreathDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_TryBubbleAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    OwnerContoler                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::Server_TryBubbleAttack(class AShooterPlayerController* OwnerContoler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_TryBubbleAttack");
		
		AGiantTurtle_Character_BP_C_Server_TryBubbleAttack_Params params {};
		params.OwnerContoler = OwnerContoler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_StopBubbleAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::Server_StopBubbleAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_StopBubbleAttack");
		
		AGiantTurtle_Character_BP_C_Server_StopBubbleAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Multi_StopCurrentMontage
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Character_BP_C::Multi_StopCurrentMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Multi_StopCurrentMontage");
		
		AGiantTurtle_Character_BP_C_Multi_StopCurrentMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ExecuteUbergraph_GiantTurtle_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Character_BP_C::ExecuteUbergraph_GiantTurtle_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ExecuteUbergraph_GiantTurtle_Character_BP");
		
		AGiantTurtle_Character_BP_C_ExecuteUbergraph_GiantTurtle_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGiantTurtle_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGiantTurtle_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GiantTurtle_Character_BP.GiantTurtle_Character_BP_C");
		return ptr;
	}

}


