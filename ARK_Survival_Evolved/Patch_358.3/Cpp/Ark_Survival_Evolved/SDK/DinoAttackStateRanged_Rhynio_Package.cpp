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
	 * 		Name   -> Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.ClampDirectionToOwnerDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutDir                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_Rhynio_C::ClampDirectionToOwnerDino(const struct FVector& Direction, struct FVector* OutDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.ClampDirectionToOwnerDino");
		
		UDinoAttackStateRanged_Rhynio_C_ClampDirectionToOwnerDino_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDir != nullptr)
			*OutDir = params.OutDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.BPRangedAttackOnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_Rhynio_C::BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.BPRangedAttackOnBegin");
		
		UDinoAttackStateRanged_Rhynio_C_BPRangedAttackOnBegin_Params params {};
		
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
	 * 		Name   -> Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.BPRangedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_Rhynio_C::BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.BPRangedAttack");
		
		UDinoAttackStateRanged_Rhynio_C_BPRangedAttack_Params params {};
		
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
	 * 		Name   -> Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.ExecuteUbergraph_DinoAttackStateRanged_Rhynio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_Rhynio_C::ExecuteUbergraph_DinoAttackStateRanged_Rhynio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.ExecuteUbergraph_DinoAttackStateRanged_Rhynio");
		
		UDinoAttackStateRanged_Rhynio_C_ExecuteUbergraph_DinoAttackStateRanged_Rhynio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateRanged_Rhynio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateRanged_Rhynio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C");
		return ptr;
	}

}


