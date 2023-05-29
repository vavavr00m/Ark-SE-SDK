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
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.UpdateGrabAttackLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackAIState_Grab_C::UpdateGrabAttackLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.UpdateGrabAttackLocation");
		
		UForestKaiju_AttackAIState_Grab_C_UpdateGrabAttackLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Is Location in Grab Attack Wedge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::IsLocationinGrabAttackWedge(const struct FVector& Location, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Is Location in Grab Attack Wedge");
		
		UForestKaiju_AttackAIState_Grab_C_IsLocationinGrabAttackWedge_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugPrintString
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::DebugPrintString(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugPrintString");
		
		UForestKaiju_AttackAIState_Grab_C_DebugPrintString_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.StartAttackAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackAIState_Grab_C::StartAttackAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.StartAttackAnim");
		
		UForestKaiju_AttackAIState_Grab_C_StartAttackAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.PublicIsValidVineTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            ForestKaiju                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::PublicIsValidVineTarget(class APrimalCharacter* Target, class APrimalCharacter* ForestKaiju, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.PublicIsValidVineTarget");
		
		UForestKaiju_AttackAIState_Grab_C_PublicIsValidVineTarget_Params params {};
		params.Target = Target;
		params.ForestKaiju = ForestKaiju;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.IsValidVineTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            ForestKaiju                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ValidTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::IsValidVineTarget(class APrimalCharacter* Target, class APrimalCharacter* ForestKaiju, bool* ValidTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.IsValidVineTarget");
		
		UForestKaiju_AttackAIState_Grab_C_IsValidVineTarget_Params params {};
		params.Target = Target;
		params.ForestKaiju = ForestKaiju;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidTarget != nullptr)
			*ValidTarget = params.ValidTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnBeginEvent");
		
		UForestKaiju_AttackAIState_Grab_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.VineRetracted
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVineTargetData>                     Targets                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UForestKaiju_AttackAIState_Grab_C::VineRetracted(TArray<struct FVineTargetData>* Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.VineRetracted");
		
		UForestKaiju_AttackAIState_Grab_C_VineRetracted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Targets != nullptr)
			*Targets = params.Targets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackAIState_Grab_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnEndEvent");
		
		UForestKaiju_AttackAIState_Grab_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Debug Draw Sphere
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::DebugDrawSphere(const struct FVector& Center, float Radius, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Debug Draw Sphere");
		
		UForestKaiju_AttackAIState_Grab_C_DebugDrawSphere_Params params {};
		params.Center = Center;
		params.Radius = Radius;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.AnimNotifyGrabAttackSmash
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackAIState_Grab_C::AnimNotifyGrabAttackSmash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.AnimNotifyGrabAttackSmash");
		
		UForestKaiju_AttackAIState_Grab_C_AnimNotifyGrabAttackSmash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugDrawLine
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugDrawLine");
		
		UForestKaiju_AttackAIState_Grab_C_DebugDrawLine_Params params {};
		params.Start = Start;
		params.End = End;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.SpawnVines
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackAIState_Grab_C::SpawnVines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.SpawnVines");
		
		UForestKaiju_AttackAIState_Grab_C_SpawnVines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.BPShouldEndAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UForestKaiju_AttackAIState_Grab_C::BPShouldEndAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.BPShouldEndAttack");
		
		UForestKaiju_AttackAIState_Grab_C_BPShouldEndAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnTickEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::OnTickEvent(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnTickEvent");
		
		UForestKaiju_AttackAIState_Grab_C_OnTickEvent_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.FailsafeMissingVineRetracts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackAIState_Grab_C::FailsafeMissingVineRetracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.FailsafeMissingVineRetracts");
		
		UForestKaiju_AttackAIState_Grab_C_FailsafeMissingVineRetracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.ExecuteUbergraph_ForestKaiju_AttackAIState_Grab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackAIState_Grab_C::ExecuteUbergraph_ForestKaiju_AttackAIState_Grab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.ExecuteUbergraph_ForestKaiju_AttackAIState_Grab");
		
		UForestKaiju_AttackAIState_Grab_C_ExecuteUbergraph_ForestKaiju_AttackAIState_Grab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForestKaiju_AttackAIState_Grab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForestKaiju_AttackAIState_Grab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C");
		return ptr;
	}

}


