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
	 * 		Name   -> Function Saber_Character_BP.Saber_Character_BP_C.BPModifyHarvestingQuantity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              originalQuantity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      resourceSelected                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASaber_Character_BP_C::BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saber_Character_BP.Saber_Character_BP_C.BPModifyHarvestingQuantity");
		
		ASaber_Character_BP_C_BPModifyHarvestingQuantity_Params params {};
		params.originalQuantity = originalQuantity;
		params.resourceSelected = resourceSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Saber_Character_BP.Saber_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaber_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saber_Character_BP.Saber_Character_BP_C.UserConstructionScript");
		
		ASaber_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Saber_Character_BP.Saber_Character_BP_C.ExecuteUbergraph_Saber_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaber_Character_BP_C::ExecuteUbergraph_Saber_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saber_Character_BP.Saber_Character_BP_C.ExecuteUbergraph_Saber_Character_BP");
		
		ASaber_Character_BP_C_ExecuteUbergraph_Saber_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASaber_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASaber_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Saber_Character_BP.Saber_Character_BP_C");
		return ptr;
	}

}


