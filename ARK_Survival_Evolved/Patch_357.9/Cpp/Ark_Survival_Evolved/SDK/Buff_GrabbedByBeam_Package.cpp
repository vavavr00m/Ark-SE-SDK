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
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ReceiveSkiffVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BeamStartLoc                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BeamEndLoc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_HoverSkiffBeamState                              BeamState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GrabbedByBeam_C::ReceiveSkiffVars(const struct FVector& BeamStartLoc, const struct FVector& BeamEndLoc, E_HoverSkiffBeamState BeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ReceiveSkiffVars");
		
		ABuff_GrabbedByBeam_C_ReceiveSkiffVars_Params params {};
		params.BeamStartLoc = BeamStartLoc;
		params.BeamEndLoc = BeamEndLoc;
		params.BeamState = BeamState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetBeamCapturePercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GrabbedByBeam_C::GetBeamCapturePercent(float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetBeamCapturePercent");
		
		ABuff_GrabbedByBeam_C_GetBeamCapturePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetOwnerDragWeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_GrabbedByBeam_C::GetOwnerDragWeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetOwnerDragWeight");
		
		ABuff_GrabbedByBeam_C_GetOwnerDragWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetMaxProgress
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MaxProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GrabbedByBeam_C::GetMaxProgress(float* MaxProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetMaxProgress");
		
		ABuff_GrabbedByBeam_C_GetMaxProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxProgress != nullptr)
			*MaxProgress = params.MaxProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.Calculate Progress
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              timeDelta                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GrabbedByBeam_C::CalculateProgress(float timeDelta, float* NewProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.Calculate Progress");
		
		ABuff_GrabbedByBeam_C_CalculateProgress_Params params {};
		params.timeDelta = timeDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewProgress != nullptr)
			*NewProgress = params.NewProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.CalculateBeamProgressDelta
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              timeDelta                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ProgressDelta                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInvalidProgress                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GrabbedByBeam_C::CalculateBeamProgressDelta(float timeDelta, float* ProgressDelta, bool* bInvalidProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.CalculateBeamProgressDelta");
		
		ABuff_GrabbedByBeam_C_CalculateBeamProgressDelta_Params params {};
		params.timeDelta = timeDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProgressDelta != nullptr)
			*ProgressDelta = params.ProgressDelta;
		if (bInvalidProgress != nullptr)
			*bInvalidProgress = params.bInvalidProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.InitializeBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MaxBeamLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GrabbedByBeam_C::InitializeBuff(float MaxBeamLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.InitializeBuff");
		
		ABuff_GrabbedByBeam_C_InitializeBuff_Params params {};
		params.MaxBeamLength = MaxBeamLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.BuffTickServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GrabbedByBeam_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.BuffTickServer");
		
		ABuff_GrabbedByBeam_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_GrabbedByBeam_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.UserConstructionScript");
		
		ABuff_GrabbedByBeam_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ExecuteUbergraph_Buff_GrabbedByBeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GrabbedByBeam_C::ExecuteUbergraph_Buff_GrabbedByBeam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ExecuteUbergraph_Buff_GrabbedByBeam");
		
		ABuff_GrabbedByBeam_C_ExecuteUbergraph_Buff_GrabbedByBeam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_GrabbedByBeam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_GrabbedByBeam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GrabbedByBeam.Buff_GrabbedByBeam_C");
		return ptr;
	}

}


