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
	 * 		Name   -> Function BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBT_DinoIsTooFarFromTarget_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C.ReceiveConditionCheck");
		
		UBT_DinoIsTooFarFromTarget_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C.ExecuteUbergraph_BT_DinoIsTooFarFromTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBT_DinoIsTooFarFromTarget_C::ExecuteUbergraph_BT_DinoIsTooFarFromTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C.ExecuteUbergraph_BT_DinoIsTooFarFromTarget");
		
		UBT_DinoIsTooFarFromTarget_C_ExecuteUbergraph_BT_DinoIsTooFarFromTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBT_DinoIsTooFarFromTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBT_DinoIsTooFarFromTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C");
		return ptr;
	}

}


