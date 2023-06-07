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
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.VineCollisionCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ACharacter*                                  ActorToIgnore                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ACharacter*                                  OtherActorToIgnore                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ForestKaiju_Vine_C::VineCollisionCheck(const struct FVector& Start, const struct FVector& End, class ACharacter* ActorToIgnore, class ACharacter* OtherActorToIgnore, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.VineCollisionCheck");
		
		ABP_ForestKaiju_Vine_C_VineCollisionCheck_Params params {};
		params.Start = Start;
		params.End = End;
		params.ActorToIgnore = ActorToIgnore;
		params.OtherActorToIgnore = OtherActorToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.OnRep_EndVineLocation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ForestKaiju_Vine_C::OnRep_EndVineLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.OnRep_EndVineLocation");
		
		ABP_ForestKaiju_Vine_C_OnRep_EndVineLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.TargetDataContainsTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ForestKaiju_Vine_C::TargetDataContainsTarget(class APrimalCharacter* Target, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.TargetDataContainsTarget");
		
		ABP_ForestKaiju_Vine_C_TargetDataContainsTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.Get Current Vine End Location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     EndPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ForestKaiju_Vine_C::GetCurrentVineEndLocation(struct FVector* EndPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.Get Current Vine End Location");
		
		ABP_ForestKaiju_Vine_C_GetCurrentVineEndLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndPosition != nullptr)
			*EndPosition = params.EndPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetVineTargets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ForestKaiju_Vine_C::GetVineTargets(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetVineTargets");
		
		ABP_ForestKaiju_Vine_C_GetVineTargets_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UpdateVines
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ForestKaiju_Vine_C::UpdateVines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UpdateVines");
		
		ABP_ForestKaiju_Vine_C_UpdateVines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.InitVines
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ForestKaiju_Vine_C::InitVines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.InitVines");
		
		ABP_ForestKaiju_Vine_C_InitVines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ForestKaiju_Vine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveBeginPlay");
		
		ABP_ForestKaiju_Vine_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetAIState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UForestKaiju_AttackAIState_Grab_C*           State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ForestKaiju_Vine_C::GetAIState(class UForestKaiju_AttackAIState_Grab_C** State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetAIState");
		
		ABP_ForestKaiju_Vine_C_GetAIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ForestKaiju_Vine_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveTick");
		
		ABP_ForestKaiju_Vine_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ForestKaiju_Vine_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UserConstructionScript");
		
		ABP_ForestKaiju_Vine_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SERVER_VineReachedGoal
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ForestKaiju_Vine_C::SERVER_VineReachedGoal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SERVER_VineReachedGoal");
		
		ABP_ForestKaiju_Vine_C_SERVER_VineReachedGoal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SetVineStartEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ForestKaiju_Vine_C::SetVineStartEnd(const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SetVineStartEnd");
		
		ABP_ForestKaiju_Vine_C_SetVineStartEnd_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.MULTI_ReplicateTargets
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVineTargetData>                     Targets                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_ForestKaiju_Vine_C::MULTI_ReplicateTargets(TArray<struct FVineTargetData>* Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.MULTI_ReplicateTargets");
		
		ABP_ForestKaiju_Vine_C_MULTI_ReplicateTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Targets != nullptr)
			*Targets = params.Targets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ExecuteUbergraph_BP_ForestKaiju_Vine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ForestKaiju_Vine_C::ExecuteUbergraph_BP_ForestKaiju_Vine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ExecuteUbergraph_BP_ForestKaiju_Vine");
		
		ABP_ForestKaiju_Vine_C_ExecuteUbergraph_BP_ForestKaiju_Vine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ForestKaiju_Vine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ForestKaiju_Vine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C");
		return ptr;
	}

}


