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
	 * 		Name   -> Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AHesperornis_AIController_BP_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.BPGetTargetingDesire");
		
		AHesperornis_AIController_BP_C_BPGetTargetingDesire_Params params {};
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
	 * 		Name   -> Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.UserConstructionScript");
		
		AHesperornis_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.ExecuteUbergraph_Hesperornis_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_AIController_BP_C::ExecuteUbergraph_Hesperornis_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.ExecuteUbergraph_Hesperornis_AIController_BP");
		
		AHesperornis_AIController_BP_C_ExecuteUbergraph_Hesperornis_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHesperornis_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHesperornis_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hesperornis_AIController_BP.Hesperornis_AIController_BP_C");
		return ptr;
	}

}


