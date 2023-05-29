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
	 * 		Name   -> Function Task_StunForestKaiju.Task_StunForestKaiju_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_StunForestKaiju_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_StunForestKaiju.Task_StunForestKaiju_C.ReceiveExecute");
		
		UTask_StunForestKaiju_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_StunForestKaiju.Task_StunForestKaiju_C.ExecuteUbergraph_Task_StunForestKaiju
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_StunForestKaiju_C::ExecuteUbergraph_Task_StunForestKaiju(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_StunForestKaiju.Task_StunForestKaiju_C.ExecuteUbergraph_Task_StunForestKaiju");
		
		UTask_StunForestKaiju_C_ExecuteUbergraph_Task_StunForestKaiju_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_StunForestKaiju_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_StunForestKaiju_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_StunForestKaiju.Task_StunForestKaiju_C");
		return ptr;
	}

}


