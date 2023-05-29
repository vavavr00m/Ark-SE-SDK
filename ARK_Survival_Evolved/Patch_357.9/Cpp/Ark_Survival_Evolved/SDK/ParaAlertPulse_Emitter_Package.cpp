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
	 * 		Name   -> Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.Get Alert Radius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AParaAlertPulse_Emitter_C::GetAlertRadius(float* Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.Get Alert Radius");
		
		AParaAlertPulse_Emitter_C_GetAlertRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AParaAlertPulse_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.UserConstructionScript");
		
		AParaAlertPulse_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AParaAlertPulse_Emitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ReceiveBeginPlay");
		
		AParaAlertPulse_Emitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ExecuteUbergraph_ParaAlertPulse_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AParaAlertPulse_Emitter_C::ExecuteUbergraph_ParaAlertPulse_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ExecuteUbergraph_ParaAlertPulse_Emitter");
		
		AParaAlertPulse_Emitter_C_ExecuteUbergraph_ParaAlertPulse_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AParaAlertPulse_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AParaAlertPulse_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C");
		return ptr;
	}

}


