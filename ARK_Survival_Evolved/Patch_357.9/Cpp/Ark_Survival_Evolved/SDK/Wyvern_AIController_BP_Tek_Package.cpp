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
	 * 		Name   -> Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AWyvern_AIController_BP_Tek_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.BPGetTargetingDesire");
		
		AWyvern_AIController_BP_Tek_C_BPGetTargetingDesire_Params params {};
		params.forTarget = forTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_AIController_BP_Tek_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.UserConstructionScript");
		
		AWyvern_AIController_BP_Tek_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.ExecuteUbergraph_Wyvern_AIController_BP_Tek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_AIController_BP_Tek_C::ExecuteUbergraph_Wyvern_AIController_BP_Tek(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.ExecuteUbergraph_Wyvern_AIController_BP_Tek");
		
		AWyvern_AIController_BP_Tek_C_ExecuteUbergraph_Wyvern_AIController_BP_Tek_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvern_AIController_BP_Tek_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvern_AIController_BP_Tek_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C");
		return ptr;
	}

}


