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
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanEquip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByCharacter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWeap_Mjolnir_C::BPCanEquip(class AShooterCharacter* ByCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanEquip");
		
		AWeap_Mjolnir_C_BPCanEquip_Params params {};
		params.ByCharacter = ByCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Mjolnir_C::PlayRandomIdleSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleSound");
		
		AWeap_Mjolnir_C_PlayRandomIdleSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.CheckPlayIdleAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Mjolnir_C::CheckPlayIdleAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.CheckPlayIdleAudio");
		
		AWeap_Mjolnir_C_CheckPlayIdleAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.OnRep_bIsCharged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Mjolnir_C::OnRep_bIsCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.OnRep_bIsCharged");
		
		AWeap_Mjolnir_C_OnRep_bIsCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeap_Mjolnir_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.ReceiveTick");
		
		AWeap_Mjolnir_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.BPSpawnMeleeEffects
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Impact                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ShootDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeap_Mjolnir_C::BPSpawnMeleeEffects(const struct FVector& Impact, const struct FVector& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.BPSpawnMeleeEffects");
		
		AWeap_Mjolnir_C_BPSpawnMeleeEffects_Params params {};
		params.Impact = Impact;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanMeleeAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeap_Mjolnir_C::BPCanMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanMeleeAttack");
		
		AWeap_Mjolnir_C_BPCanMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Mjolnir_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.UserConstructionScript");
		
		AWeap_Mjolnir_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleAudio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Mjolnir_C::PlayRandomIdleAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleAudio");
		
		AWeap_Mjolnir_C_PlayRandomIdleAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_Mjolnir.Weap_Mjolnir_C.ExecuteUbergraph_Weap_Mjolnir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeap_Mjolnir_C::ExecuteUbergraph_Weap_Mjolnir(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.ExecuteUbergraph_Weap_Mjolnir");
		
		AWeap_Mjolnir_C_ExecuteUbergraph_Weap_Mjolnir_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeap_Mjolnir_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeap_Mjolnir_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weap_Mjolnir.Weap_Mjolnir_C");
		return ptr;
	}

}


