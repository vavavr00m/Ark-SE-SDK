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
	 * 		Name   -> Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAttackStateRanged_Fireball_Cherufe_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPCanAttack");
		
		UAttackStateRanged_Fireball_Cherufe_C_BPCanAttack_Params params {};
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
	 * 		Name   -> Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.StartAnimationStateEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetRole                                           Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAttackStateRanged_Fireball_Cherufe_C::StartAnimationStateEvent(const class FName& CustomEventName, ENetRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.StartAnimationStateEvent");
		
		UAttackStateRanged_Fireball_Cherufe_C_StartAnimationStateEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UAttackStateRanged_Fireball_Cherufe_C::BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttack");
		
		UAttackStateRanged_Fireball_Cherufe_C_BPRangedAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
		if (TargetVelocity != nullptr)
			*TargetVelocity = params.TargetVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttackOnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UAttackStateRanged_Fireball_Cherufe_C::BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttackOnBegin");
		
		UAttackStateRanged_Fireball_Cherufe_C_BPRangedAttackOnBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
		if (TargetVelocity != nullptr)
			*TargetVelocity = params.TargetVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAttackStateRanged_Fireball_Cherufe_C::ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe");
		
		UAttackStateRanged_Fireball_Cherufe_C_ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttackStateRanged_Fireball_Cherufe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackStateRanged_Fireball_Cherufe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C");
		return ptr;
	}

}


