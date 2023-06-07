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
	 * 		Name   -> Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.StartMyMission
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           WithPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APointOfInterestBP_MissionStart_C::StartMyMission(class APlayerController* WithPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.StartMyMission");
		
		APointOfInterestBP_MissionStart_C_StartMyMission_Params params {};
		params.WithPC = WithPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanBeViewed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ByActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APointOfInterestBP_MissionStart_C::CanBeViewed(class AActor* ByActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanBeViewed");
		
		APointOfInterestBP_MissionStart_C_CanBeViewed_Params params {};
		params.ByActor = ByActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanPlayerStartMyMission
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APointOfInterestBP_MissionStart_C::CanPlayerStartMyMission(class APlayerController* PC, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanPlayerStartMyMission");
		
		APointOfInterestBP_MissionStart_C_CanPlayerStartMyMission_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> APointOfInterestBP_MissionStart_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPGetMultiUseEntries");
		
		APointOfInterestBP_MissionStart_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APointOfInterestBP_MissionStart_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPTryMultiUse");
		
		APointOfInterestBP_MissionStart_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APointOfInterestBP_MissionStart_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.UserConstructionScript");
		
		APointOfInterestBP_MissionStart_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.ExecuteUbergraph_PointOfInterestBP_MissionStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APointOfInterestBP_MissionStart_C::ExecuteUbergraph_PointOfInterestBP_MissionStart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.ExecuteUbergraph_PointOfInterestBP_MissionStart");
		
		APointOfInterestBP_MissionStart_C_ExecuteUbergraph_PointOfInterestBP_MissionStart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APointOfInterestBP_MissionStart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APointOfInterestBP_MissionStart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C");
		return ptr;
	}

}


