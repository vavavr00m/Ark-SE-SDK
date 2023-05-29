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
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get Octree Group
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EServerOctreeGroup                                 OctreeGroup                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Base_C::GetOctreeGroup(EServerOctreeGroup* OctreeGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get Octree Group");
		
		UDinoAttackStateAoEFlee_Base_C_GetOctreeGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OctreeGroup != nullptr)
			*OctreeGroup = params.OctreeGroup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnTickEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Base_C::OnTickEvent(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnTickEvent");
		
		UDinoAttackStateAoEFlee_Base_C_OnTickEvent_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackStateAoEFlee_Base_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.BPCanAttack");
		
		UDinoAttackStateAoEFlee_Base_C_BPCanAttack_Params params {};
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get AoE Radius
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Base_C::GetAoERadius(float* Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get AoE Radius");
		
		UDinoAttackStateAoEFlee_Base_C_GetAoERadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Find Characters To Frighten
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    Characters                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UDinoAttackStateAoEFlee_Base_C::FindCharactersToFrighten(TArray<class APrimalCharacter*>* Characters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Find Characters To Frighten");
		
		UDinoAttackStateAoEFlee_Base_C_FindCharactersToFrighten_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Characters != nullptr)
			*Characters = params.Characters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Should Frighten Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldFrighten                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Base_C::ShouldFrightenCharacter(class APrimalCharacter* Character, bool* ShouldFrighten)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Should Frighten Character");
		
		UDinoAttackStateAoEFlee_Base_C_ShouldFrightenCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldFrighten != nullptr)
			*ShouldFrighten = params.ShouldFrighten;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Is On Cooldown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnCooldown                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Base_C::IsOnCooldown(bool* OnCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Is On Cooldown");
		
		UDinoAttackStateAoEFlee_Base_C_IsOnCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OnCooldown != nullptr)
			*OnCooldown = params.OnCooldown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Base_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnBeginEvent");
		
		UDinoAttackStateAoEFlee_Base_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Base_C::ExecuteUbergraph_DinoAttackStateAoEFlee_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Base");
		
		UDinoAttackStateAoEFlee_Base_C_ExecuteUbergraph_DinoAttackStateAoEFlee_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateAoEFlee_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateAoEFlee_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C");
		return ptr;
	}

}


