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
	 * 		Name   -> Function Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThylaco_CanPounceOnTargetFromTree_DK_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C.ReceiveConditionCheck");
		
		UThylaco_CanPounceOnTargetFromTree_DK_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C.ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThylaco_CanPounceOnTargetFromTree_DK_C::ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C.ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK");
		
		UThylaco_CanPounceOnTargetFromTree_DK_C_ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThylaco_CanPounceOnTargetFromTree_DK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThylaco_CanPounceOnTargetFromTree_DK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C");
		return ptr;
	}

}


