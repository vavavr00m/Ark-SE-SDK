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
	 * 		Name   -> Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_ProtectedByShield_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BuffTickClient");
		
		ABuff_TekStrider_ProtectedByShield_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPAdjustRadialDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Origin                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRadialDamageEvent                          DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 */
	float ABuff_TekStrider_ProtectedByShield_C::BPAdjustRadialDamage(float currentDamage, struct FVector* Origin, struct FRadialDamageEvent* DamageEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPAdjustRadialDamage");
		
		ABuff_TekStrider_ProtectedByShield_C_BPAdjustRadialDamage_Params params {};
		params.currentDamage = currentDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Origin != nullptr)
			*Origin = params.Origin;
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_ProtectedByShield_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPSetupForInstigator");
		
		ABuff_TekStrider_ProtectedByShield_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_ProtectedByShield_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.UserConstructionScript");
		
		ABuff_TekStrider_ProtectedByShield_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.ExecuteUbergraph_Buff_TekStrider_ProtectedByShield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_ProtectedByShield_C::ExecuteUbergraph_Buff_TekStrider_ProtectedByShield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.ExecuteUbergraph_Buff_TekStrider_ProtectedByShield");
		
		ABuff_TekStrider_ProtectedByShield_C_ExecuteUbergraph_Buff_TekStrider_ProtectedByShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStrider_ProtectedByShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStrider_ProtectedByShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C");
		return ptr;
	}

}


