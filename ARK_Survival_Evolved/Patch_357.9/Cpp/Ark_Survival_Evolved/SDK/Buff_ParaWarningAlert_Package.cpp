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
	 * 		Name   -> Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.Add Enemy Indicators
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Enemies                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_ParaWarningAlert_C::AddEnemyIndicators(TArray<struct FVector>* Enemies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.Add Enemy Indicators");
		
		ABuff_ParaWarningAlert_C_AddEnemyIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enemies != nullptr)
			*Enemies = params.Enemies;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.BPActivated
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ParaWarningAlert_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.BPActivated");
		
		ABuff_ParaWarningAlert_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ParaWarningAlert_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.UserConstructionScript");
		
		ABuff_ParaWarningAlert_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ClientAddEnemyIndicators
	 * 		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_ParaWarningAlert_C::ClientAddEnemyIndicators(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ClientAddEnemyIndicators");
		
		ABuff_ParaWarningAlert_C_ClientAddEnemyIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ExecuteUbergraph_Buff_ParaWarningAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ParaWarningAlert_C::ExecuteUbergraph_Buff_ParaWarningAlert(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ExecuteUbergraph_Buff_ParaWarningAlert");
		
		ABuff_ParaWarningAlert_C_ExecuteUbergraph_Buff_ParaWarningAlert_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ParaWarningAlert_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ParaWarningAlert_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ParaWarningAlert.Buff_ParaWarningAlert_C");
		return ptr;
	}

}


