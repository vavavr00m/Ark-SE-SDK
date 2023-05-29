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
	 * 		Name   -> Function Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeco_FKWyvernCheckIfLandAndLeave_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C.ReceiveConditionCheck");
		
		UDeco_FKWyvernCheckIfLandAndLeave_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C.ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeco_FKWyvernCheckIfLandAndLeave_C::ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C.ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave");
		
		UDeco_FKWyvernCheckIfLandAndLeave_C_ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeco_FKWyvernCheckIfLandAndLeave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeco_FKWyvernCheckIfLandAndLeave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C");
		return ptr;
	}

}


