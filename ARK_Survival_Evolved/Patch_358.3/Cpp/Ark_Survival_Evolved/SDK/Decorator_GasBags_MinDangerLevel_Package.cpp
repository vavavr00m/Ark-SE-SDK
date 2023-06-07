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
	 * 		Name   -> Function Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_GasBags_MinDangerLevel_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C.ReceiveConditionCheck");
		
		UDecorator_GasBags_MinDangerLevel_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C.ExecuteUbergraph_Decorator_GasBags_MinDangerLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_GasBags_MinDangerLevel_C::ExecuteUbergraph_Decorator_GasBags_MinDangerLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C.ExecuteUbergraph_Decorator_GasBags_MinDangerLevel");
		
		UDecorator_GasBags_MinDangerLevel_C_ExecuteUbergraph_Decorator_GasBags_MinDangerLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecorator_GasBags_MinDangerLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecorator_GasBags_MinDangerLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C");
		return ptr;
	}

}


