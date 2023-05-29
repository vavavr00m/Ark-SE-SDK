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
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.IsLocalCrontrolledPlayerInFPV
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLocal                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::IsLocalCrontrolledPlayerInFPV(class APrimalCharacter* forChar, bool* IsLocal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.IsLocalCrontrolledPlayerInFPV");
		
		ABuff_DesmodusInvisible_C_IsLocalCrontrolledPlayerInFPV_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLocal != nullptr)
			*IsLocal = params.IsLocal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.DeactiveOnFiring
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::DeactiveOnFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.DeactiveOnFiring");
		
		ABuff_DesmodusInvisible_C_DeactiveOnFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_DesmodusInvisible_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPServerHandleNetExecCommand");
		
		ABuff_DesmodusInvisible_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPHandleOnStartFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::BPHandleOnStartFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPHandleOnStartFire");
		
		ABuff_DesmodusInvisible_C_BPHandleOnStartFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Has passed default weapon check
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               passedcheck                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::Haspasseddefaultweaponcheck(class AShooterCharacter* Passenger, bool* passedcheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Has passed default weapon check");
		
		ABuff_DesmodusInvisible_C_Haspasseddefaultweaponcheck_Params params {};
		params.Passenger = Passenger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (passedcheck != nullptr)
			*passedcheck = params.passedcheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set Cloak Transition Value
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DissolveMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CloakTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETimelineDirection                                 Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipLFLTransition                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::SetCloakTransitionValue(float DissolveMesh, float CloakTransition, ETimelineDirection Direction, bool SkipLFLTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set Cloak Transition Value");
		
		ABuff_DesmodusInvisible_C_SetCloakTransitionValue_Params params {};
		params.DissolveMesh = DissolveMesh;
		params.CloakTransition = CloakTransition;
		params.Direction = Direction;
		params.SkipLFLTransition = SkipLFLTransition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.update mate boost on timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::updatemateboostontimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.update mate boost on timer");
		
		ABuff_DesmodusInvisible_C_updatemateboostontimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reset Base Targeting Desirability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::ResetBaseTargetingDesirability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reset Base Targeting Desirability");
		
		ABuff_DesmodusInvisible_C_ResetBaseTargetingDesirability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Is Near Boss
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::IsNearBoss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Is Near Boss");
		
		ABuff_DesmodusInvisible_C_IsNearBoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Deactivate Cloak Mat On passengers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::DeactivateCloakMatOnpassengers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Deactivate Cloak Mat On passengers");
		
		ABuff_DesmodusInvisible_C_DeactivateCloakMatOnpassengers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat on rider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::deactivatecloakmatonrider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat on rider");
		
		ABuff_DesmodusInvisible_C_deactivatecloakmatonrider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set up attached cloak meshes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     parentdinomesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      currentcloakingmeshcomp                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      newmesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::setupattachedcloakmeshes(class UObject* parentdinomesh, class USkeletalMeshComponent* currentcloakingmeshcomp, bool* Success, class USkeletalMeshComponent** newmesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set up attached cloak meshes");
		
		ABuff_DesmodusInvisible_C_setupattachedcloakmeshes_Params params {};
		params.parentdinomesh = parentdinomesh;
		params.currentcloakingmeshcomp = currentcloakingmeshcomp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (newmesh != nullptr)
			*newmesh = params.newmesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.force remove disolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::forceremovedisolve(class USkeletalMeshComponent* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.force remove disolve");
		
		ABuff_DesmodusInvisible_C_forceremovedisolve_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.post uncloak
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::postuncloak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.post uncloak");
		
		ABuff_DesmodusInvisible_C_postuncloak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.show floating hud
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::showfloatinghud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.show floating hud");
		
		ABuff_DesmodusInvisible_C_showfloatinghud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveEndPlay");
		
		ABuff_DesmodusInvisible_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.get saddle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::getsaddle(class APrimalCharacter* Character, class USkeletalMeshComponent** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.get saddle");
		
		ABuff_DesmodusInvisible_C_getsaddle_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set fade on components
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETimelineDirection                                 Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CloakTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              dissolveamount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ismainmesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipLFLTransition                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::setfadeoncomponents(class AActor* Character, ETimelineDirection Direction, float CloakTransition, float dissolveamount, class USkeletalMeshComponent* Component, bool ismainmesh, bool SkipLFLTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set fade on components");
		
		ABuff_DesmodusInvisible_C_setfadeoncomponents_Params params {};
		params.Character = Character;
		params.Direction = Direction;
		params.CloakTransition = CloakTransition;
		params.dissolveamount = dissolveamount;
		params.Component = Component;
		params.ismainmesh = ismainmesh;
		params.SkipLFLTransition = SkipLFLTransition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set component hidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::setcomponenthidden(class UObject* Object, bool InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set component hidden");
		
		ABuff_DesmodusInvisible_C_setcomponenthidden_Params params {};
		params.Object = Object;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.manual print string
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InString                                                   (Parm, ZeroConstructor)
	 */
	void ABuff_DesmodusInvisible_C::manualprintstring(const class FString& InString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.manual print string");
		
		ABuff_DesmodusInvisible_C_manualprintstring_Params params {};
		params.InString = InString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.HideBuffFromHUD
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_DesmodusInvisible_C::HideBuffFromHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.HideBuffFromHUD");
		
		ABuff_DesmodusInvisible_C_HideBuffFromHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Lfl Is Valid And Cloaked solo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_DesmodusInvisible_C::LflIsValidAndCloakedsolo(class APrimalDinoCharacter* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Lfl Is Valid And Cloaked solo");
		
		ABuff_DesmodusInvisible_C_LflIsValidAndCloakedsolo_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.lfl is valid and cloaked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               deactivatedfrommateboost                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_DesmodusInvisible_C::lflisvalidandcloaked(class APrimalDinoCharacter* InputPin, bool* deactivatedfrommateboost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.lfl is valid and cloaked");
		
		ABuff_DesmodusInvisible_C_lflisvalidandcloaked_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (deactivatedfrommateboost != nullptr)
			*deactivatedfrommateboost = params.deactivatedfrommateboost;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add buff to character
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::addbufftocharacter(class APrimalCharacter* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add buff to character");
		
		ABuff_DesmodusInvisible_C_addbufftocharacter_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Remove Cloak Origin Dino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::RemoveCloakOriginDino(class APrimalDinoCharacter* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Remove Cloak Origin Dino");
		
		ABuff_DesmodusInvisible_C_RemoveCloakOriginDino_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PreventActorTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ByActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_DesmodusInvisible_C::PreventActorTargeting(class AActor* ByActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PreventActorTargeting");
		
		ABuff_DesmodusInvisible_C_PreventActorTargeting_Params params {};
		params.ByActor = ByActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::deactivatecloakmat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat");
		
		ABuff_DesmodusInvisible_C_deactivatecloakmat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.activate cloak mat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::activatecloakmat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.activate cloak mat");
		
		ABuff_DesmodusInvisible_C_activatecloakmat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickClient");
		
		ABuff_DesmodusInvisible_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.OnRep_is camo active
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::OnRep_iscamoactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.OnRep_is camo active");
		
		ABuff_DesmodusInvisible_C_OnRep_iscamoactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add cloak origin dino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::addcloakorigindino(class APrimalDinoCharacter* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add cloak origin dino");
		
		ABuff_DesmodusInvisible_C_addcloakorigindino_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickServer");
		
		ABuff_DesmodusInvisible_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPPreventInstigatorAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_DesmodusInvisible_C::BPPreventInstigatorAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPPreventInstigatorAttack");
		
		ABuff_DesmodusInvisible_C_BPPreventInstigatorAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.NotifyDamage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TheDamageCauser                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::NotifyDamage(float DamageAmount, class UClass* DamageClass, class AController* EventInstigator, class AActor* TheDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.NotifyDamage");
		
		ABuff_DesmodusInvisible_C_NotifyDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.DamageClass = DamageClass;
		params.EventInstigator = EventInstigator;
		params.TheDamageCauser = TheDamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPDeactivated");
		
		ABuff_DesmodusInvisible_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set All Riders Hidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::SetAllRidersHidden(bool Hidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set All Riders Hidden");
		
		ABuff_DesmodusInvisible_C_SetAllRidersHidden_Params params {};
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Activate Rider Camo Particles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               entercamo                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           specificRider                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::ActivateRiderCamoParticles(bool entercamo, class AShooterCharacter* specificRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Activate Rider Camo Particles");
		
		ABuff_DesmodusInvisible_C_ActivateRiderCamoParticles_Params params {};
		params.entercamo = entercamo;
		params.specificRider = specificRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.UserConstructionScript");
		
		ABuff_DesmodusInvisible_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::fadecamo__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__FinishedFunc");
		
		ABuff_DesmodusInvisible_C_fadecamo__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::fadecamo__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__UpdateFunc");
		
		ABuff_DesmodusInvisible_C_fadecamo__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::FadeToInvisible_Rider__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__FinishedFunc");
		
		ABuff_DesmodusInvisible_C_FadeToInvisible_Rider__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::FadeToInvisible_Rider__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__UpdateFunc");
		
		ABuff_DesmodusInvisible_C_FadeToInvisible_Rider__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__FinishedFunc");
		
		ABuff_DesmodusInvisible_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__UpdateFunc");
		
		ABuff_DesmodusInvisible_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Play_FadeCamo_LFL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::Play_FadeCamo_LFL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Play_FadeCamo_LFL");
		
		ABuff_DesmodusInvisible_C_Play_FadeCamo_LFL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reverse_FadeCamo_LFL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::Reverse_FadeCamo_LFL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reverse_FadeCamo_LFL");
		
		ABuff_DesmodusInvisible_C_Reverse_FadeCamo_LFL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_LFL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::SetNewTime_FadeCamo_LFL(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_LFL");
		
		ABuff_DesmodusInvisible_C_SetNewTime_FadeCamo_LFL_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_SetNewTime_FadeCamo_LFL
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::Multi_SetNewTime_FadeCamo_LFL(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_SetNewTime_FadeCamo_LFL");
		
		ABuff_DesmodusInvisible_C_Multi_SetNewTime_FadeCamo_LFL_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::SetNewTime_FadeCamo_Rider(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_Rider");
		
		ABuff_DesmodusInvisible_C_SetNewTime_FadeCamo_Rider_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReverseFromEnd_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::ReverseFromEnd_FadeCamo_Rider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReverseFromEnd_FadeCamo_Rider");
		
		ABuff_DesmodusInvisible_C_ReverseFromEnd_FadeCamo_Rider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PlayFromStart_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::PlayFromStart_FadeCamo_Rider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PlayFromStart_FadeCamo_Rider");
		
		ABuff_DesmodusInvisible_C_PlayFromStart_FadeCamo_Rider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::Multi_PlayFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade");
		
		ABuff_DesmodusInvisible_C_Multi_PlayFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade_reverse
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::Multi_PlayFade_reverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade_reverse");
		
		ABuff_DesmodusInvisible_C_Multi_PlayFade_reverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.on weapon fire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::onweaponfire(class AShooterWeapon* weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.on weapon fire");
		
		ABuff_DesmodusInvisible_C_onweaponfire_Params params {};
		params.weapon = weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.bind fire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::bindfire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.bind fire");
		
		ABuff_DesmodusInvisible_C_bindfire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Footstep Shimmer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::FootstepShimmer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Footstep Shimmer");
		
		ABuff_DesmodusInvisible_C_FootstepShimmer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusInvisible_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveBeginPlay");
		
		ABuff_DesmodusInvisible_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ExecuteUbergraph_Buff_DesmodusInvisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusInvisible_C::ExecuteUbergraph_Buff_DesmodusInvisible(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ExecuteUbergraph_Buff_DesmodusInvisible");
		
		ABuff_DesmodusInvisible_C_ExecuteUbergraph_Buff_DesmodusInvisible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DesmodusInvisible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DesmodusInvisible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DesmodusInvisible.Buff_DesmodusInvisible_C");
		return ptr;
	}

}


