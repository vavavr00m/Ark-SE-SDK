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
	 * 		Name   -> Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.BPOnInstigatorMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ThrownByMammoth_C::BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.BPOnInstigatorMovementModeChangedNotify");
		
		ABuff_ThrownByMammoth_C_BPOnInstigatorMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_ThrownByMammoth_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.BuffAdjustDamage");
		
		ABuff_ThrownByMammoth_C_BuffAdjustDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ThrownByMammoth_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.UserConstructionScript");
		
		ABuff_ThrownByMammoth_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.ExecuteUbergraph_Buff_ThrownByMammoth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ThrownByMammoth_C::ExecuteUbergraph_Buff_ThrownByMammoth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.ExecuteUbergraph_Buff_ThrownByMammoth");
		
		ABuff_ThrownByMammoth_C_ExecuteUbergraph_Buff_ThrownByMammoth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ThrownByMammoth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ThrownByMammoth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ThrownByMammoth.Buff_ThrownByMammoth_C");
		return ptr;
	}

}


