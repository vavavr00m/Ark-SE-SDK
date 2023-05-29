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
	 * 		Name   -> Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekClaw_Owner_Blocking_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BuffTickServer");
		
		ABuff_TekClaw_Owner_Blocking_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekClaw_Owner_Blocking_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPSetupForInstigator");
		
		ABuff_TekClaw_Owner_Blocking_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustDamage_Ex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ImpulseDir                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InDamageCauser                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_TekClaw_Owner_Blocking_C::BPAdjustDamage_Ex(float Damage, struct FHitResult* HitInfo, struct FVector* ImpulseDir, class AController* EventInstigator, class AActor* InDamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustDamage_Ex");
		
		ABuff_TekClaw_Owner_Blocking_C_BPAdjustDamage_Ex_Params params {};
		params.Damage = Damage;
		params.EventInstigator = EventInstigator;
		params.InDamageCauser = InDamageCauser;
		params.TheDamgeType = TheDamgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		if (ImpulseDir != nullptr)
			*ImpulseDir = params.ImpulseDir;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustImpulseFromDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DesiredImpulse                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	struct FVector ABuff_TekClaw_Owner_Blocking_C::BPAdjustImpulseFromDamage(const struct FVector& DesiredImpulse, float DamageTaken, const struct FDamageEvent& TheDamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustImpulseFromDamage");
		
		ABuff_TekClaw_Owner_Blocking_C_BPAdjustImpulseFromDamage_Params params {};
		params.DesiredImpulse = DesiredImpulse;
		params.DamageTaken = DamageTaken;
		params.TheDamageEvent = TheDamageEvent;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekClaw_Owner_Blocking_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.UserConstructionScript");
		
		ABuff_TekClaw_Owner_Blocking_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.ExecuteUbergraph_Buff_TekClaw_Owner_Blocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekClaw_Owner_Blocking_C::ExecuteUbergraph_Buff_TekClaw_Owner_Blocking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.ExecuteUbergraph_Buff_TekClaw_Owner_Blocking");
		
		ABuff_TekClaw_Owner_Blocking_C_ExecuteUbergraph_Buff_TekClaw_Owner_Blocking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekClaw_Owner_Blocking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekClaw_Owner_Blocking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C");
		return ptr;
	}

}


