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
	 * 		Name   -> Function GetRandomPointOnGround.GetRandomPointOnGround_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetRandomPointOnGround_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetRandomPointOnGround.GetRandomPointOnGround_C.ReceiveExecute");
		
		UGetRandomPointOnGround_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GetRandomPointOnGround.GetRandomPointOnGround_C.ExecuteUbergraph_GetRandomPointOnGround
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetRandomPointOnGround_C::ExecuteUbergraph_GetRandomPointOnGround(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetRandomPointOnGround.GetRandomPointOnGround_C.ExecuteUbergraph_GetRandomPointOnGround");
		
		UGetRandomPointOnGround_C_ExecuteUbergraph_GetRandomPointOnGround_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetRandomPointOnGround_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetRandomPointOnGround_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GetRandomPointOnGround.GetRandomPointOnGround_C");
		return ptr;
	}

}


