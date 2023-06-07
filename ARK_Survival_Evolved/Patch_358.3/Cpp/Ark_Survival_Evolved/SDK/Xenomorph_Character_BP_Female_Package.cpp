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
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPTimerNonDedicated");
		
		AXenomorph_Character_BP_Female_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.HasBuffsOfClasses
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UClass*>                              ParentClassesArray                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	bool AXenomorph_Character_BP_Female_C::HasBuffsOfClasses(class APrimalCharacter* Target, TArray<class UClass*>* ParentClassesArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.HasBuffsOfClasses");
		
		AXenomorph_Character_BP_Female_C_HasBuffsOfClasses_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParentClassesArray != nullptr)
			*ParentClassesArray = params.ParentClassesArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnateNonPure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AXenomorph_Character_BP_Female_C::ReadyToImpregnateNonPure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnateNonPure");
		
		AXenomorph_Character_BP_Female_C_ReadyToImpregnateNonPure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AXenomorph_Character_BP_Female_C::ReadyToImpregnate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnate");
		
		AXenomorph_Character_BP_Female_C_ReadyToImpregnate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.GetNewTimeForImpregnate
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AXenomorph_Character_BP_Female_C::GetNewTimeForImpregnate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.GetNewTimeForImpregnate");
		
		AXenomorph_Character_BP_Female_C_GetNewTimeForImpregnate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.InitializeDive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::InitializeDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.InitializeDive");
		
		AXenomorph_Character_BP_Female_C_InitializeDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.OnChargeEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::OnChargeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.OnChargeEvent");
		
		AXenomorph_Character_BP_Female_C_OnChargeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AXenomorph_Character_BP_Female_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPAdjustDamage");
		
		AXenomorph_Character_BP_Female_C_BPAdjustDamage_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Female_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidClearCarriedCharacter");
		
		AXenomorph_Character_BP_Female_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AXenomorph_Character_BP_Female_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BlueprintCanAttack");
		
		AXenomorph_Character_BP_Female_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Female_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidSetCarriedCharacter");
		
		AXenomorph_Character_BP_Female_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.DisableEyeGlow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::DisableEyeGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.DisableEyeGlow");
		
		AXenomorph_Character_BP_Female_C_DisableEyeGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.UserConstructionScript");
		
		AXenomorph_Character_BP_Female_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_EndBury
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::AnimNotify_EndBury()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_EndBury");
		
		AXenomorph_Character_BP_Female_C_AnimNotify_EndBury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_CheckForGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::AnimNotify_CheckForGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_CheckForGrab");
		
		AXenomorph_Character_BP_Female_C_AnimNotify_CheckForGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_Impregnate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::AnimNotify_Impregnate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_Impregnate");
		
		AXenomorph_Character_BP_Female_C_AnimNotify_Impregnate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ImpregnateStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::ImpregnateStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ImpregnateStart");
		
		AXenomorph_Character_BP_Female_C_ImpregnateStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_StartBury
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::AnimNotify_StartBury()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_StartBury");
		
		AXenomorph_Character_BP_Female_C_AnimNotify_StartBury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_ImpregnateRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Female_C::AnimNotify_ImpregnateRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_ImpregnateRelease");
		
		AXenomorph_Character_BP_Female_C_AnimNotify_ImpregnateRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ExecuteUbergraph_Xenomorph_Character_BP_Female
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Female_C::ExecuteUbergraph_Xenomorph_Character_BP_Female(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ExecuteUbergraph_Xenomorph_Character_BP_Female");
		
		AXenomorph_Character_BP_Female_C_ExecuteUbergraph_Xenomorph_Character_BP_Female_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AXenomorph_Character_BP_Female_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AXenomorph_Character_BP_Female_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C");
		return ptr;
	}

}


