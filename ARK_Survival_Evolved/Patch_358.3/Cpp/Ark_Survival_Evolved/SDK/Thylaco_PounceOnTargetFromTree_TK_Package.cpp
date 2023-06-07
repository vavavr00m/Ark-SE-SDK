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
	 * 		Name   -> Function Thylaco_PounceOnTargetFromTree_TK.Thylaco_PounceOnTargetFromTree_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThylaco_PounceOnTargetFromTree_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylaco_PounceOnTargetFromTree_TK.Thylaco_PounceOnTargetFromTree_TK_C.ReceiveExecute");
		
		UThylaco_PounceOnTargetFromTree_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylaco_PounceOnTargetFromTree_TK.Thylaco_PounceOnTargetFromTree_TK_C.ExecuteUbergraph_Thylaco_PounceOnTargetFromTree_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThylaco_PounceOnTargetFromTree_TK_C::ExecuteUbergraph_Thylaco_PounceOnTargetFromTree_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylaco_PounceOnTargetFromTree_TK.Thylaco_PounceOnTargetFromTree_TK_C.ExecuteUbergraph_Thylaco_PounceOnTargetFromTree_TK");
		
		UThylaco_PounceOnTargetFromTree_TK_C_ExecuteUbergraph_Thylaco_PounceOnTargetFromTree_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThylaco_PounceOnTargetFromTree_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThylaco_PounceOnTargetFromTree_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thylaco_PounceOnTargetFromTree_TK.Thylaco_PounceOnTargetFromTree_TK_C");
		return ptr;
	}

}


