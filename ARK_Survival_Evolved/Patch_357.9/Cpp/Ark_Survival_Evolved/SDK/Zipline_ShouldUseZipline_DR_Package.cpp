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
	 * 		Name   -> Function Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZipline_ShouldUseZipline_DR_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C.ReceiveConditionCheck");
		
		UZipline_ShouldUseZipline_DR_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C.ExecuteUbergraph_Zipline_ShouldUseZipline_DR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZipline_ShouldUseZipline_DR_C::ExecuteUbergraph_Zipline_ShouldUseZipline_DR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C.ExecuteUbergraph_Zipline_ShouldUseZipline_DR");
		
		UZipline_ShouldUseZipline_DR_C_ExecuteUbergraph_Zipline_ShouldUseZipline_DR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZipline_ShouldUseZipline_DR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZipline_ShouldUseZipline_DR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C");
		return ptr;
	}

}


