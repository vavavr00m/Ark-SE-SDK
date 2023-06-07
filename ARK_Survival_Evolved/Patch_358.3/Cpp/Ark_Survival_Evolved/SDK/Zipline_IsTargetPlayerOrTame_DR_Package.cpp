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
	 * 		Name   -> Function Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZipline_IsTargetPlayerOrTame_DR_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C.ReceiveConditionCheck");
		
		UZipline_IsTargetPlayerOrTame_DR_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C.ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZipline_IsTargetPlayerOrTame_DR_C::ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C.ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR");
		
		UZipline_IsTargetPlayerOrTame_DR_C_ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZipline_IsTargetPlayerOrTame_DR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZipline_IsTargetPlayerOrTame_DR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C");
		return ptr;
	}

}


