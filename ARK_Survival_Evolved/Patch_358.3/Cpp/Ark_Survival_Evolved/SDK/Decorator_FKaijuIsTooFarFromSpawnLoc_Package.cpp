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
	 * 		Name   -> Function Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_FKaijuIsTooFarFromSpawnLoc_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C.ReceiveConditionCheck");
		
		UDecorator_FKaijuIsTooFarFromSpawnLoc_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C.ExecuteUbergraph_Decorator_FKaijuIsTooFarFromSpawnLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_FKaijuIsTooFarFromSpawnLoc_C::ExecuteUbergraph_Decorator_FKaijuIsTooFarFromSpawnLoc(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C.ExecuteUbergraph_Decorator_FKaijuIsTooFarFromSpawnLoc");
		
		UDecorator_FKaijuIsTooFarFromSpawnLoc_C_ExecuteUbergraph_Decorator_FKaijuIsTooFarFromSpawnLoc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecorator_FKaijuIsTooFarFromSpawnLoc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecorator_FKaijuIsTooFarFromSpawnLoc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C");
		return ptr;
	}

}


