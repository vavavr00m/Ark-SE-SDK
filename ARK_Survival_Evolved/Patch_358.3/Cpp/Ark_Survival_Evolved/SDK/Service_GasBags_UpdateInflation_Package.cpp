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
	 * 		Name   -> Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_GasBags_UpdateInflation_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ReceiveTick");
		
		UService_GasBags_UpdateInflation_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ExecuteUbergraph_Service_GasBags_UpdateInflation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_GasBags_UpdateInflation_C::ExecuteUbergraph_Service_GasBags_UpdateInflation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ExecuteUbergraph_Service_GasBags_UpdateInflation");
		
		UService_GasBags_UpdateInflation_C_ExecuteUbergraph_Service_GasBags_UpdateInflation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UService_GasBags_UpdateInflation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UService_GasBags_UpdateInflation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C");
		return ptr;
	}

}


