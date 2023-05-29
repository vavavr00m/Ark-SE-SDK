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
	 * 		Name   -> Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_TekSuit_Gen2_Cosmetic_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.AllowPostProcessEffect");
		
		ABuff_TekSuit_Gen2_Cosmetic_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekSuit_Gen2_Cosmetic_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.BuffTickClient");
		
		ABuff_TekSuit_Gen2_Cosmetic_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekSuit_Gen2_Cosmetic_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.UserConstructionScript");
		
		ABuff_TekSuit_Gen2_Cosmetic_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekSuit_Gen2_Cosmetic_C::ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic");
		
		ABuff_TekSuit_Gen2_Cosmetic_C_ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekSuit_Gen2_Cosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekSuit_Gen2_Cosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C");
		return ptr;
	}

}


