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
	 * 		Name   -> Function Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_Fjordhawk_UpdateLootTarget_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C.ReceiveTick");
		
		UService_Fjordhawk_UpdateLootTarget_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C.ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_Fjordhawk_UpdateLootTarget_C::ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C.ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget");
		
		UService_Fjordhawk_UpdateLootTarget_C_ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UService_Fjordhawk_UpdateLootTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UService_Fjordhawk_UpdateLootTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C");
		return ptr;
	}

}


