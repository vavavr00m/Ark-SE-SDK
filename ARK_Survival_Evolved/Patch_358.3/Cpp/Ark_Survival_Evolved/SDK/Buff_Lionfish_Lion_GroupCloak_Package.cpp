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
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPSetupForInstigator");
		
		ABuff_Lionfish_Lion_GroupCloak_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Has passed default weapon check
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               passedcheck                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::Haspasseddefaultweaponcheck(class AShooterCharacter* Passenger, bool* passedcheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Has passed default weapon check");
		
		ABuff_Lionfish_Lion_GroupCloak_C_Haspasseddefaultweaponcheck_Params params {};
		params.Passenger = Passenger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (passedcheck != nullptr)
			*passedcheck = params.passedcheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Set Cloak Transition Value
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DissolveMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CloakTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETimelineDirection                                 Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipLFLTransition                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::SetCloakTransitionValue(float DissolveMesh, float CloakTransition, ETimelineDirection Direction, bool SkipLFLTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Set Cloak Transition Value");
		
		ABuff_Lionfish_Lion_GroupCloak_C_SetCloakTransitionValue_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.update mate boost on timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::updatemateboostontimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.update mate boost on timer");
		
		ABuff_Lionfish_Lion_GroupCloak_C_updatemateboostontimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Reset Base Targeting Desirability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::ResetBaseTargetingDesirability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Reset Base Targeting Desirability");
		
		ABuff_Lionfish_Lion_GroupCloak_C_ResetBaseTargetingDesirability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Is Near Boss
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::IsNearBoss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Is Near Boss");
		
		ABuff_Lionfish_Lion_GroupCloak_C_IsNearBoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Deactivate Cloak Mat On passengers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::DeactivateCloakMatOnpassengers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Deactivate Cloak Mat On passengers");
		
		ABuff_Lionfish_Lion_GroupCloak_C_DeactivateCloakMatOnpassengers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.deactivate cloak mat on rider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::deactivatecloakmatonrider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.deactivate cloak mat on rider");
		
		ABuff_Lionfish_Lion_GroupCloak_C_deactivatecloakmatonrider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set up attached cloak meshes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     parentdinomesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      currentcloakingmeshcomp                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      newmesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::setupattachedcloakmeshes(class UObject* parentdinomesh, class USkeletalMeshComponent* currentcloakingmeshcomp, bool* Success, class USkeletalMeshComponent** newmesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set up attached cloak meshes");
		
		ABuff_Lionfish_Lion_GroupCloak_C_setupattachedcloakmeshes_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.force remove disolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::forceremovedisolve(class USkeletalMeshComponent* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.force remove disolve");
		
		ABuff_Lionfish_Lion_GroupCloak_C_forceremovedisolve_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.post uncloak
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::postuncloak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.post uncloak");
		
		ABuff_Lionfish_Lion_GroupCloak_C_postuncloak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.show floating hud
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::showfloatinghud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.show floating hud");
		
		ABuff_Lionfish_Lion_GroupCloak_C_showfloatinghud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ReceiveEndPlay");
		
		ABuff_Lionfish_Lion_GroupCloak_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.get saddle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::getsaddle(class APrimalCharacter* Character, class USkeletalMeshComponent** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.get saddle");
		
		ABuff_Lionfish_Lion_GroupCloak_C_getsaddle_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set fade on components
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETimelineDirection                                 Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CloakTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              dissolveamount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ismainmesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipLFLTransition                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::setfadeoncomponents(class AActor* Character, ETimelineDirection Direction, float CloakTransition, float dissolveamount, class USkeletalMeshComponent* Component, bool ismainmesh, bool SkipLFLTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set fade on components");
		
		ABuff_Lionfish_Lion_GroupCloak_C_setfadeoncomponents_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set component hidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::setcomponenthidden(class UObject* Object, bool InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set component hidden");
		
		ABuff_Lionfish_Lion_GroupCloak_C_setcomponenthidden_Params params {};
		params.Object = Object;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.manual print string
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InString                                                   (Parm, ZeroConstructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::manualprintstring(const class FString& InString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.manual print string");
		
		ABuff_Lionfish_Lion_GroupCloak_C_manualprintstring_Params params {};
		params.InString = InString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.HideBuffFromHUD
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Lionfish_Lion_GroupCloak_C::HideBuffFromHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.HideBuffFromHUD");
		
		ABuff_Lionfish_Lion_GroupCloak_C_HideBuffFromHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Lfl Is Valid And Cloaked solo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Lionfish_Lion_GroupCloak_C::LflIsValidAndCloakedsolo(class APrimalDinoCharacter* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Lfl Is Valid And Cloaked solo");
		
		ABuff_Lionfish_Lion_GroupCloak_C_LflIsValidAndCloakedsolo_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.lfl is valid and cloaked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               deactivatedfrommateboost                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Lionfish_Lion_GroupCloak_C::lflisvalidandcloaked(class APrimalDinoCharacter* InputPin, bool* deactivatedfrommateboost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.lfl is valid and cloaked");
		
		ABuff_Lionfish_Lion_GroupCloak_C_lflisvalidandcloaked_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.add buff to character
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::addbufftocharacter(class APrimalCharacter* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.add buff to character");
		
		ABuff_Lionfish_Lion_GroupCloak_C_addbufftocharacter_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Remove Cloak Origin Dino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::RemoveCloakOriginDino(class APrimalDinoCharacter* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Remove Cloak Origin Dino");
		
		ABuff_Lionfish_Lion_GroupCloak_C_RemoveCloakOriginDino_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.PreventActorTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ByActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Lionfish_Lion_GroupCloak_C::PreventActorTargeting(class AActor* ByActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.PreventActorTargeting");
		
		ABuff_Lionfish_Lion_GroupCloak_C_PreventActorTargeting_Params params {};
		params.ByActor = ByActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.deactivate cloak mat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::deactivatecloakmat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.deactivate cloak mat");
		
		ABuff_Lionfish_Lion_GroupCloak_C_deactivatecloakmat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.activate cloak mat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::activatecloakmat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.activate cloak mat");
		
		ABuff_Lionfish_Lion_GroupCloak_C_activatecloakmat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BuffTickClient");
		
		ABuff_Lionfish_Lion_GroupCloak_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.OnRep_is camo active
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::OnRep_iscamoactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.OnRep_is camo active");
		
		ABuff_Lionfish_Lion_GroupCloak_C_OnRep_iscamoactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.add cloak origin dino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::addcloakorigindino(class APrimalDinoCharacter* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.add cloak origin dino");
		
		ABuff_Lionfish_Lion_GroupCloak_C_addcloakorigindino_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BuffTickServer");
		
		ABuff_Lionfish_Lion_GroupCloak_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPPreventInstigatorAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Lionfish_Lion_GroupCloak_C::BPPreventInstigatorAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPPreventInstigatorAttack");
		
		ABuff_Lionfish_Lion_GroupCloak_C_BPPreventInstigatorAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.NotifyDamage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TheDamageCauser                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::NotifyDamage(float DamageAmount, class UClass* DamageClass, class AController* EventInstigator, class AActor* TheDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.NotifyDamage");
		
		ABuff_Lionfish_Lion_GroupCloak_C_NotifyDamage_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPDeactivated");
		
		ABuff_Lionfish_Lion_GroupCloak_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Set All Riders Hidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::SetAllRidersHidden(bool Hidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Set All Riders Hidden");
		
		ABuff_Lionfish_Lion_GroupCloak_C_SetAllRidersHidden_Params params {};
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Activate Rider Camo Particles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               entercamo                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           specificRider                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::ActivateRiderCamoParticles(bool entercamo, class AShooterCharacter* specificRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Activate Rider Camo Particles");
		
		ABuff_Lionfish_Lion_GroupCloak_C_ActivateRiderCamoParticles_Params params {};
		params.entercamo = entercamo;
		params.specificRider = specificRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.UserConstructionScript");
		
		ABuff_Lionfish_Lion_GroupCloak_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.fade camo__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::fadecamo__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.fade camo__FinishedFunc");
		
		ABuff_Lionfish_Lion_GroupCloak_C_fadecamo__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.fade camo__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::fadecamo__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.fade camo__UpdateFunc");
		
		ABuff_Lionfish_Lion_GroupCloak_C_fadecamo__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.FadeToInvisible_Rider__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::FadeToInvisible_Rider__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.FadeToInvisible_Rider__FinishedFunc");
		
		ABuff_Lionfish_Lion_GroupCloak_C_FadeToInvisible_Rider__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.FadeToInvisible_Rider__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::FadeToInvisible_Rider__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.FadeToInvisible_Rider__UpdateFunc");
		
		ABuff_Lionfish_Lion_GroupCloak_C_FadeToInvisible_Rider__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Timeline_0__FinishedFunc");
		
		ABuff_Lionfish_Lion_GroupCloak_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Timeline_0__UpdateFunc");
		
		ABuff_Lionfish_Lion_GroupCloak_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Play_FadeCamo_LFL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::Play_FadeCamo_LFL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Play_FadeCamo_LFL");
		
		ABuff_Lionfish_Lion_GroupCloak_C_Play_FadeCamo_LFL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Reverse_FadeCamo_LFL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::Reverse_FadeCamo_LFL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Reverse_FadeCamo_LFL");
		
		ABuff_Lionfish_Lion_GroupCloak_C_Reverse_FadeCamo_LFL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.SetNewTime_FadeCamo_LFL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::SetNewTime_FadeCamo_LFL(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.SetNewTime_FadeCamo_LFL");
		
		ABuff_Lionfish_Lion_GroupCloak_C_SetNewTime_FadeCamo_LFL_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_SetNewTime_FadeCamo_LFL
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::Multi_SetNewTime_FadeCamo_LFL(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_SetNewTime_FadeCamo_LFL");
		
		ABuff_Lionfish_Lion_GroupCloak_C_Multi_SetNewTime_FadeCamo_LFL_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.SetNewTime_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::SetNewTime_FadeCamo_Rider(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.SetNewTime_FadeCamo_Rider");
		
		ABuff_Lionfish_Lion_GroupCloak_C_SetNewTime_FadeCamo_Rider_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ReverseFromEnd_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::ReverseFromEnd_FadeCamo_Rider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ReverseFromEnd_FadeCamo_Rider");
		
		ABuff_Lionfish_Lion_GroupCloak_C_ReverseFromEnd_FadeCamo_Rider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.PlayFromStart_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::PlayFromStart_FadeCamo_Rider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.PlayFromStart_FadeCamo_Rider");
		
		ABuff_Lionfish_Lion_GroupCloak_C_PlayFromStart_FadeCamo_Rider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_PlayFade
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::Multi_PlayFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_PlayFade");
		
		ABuff_Lionfish_Lion_GroupCloak_C_Multi_PlayFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_PlayFade_reverse
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::Multi_PlayFade_reverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_PlayFade_reverse");
		
		ABuff_Lionfish_Lion_GroupCloak_C_Multi_PlayFade_reverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.on weapon fire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::onweaponfire(class AShooterWeapon* weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.on weapon fire");
		
		ABuff_Lionfish_Lion_GroupCloak_C_onweaponfire_Params params {};
		params.weapon = weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.bind fire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::bindfire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.bind fire");
		
		ABuff_Lionfish_Lion_GroupCloak_C_bindfire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Footstep Shimmer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::FootstepShimmer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Footstep Shimmer");
		
		ABuff_Lionfish_Lion_GroupCloak_C_FootstepShimmer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ExecuteUbergraph_Buff_Lionfish_Lion_GroupCloak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_GroupCloak_C::ExecuteUbergraph_Buff_Lionfish_Lion_GroupCloak(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ExecuteUbergraph_Buff_Lionfish_Lion_GroupCloak");
		
		ABuff_Lionfish_Lion_GroupCloak_C_ExecuteUbergraph_Buff_Lionfish_Lion_GroupCloak_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Lionfish_Lion_GroupCloak_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Lionfish_Lion_GroupCloak_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C");
		return ptr;
	}

}


