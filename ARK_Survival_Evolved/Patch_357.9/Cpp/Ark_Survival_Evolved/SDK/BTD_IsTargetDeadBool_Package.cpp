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
	 * 		Name   -> Function BTD_IsTargetDeadBool.BTD_IsTargetDeadBool_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTD_IsTargetDeadBool_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTD_IsTargetDeadBool.BTD_IsTargetDeadBool_C.ReceiveConditionCheck");
		
		UBTD_IsTargetDeadBool_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTD_IsTargetDeadBool.BTD_IsTargetDeadBool_C.ExecuteUbergraph_BTD_IsTargetDeadBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTD_IsTargetDeadBool_C::ExecuteUbergraph_BTD_IsTargetDeadBool(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTD_IsTargetDeadBool.BTD_IsTargetDeadBool_C.ExecuteUbergraph_BTD_IsTargetDeadBool");
		
		UBTD_IsTargetDeadBool_C_ExecuteUbergraph_BTD_IsTargetDeadBool_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTD_IsTargetDeadBool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTD_IsTargetDeadBool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTD_IsTargetDeadBool.BTD_IsTargetDeadBool_C");
		return ptr;
	}

}


