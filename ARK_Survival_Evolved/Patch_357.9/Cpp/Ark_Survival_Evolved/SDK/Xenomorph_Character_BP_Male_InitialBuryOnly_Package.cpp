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
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AXenomorph_Character_BP_Male_InitialBuryOnly_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BlueprintAdjustOutputDamage");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.KillSelf
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::KillSelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.KillSelf");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_KillSelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BP_OnSetDeath");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.InitializeDive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::InitializeDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.InitializeDive");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_InitializeDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.SetupStaticBaby
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::SetupStaticBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.SetupStaticBaby");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_SetupStaticBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateBuryMound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldShow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::UpdateBuryMound(bool ShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateBuryMound");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_UpdateBuryMound_Params params {};
		params.ShouldShow = ShouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.GetDefaultXeno
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::GetDefaultXeno(class APrimalDinoCharacter** Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.GetDefaultXeno");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_GetDefaultXeno_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dino != nullptr)
			*Dino = params.Dino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPUnstasis");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateAttackDestOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::UpdateAttackDestOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateAttackDestOffset");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_UpdateAttackDestOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AXenomorph_Character_BP_Male_InitialBuryOnly_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPAdjustDamage");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
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
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPTimerServer");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UserConstructionScript");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ReceiveBeginPlay");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPDinoPostBeginPlay");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.AttemptDiveOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::AttemptDiveOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.AttemptDiveOut");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_AttemptDiveOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ForceDiveEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::ForceDiveEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ForceDiveEnd");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_ForceDiveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_InitialBuryOnly_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly");
		
		AXenomorph_Character_BP_Male_InitialBuryOnly_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AXenomorph_Character_BP_Male_InitialBuryOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AXenomorph_Character_BP_Male_InitialBuryOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C");
		return ptr;
	}

}


