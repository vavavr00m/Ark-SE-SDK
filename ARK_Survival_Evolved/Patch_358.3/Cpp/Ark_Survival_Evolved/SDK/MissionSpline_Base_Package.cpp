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
	 * 		Name   -> Function MissionSpline_Base.MissionSpline_Base_C.ActivateParticlesBetweenLocations
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Finish                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionSpline_Base_C::ActivateParticlesBetweenLocations(const struct FVector& Start, const struct FVector& Finish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ActivateParticlesBetweenLocations");
		
		AMissionSpline_Base_C_ActivateParticlesBetweenLocations_Params params {};
		params.Start = Start;
		params.Finish = Finish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionSpline_Base.MissionSpline_Base_C.ClearParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionSpline_Base_C::ClearParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ClearParticles");
		
		AMissionSpline_Base_C_ClearParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionSpline_Base.MissionSpline_Base_C.UpdateSpline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionSpline_Base_C::UpdateSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.UpdateSpline");
		
		AMissionSpline_Base_C_UpdateSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionSpline_Base.MissionSpline_Base_C.MakeSpline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionSpline_Base_C::MakeSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.MakeSpline");
		
		AMissionSpline_Base_C_MakeSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionSpline_Base.MissionSpline_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionSpline_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.UserConstructionScript");
		
		AMissionSpline_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionSpline_Base.MissionSpline_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionSpline_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ReceiveBeginPlay");
		
		AMissionSpline_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionSpline_Base.MissionSpline_Base_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionSpline_Base_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ReceiveTick");
		
		AMissionSpline_Base_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionSpline_Base.MissionSpline_Base_C.ExecuteUbergraph_MissionSpline_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionSpline_Base_C::ExecuteUbergraph_MissionSpline_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ExecuteUbergraph_MissionSpline_Base");
		
		AMissionSpline_Base_C_ExecuteUbergraph_MissionSpline_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionSpline_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionSpline_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionSpline_Base.MissionSpline_Base_C");
		return ptr;
	}

}


