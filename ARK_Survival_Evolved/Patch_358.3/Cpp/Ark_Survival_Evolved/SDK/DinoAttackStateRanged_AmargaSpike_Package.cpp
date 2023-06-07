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
	 * 		Name   -> Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.StartAnimationStateEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetRole                                           Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_AmargaSpike_C::StartAnimationStateEvent(const class FName& CustomEventName, ENetRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.StartAnimationStateEvent");
		
		UDinoAttackStateRanged_AmargaSpike_C_StartAnimationStateEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_AmargaSpike_C::BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttack");
		
		UDinoAttackStateRanged_AmargaSpike_C_BPRangedAttack_Params params {};
		
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttackOnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_AmargaSpike_C::BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttackOnBegin");
		
		UDinoAttackStateRanged_AmargaSpike_C_BPRangedAttackOnBegin_Params params {};
		
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_AmargaSpike_C::ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike");
		
		UDinoAttackStateRanged_AmargaSpike_C_ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateRanged_AmargaSpike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateRanged_AmargaSpike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C");
		return ptr;
	}

}


