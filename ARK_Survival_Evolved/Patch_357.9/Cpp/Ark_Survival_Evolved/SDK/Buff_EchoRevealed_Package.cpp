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
	 * 		Name   -> Function Buff_EchoRevealed.Buff_EchoRevealed_C.DeactiveParticle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_EchoRevealed_C::DeactiveParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.DeactiveParticle");
		
		ABuff_EchoRevealed_C_DeactiveParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_EchoRevealed_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPSetupForInstigator");
		
		ABuff_EchoRevealed_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EchoRevealed.Buff_EchoRevealed_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_EchoRevealed_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.BuffAdjustDamage");
		
		ABuff_EchoRevealed_C_BuffAdjustDamage_Params params {};
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
	 * 		Name   -> Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPCustomIsRelevantForClient
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_EchoRevealed_C::BPCustomIsRelevantForClient(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPCustomIsRelevantForClient");
		
		ABuff_EchoRevealed_C_BPCustomIsRelevantForClient_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EchoRevealed.Buff_EchoRevealed_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_EchoRevealed_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.UserConstructionScript");
		
		ABuff_EchoRevealed_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EchoRevealed.Buff_EchoRevealed_C.ExecuteUbergraph_Buff_EchoRevealed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_EchoRevealed_C::ExecuteUbergraph_Buff_EchoRevealed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.ExecuteUbergraph_Buff_EchoRevealed");
		
		ABuff_EchoRevealed_C_ExecuteUbergraph_Buff_EchoRevealed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_EchoRevealed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_EchoRevealed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EchoRevealed.Buff_EchoRevealed_C");
		return ptr;
	}

}


