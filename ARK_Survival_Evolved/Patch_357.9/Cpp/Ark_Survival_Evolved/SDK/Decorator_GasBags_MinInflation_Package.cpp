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
	 * 		Name   -> Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.GetMaxInflation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxInflation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_GasBags_MinInflation_C::GetMaxInflation(class AActor* Controller, float* MaxInflation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.GetMaxInflation");
		
		UDecorator_GasBags_MinInflation_C_GetMaxInflation_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxInflation != nullptr)
			*MaxInflation = params.MaxInflation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_GasBags_MinInflation_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ReceiveConditionCheck");
		
		UDecorator_GasBags_MinInflation_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ExecuteUbergraph_Decorator_GasBags_MinInflation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_GasBags_MinInflation_C::ExecuteUbergraph_Decorator_GasBags_MinInflation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ExecuteUbergraph_Decorator_GasBags_MinInflation");
		
		UDecorator_GasBags_MinInflation_C_ExecuteUbergraph_Decorator_GasBags_MinInflation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecorator_GasBags_MinInflation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecorator_GasBags_MinInflation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C");
		return ptr;
	}

}


