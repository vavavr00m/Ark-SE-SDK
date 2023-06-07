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
	 * 		Name   -> Function BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBT_DinoIsTooCloseToTarget_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C.ReceiveConditionCheck");
		
		UBT_DinoIsTooCloseToTarget_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C.ExecuteUbergraph_BT_DinoIsTooCloseToTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBT_DinoIsTooCloseToTarget_C::ExecuteUbergraph_BT_DinoIsTooCloseToTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C.ExecuteUbergraph_BT_DinoIsTooCloseToTarget");
		
		UBT_DinoIsTooCloseToTarget_C_ExecuteUbergraph_BT_DinoIsTooCloseToTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBT_DinoIsTooCloseToTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBT_DinoIsTooCloseToTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C");
		return ptr;
	}

}


