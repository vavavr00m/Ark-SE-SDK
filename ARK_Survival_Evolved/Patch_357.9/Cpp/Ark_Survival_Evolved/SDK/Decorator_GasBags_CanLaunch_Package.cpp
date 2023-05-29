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
	 * 		Name   -> Function Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_GasBags_CanLaunch_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C.ReceiveConditionCheck");
		
		UDecorator_GasBags_CanLaunch_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C.ExecuteUbergraph_Decorator_GasBags_CanLaunch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_GasBags_CanLaunch_C::ExecuteUbergraph_Decorator_GasBags_CanLaunch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C.ExecuteUbergraph_Decorator_GasBags_CanLaunch");
		
		UDecorator_GasBags_CanLaunch_C_ExecuteUbergraph_Decorator_GasBags_CanLaunch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecorator_GasBags_CanLaunch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecorator_GasBags_CanLaunch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C");
		return ptr;
	}

}


