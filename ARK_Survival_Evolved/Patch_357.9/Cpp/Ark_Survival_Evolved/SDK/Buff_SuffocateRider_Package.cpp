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
	 * 		Name   -> Function Buff_SuffocateRider.Buff_SuffocateRider_C.BPAdjustStatusValueModification
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             ForComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InAmount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bManualModification                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_SuffocateRider_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent* ForComponent, EPrimalCharacterStatusValue ValueType, float InAmount, class UClass* DamageTypeClass, bool bManualModification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SuffocateRider.Buff_SuffocateRider_C.BPAdjustStatusValueModification");
		
		ABuff_SuffocateRider_C_BPAdjustStatusValueModification_Params params {};
		params.ForComponent = ForComponent;
		params.ValueType = ValueType;
		params.InAmount = InAmount;
		params.DamageTypeClass = DamageTypeClass;
		params.bManualModification = bManualModification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SuffocateRider.Buff_SuffocateRider_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_SuffocateRider_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SuffocateRider.Buff_SuffocateRider_C.BPCheckPreventInput");
		
		ABuff_SuffocateRider_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SuffocateRider.Buff_SuffocateRider_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SuffocateRider_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SuffocateRider.Buff_SuffocateRider_C.UserConstructionScript");
		
		ABuff_SuffocateRider_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SuffocateRider.Buff_SuffocateRider_C.ExecuteUbergraph_Buff_SuffocateRider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SuffocateRider_C::ExecuteUbergraph_Buff_SuffocateRider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SuffocateRider.Buff_SuffocateRider_C.ExecuteUbergraph_Buff_SuffocateRider");
		
		ABuff_SuffocateRider_C_ExecuteUbergraph_Buff_SuffocateRider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_SuffocateRider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SuffocateRider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SuffocateRider.Buff_SuffocateRider_C");
		return ptr;
	}

}


