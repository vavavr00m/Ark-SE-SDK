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
	 * 		Name   -> Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_BeginLand_Fjordhawk_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveExecute");
		
		UBTT_BeginLand_Fjordhawk_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_BeginLand_Fjordhawk_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveTick");
		
		UBTT_BeginLand_Fjordhawk_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.StartLanding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFjordhawk_Character_BP_C*                   Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AFjordhawk_AIController_BP_C*                Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_BeginLand_Fjordhawk_C::StartLanding(class AFjordhawk_Character_BP_C* Dino, class AFjordhawk_AIController_BP_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.StartLanding");
		
		UBTT_BeginLand_Fjordhawk_C_StartLanding_Params params {};
		params.Dino = Dino;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ExecuteUbergraph_BTT_BeginLand_Fjordhawk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_BeginLand_Fjordhawk_C::ExecuteUbergraph_BTT_BeginLand_Fjordhawk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ExecuteUbergraph_BTT_BeginLand_Fjordhawk");
		
		UBTT_BeginLand_Fjordhawk_C_ExecuteUbergraph_BTT_BeginLand_Fjordhawk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_BeginLand_Fjordhawk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_BeginLand_Fjordhawk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C");
		return ptr;
	}

}


