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
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPGetDebugInfoString
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString ABuff_SpindlesMinigunHit_C::BPGetDebugInfoString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPGetDebugInfoString");
		
		ABuff_SpindlesMinigunHit_C_BPGetDebugInfoString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.OnRep_CurrentPreventHurtAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpindlesMinigunHit_C::OnRep_CurrentPreventHurtAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.OnRep_CurrentPreventHurtAnim");
		
		ABuff_SpindlesMinigunHit_C_OnRep_CurrentPreventHurtAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_SpindlesMinigunHit_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffAdjustDamage");
		
		ABuff_SpindlesMinigunHit_C_BuffAdjustDamage_Params params {};
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
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpindlesMinigunHit_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveEndPlay");
		
		ABuff_SpindlesMinigunHit_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPPreventflight
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_SpindlesMinigunHit_C::BPPreventflight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPPreventflight");
		
		ABuff_SpindlesMinigunHit_C_BPPreventflight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpindlesMinigunHit_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveBeginPlay");
		
		ABuff_SpindlesMinigunHit_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpindlesMinigunHit_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffTickServer");
		
		ABuff_SpindlesMinigunHit_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPResetBuffStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpindlesMinigunHit_C::BPResetBuffStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPResetBuffStart");
		
		ABuff_SpindlesMinigunHit_C_BPResetBuffStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpindlesMinigunHit_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.UserConstructionScript");
		
		ABuff_SpindlesMinigunHit_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ExecuteUbergraph_Buff_SpindlesMinigunHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpindlesMinigunHit_C::ExecuteUbergraph_Buff_SpindlesMinigunHit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ExecuteUbergraph_Buff_SpindlesMinigunHit");
		
		ABuff_SpindlesMinigunHit_C_ExecuteUbergraph_Buff_SpindlesMinigunHit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_SpindlesMinigunHit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SpindlesMinigunHit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C");
		return ptr;
	}

}


