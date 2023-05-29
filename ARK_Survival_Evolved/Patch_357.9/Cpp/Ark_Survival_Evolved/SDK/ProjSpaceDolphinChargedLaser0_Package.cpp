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
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.GetExtraTriggerExplosionOffsetForTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              _return_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjSpaceDolphinChargedLaser0_C::GetExtraTriggerExplosionOffsetForTarget(float* _return_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.GetExtraTriggerExplosionOffsetForTarget");
		
		AProjSpaceDolphinChargedLaser0_C_GetExtraTriggerExplosionOffsetForTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_return_ != nullptr)
			*_return_ = params._return_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjSpaceDolphinChargedLaser0_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveDestroyed");
		
		AProjSpaceDolphinChargedLaser0_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjSpaceDolphinChargedLaser0_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.OnExplode");
		
		AProjSpaceDolphinChargedLaser0_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.BPIgnoreRadialDamageVictim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AProjSpaceDolphinChargedLaser0_C::BPIgnoreRadialDamageVictim(class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.BPIgnoreRadialDamageVictim");
		
		AProjSpaceDolphinChargedLaser0_C_BPIgnoreRadialDamageVictim_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjSpaceDolphinChargedLaser0_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.UserConstructionScript");
		
		AProjSpaceDolphinChargedLaser0_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjSpaceDolphinChargedLaser0_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveTick");
		
		AProjSpaceDolphinChargedLaser0_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjSpaceDolphinChargedLaser0_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveBeginPlay");
		
		AProjSpaceDolphinChargedLaser0_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjSpaceDolphinChargedLaser0_C::ExecuteUbergraph_ProjSpaceDolphinChargedLaser0(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser0");
		
		AProjSpaceDolphinChargedLaser0_C_ExecuteUbergraph_ProjSpaceDolphinChargedLaser0_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjSpaceDolphinChargedLaser0_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjSpaceDolphinChargedLaser0_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C");
		return ptr;
	}

}


