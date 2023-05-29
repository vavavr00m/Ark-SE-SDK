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
	 * 		Name   -> Function BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_BeginFly_Fjordhawk_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C.ReceiveExecute");
		
		UBTT_BeginFly_Fjordhawk_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C.ExecuteUbergraph_BTT_BeginFly_Fjordhawk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_BeginFly_Fjordhawk_C::ExecuteUbergraph_BTT_BeginFly_Fjordhawk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C.ExecuteUbergraph_BTT_BeginFly_Fjordhawk");
		
		UBTT_BeginFly_Fjordhawk_C_ExecuteUbergraph_BTT_BeginFly_Fjordhawk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_BeginFly_Fjordhawk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_BeginFly_Fjordhawk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C");
		return ptr;
	}

}


