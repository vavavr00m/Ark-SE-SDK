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
	 * 		Name   -> Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float APrimalBuff_SummonerDinoCountDown_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BuffAdjustDamage");
		
		APrimalBuff_SummonerDinoCountDown_C_BuffAdjustDamage_Params params {};
		params.Damage = Damage;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.TheDamgeType = TheDamgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ClearImmobilization
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalBuff_SummonerDinoCountDown_C::ClearImmobilization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ClearImmobilization");
		
		APrimalBuff_SummonerDinoCountDown_C_ClearImmobilization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.SetSuicideTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalBuff_SummonerDinoCountDown_C::SetSuicideTimer(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.SetSuicideTimer");
		
		APrimalBuff_SummonerDinoCountDown_C_SetSuicideTimer_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.Suicide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalBuff_SummonerDinoCountDown_C::Suicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.Suicide");
		
		APrimalBuff_SummonerDinoCountDown_C_Suicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalBuff_SummonerDinoCountDown_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BPSetupForInstigator");
		
		APrimalBuff_SummonerDinoCountDown_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalBuff_SummonerDinoCountDown_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.UserConstructionScript");
		
		APrimalBuff_SummonerDinoCountDown_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.OnInstigatorDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalBuff_SummonerDinoCountDown_C::OnInstigatorDied(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.OnInstigatorDied");
		
		APrimalBuff_SummonerDinoCountDown_C_OnInstigatorDied_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalBuff_SummonerDinoCountDown_C::ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown");
		
		APrimalBuff_SummonerDinoCountDown_C_ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimalBuff_SummonerDinoCountDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimalBuff_SummonerDinoCountDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C");
		return ptr;
	}

}


