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
	 * 		Name   -> Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPShouldNotifyNeighbor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        neighbor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_AIController_BP_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter* neighbor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPShouldNotifyNeighbor");
		
		ALionfishLion_AIController_BP_C_BPShouldNotifyNeighbor_Params params {};
		params.neighbor = neighbor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPSetupFindTarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_AIController_BP_C::BPSetupFindTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPSetupFindTarget");
		
		ALionfishLion_AIController_BP_C_BPSetupFindTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is night
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ALionfishLion_AIController_BP_C::isnight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is night");
		
		ALionfishLion_AIController_BP_C_isnight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is line of sight blocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_AIController_BP_C::islineofsightblocked(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is line of sight blocked");
		
		ALionfishLion_AIController_BP_C_islineofsightblocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.Check if Viewed by Players
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_AIController_BP_C::CheckifViewedbyPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.Check if Viewed by Players");
		
		ALionfishLion_AIController_BP_C_CheckifViewedbyPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPNotifyTargetSet
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_AIController_BP_C::BPNotifyTargetSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPNotifyTargetSet");
		
		ALionfishLion_AIController_BP_C_BPNotifyTargetSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.UserConstructionScript");
		
		ALionfishLion_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.ExecuteUbergraph_LionfishLion_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_AIController_BP_C::ExecuteUbergraph_LionfishLion_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.ExecuteUbergraph_LionfishLion_AIController_BP");
		
		ALionfishLion_AIController_BP_C_ExecuteUbergraph_LionfishLion_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALionfishLion_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALionfishLion_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLion_AIController_BP.LionfishLion_AIController_BP_C");
		return ptr;
	}

}


