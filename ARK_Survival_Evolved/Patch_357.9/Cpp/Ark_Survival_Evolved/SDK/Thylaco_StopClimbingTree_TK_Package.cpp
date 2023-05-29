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
	 * 		Name   -> Function Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThylaco_StopClimbingTree_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C.ReceiveExecute");
		
		UThylaco_StopClimbingTree_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C.ExecuteUbergraph_Thylaco_StopClimbingTree_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThylaco_StopClimbingTree_TK_C::ExecuteUbergraph_Thylaco_StopClimbingTree_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C.ExecuteUbergraph_Thylaco_StopClimbingTree_TK");
		
		UThylaco_StopClimbingTree_TK_C_ExecuteUbergraph_Thylaco_StopClimbingTree_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThylaco_StopClimbingTree_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThylaco_StopClimbingTree_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C");
		return ptr;
	}

}


