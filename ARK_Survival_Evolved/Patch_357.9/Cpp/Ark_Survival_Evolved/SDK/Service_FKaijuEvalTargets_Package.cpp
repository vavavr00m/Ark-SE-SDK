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
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFindNewAggroTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldRunSecondaryAttackLogic                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuEvalTargets_C::MaybeFindNewAggroTarget(bool* ShouldRunSecondaryAttackLogic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFindNewAggroTarget");
		
		UService_FKaijuEvalTargets_C_MaybeFindNewAggroTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldRunSecondaryAttackLogic != nullptr)
			*ShouldRunSecondaryAttackLogic = params.ShouldRunSecondaryAttackLogic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.IsTamedAndPassive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPassive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuEvalTargets_C::IsTamedAndPassive(bool* IsPassive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.IsTamedAndPassive");
		
		UService_FKaijuEvalTargets_C_IsTamedAndPassive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPassive != nullptr)
			*IsPassive = params.IsPassive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_FKaijuEvalTargets_C::ClearTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearTargets");
		
		UService_FKaijuEvalTargets_C_ClearTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeShakePlayersOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_FKaijuEvalTargets_C::MaybeShakePlayersOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeShakePlayersOff");
		
		UService_FKaijuEvalTargets_C_MaybeShakePlayersOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFlyerAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_FKaijuEvalTargets_C::MaybeFlyerAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFlyerAttack");
		
		UService_FKaijuEvalTargets_C_MaybeFlyerAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackGrab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_FKaijuEvalTargets_C::MaybeAttackGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackGrab");
		
		UService_FKaijuEvalTargets_C_MaybeAttackGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackRoot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_FKaijuEvalTargets_C::MaybeAttackRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackRoot");
		
		UService_FKaijuEvalTargets_C_MaybeAttackRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ChooseQuadWithMostEnemies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_FKaijuEvalTargets_C::ChooseQuadWithMostEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ChooseQuadWithMostEnemies");
		
		UService_FKaijuEvalTargets_C_ChooseQuadWithMostEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearArrays
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_FKaijuEvalTargets_C::ClearArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearArrays");
		
		UService_FKaijuEvalTargets_C_ClearArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.SetQuadrants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuEvalTargets_C::SetQuadrants(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.SetQuadrants");
		
		UService_FKaijuEvalTargets_C_SetQuadrants_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.TargetAcquire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuEvalTargets_C::TargetAcquire(class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.TargetAcquire");
		
		UService_FKaijuEvalTargets_C_TargetAcquire_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuEvalTargets_C::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveActivation");
		
		UService_FKaijuEvalTargets_C_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuEvalTargets_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveTick");
		
		UService_FKaijuEvalTargets_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ExecuteUbergraph_Service_FKaijuEvalTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuEvalTargets_C::ExecuteUbergraph_Service_FKaijuEvalTargets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ExecuteUbergraph_Service_FKaijuEvalTargets");
		
		UService_FKaijuEvalTargets_C_ExecuteUbergraph_Service_FKaijuEvalTargets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UService_FKaijuEvalTargets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UService_FKaijuEvalTargets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C");
		return ptr;
	}

}


