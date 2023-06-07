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
	 * 		Name   -> Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.IsActorInEffectiveRange
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInRange                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Mjolnir_Lightning_AoE_C::IsActorInEffectiveRange(class AActor* Actor, bool* IsInRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.IsActorInEffectiveRange");
		
		ABuff_Mjolnir_Lightning_AoE_C_IsActorInEffectiveRange_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInRange != nullptr)
			*IsInRange = params.IsInRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.InitializeAoE
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Mjolnir_Lightning_AoE_C::InitializeAoE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.InitializeAoE");
		
		ABuff_Mjolnir_Lightning_AoE_C_InitializeAoE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.CanAffectCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            characterToAffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canStun                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Mjolnir_Lightning_AoE_C::CanAffectCharacter(class APrimalCharacter* characterToAffect, bool* canStun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.CanAffectCharacter");
		
		ABuff_Mjolnir_Lightning_AoE_C_CanAffectCharacter_Params params {};
		params.characterToAffect = characterToAffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canStun != nullptr)
			*canStun = params.canStun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.BPExcludeAoEActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToConsider                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Mjolnir_Lightning_AoE_C::BPExcludeAoEActor(class AActor* ActorToConsider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.BPExcludeAoEActor");
		
		ABuff_Mjolnir_Lightning_AoE_C_BPExcludeAoEActor_Params params {};
		params.ActorToConsider = ActorToConsider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Mjolnir_Lightning_AoE_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.UserConstructionScript");
		
		ABuff_Mjolnir_Lightning_AoE_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Mjolnir_Lightning_AoE_C::ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE");
		
		ABuff_Mjolnir_Lightning_AoE_C_ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.OnNewActorAdded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Mjolnir_Lightning_AoE_C::OnNewActorAdded__DelegateSignature(class AActor* forActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.OnNewActorAdded__DelegateSignature");
		
		ABuff_Mjolnir_Lightning_AoE_C_OnNewActorAdded__DelegateSignature_Params params {};
		params.forActor = forActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Mjolnir_Lightning_AoE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Mjolnir_Lightning_AoE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C");
		return ptr;
	}

}


