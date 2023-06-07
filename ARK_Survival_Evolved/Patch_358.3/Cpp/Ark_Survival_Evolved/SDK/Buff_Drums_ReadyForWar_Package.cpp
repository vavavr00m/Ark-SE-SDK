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
	 * 		Name   -> Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPCanBeCarried
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ByCarrier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Drums_ReadyForWar_C::BPCanBeCarried(class APrimalCharacter* ByCarrier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPCanBeCarried");
		
		ABuff_Drums_ReadyForWar_C_BPCanBeCarried_Params params {};
		params.ByCarrier = ByCarrier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPInterceptUseAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Drums_ReadyForWar_C::BPInterceptUseAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPInterceptUseAction");
		
		ABuff_Drums_ReadyForWar_C_BPInterceptUseAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Drums_ReadyForWar_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPDeactivated");
		
		ABuff_Drums_ReadyForWar_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Drums_ReadyForWar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.UserConstructionScript");
		
		ABuff_Drums_ReadyForWar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.AllowDismount
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Drums_ReadyForWar_C::AllowDismount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.AllowDismount");
		
		ABuff_Drums_ReadyForWar_C_AllowDismount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.PreventDismount
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Drums_ReadyForWar_C::PreventDismount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.PreventDismount");
		
		ABuff_Drums_ReadyForWar_C_PreventDismount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.ExecuteUbergraph_Buff_Drums_ReadyForWar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Drums_ReadyForWar_C::ExecuteUbergraph_Buff_Drums_ReadyForWar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.ExecuteUbergraph_Buff_Drums_ReadyForWar");
		
		ABuff_Drums_ReadyForWar_C_ExecuteUbergraph_Buff_Drums_ReadyForWar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Drums_ReadyForWar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Drums_ReadyForWar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C");
		return ptr;
	}

}


