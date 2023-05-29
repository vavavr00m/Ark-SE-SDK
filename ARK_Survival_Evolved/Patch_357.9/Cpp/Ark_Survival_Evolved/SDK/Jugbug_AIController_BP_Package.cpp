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
	 * 		Name   -> Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItFly
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AJugbug_AIController_BP_C::MakeItFly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItFly");
		
		AJugbug_AIController_BP_C_MakeItFly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItWalk
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AJugbug_AIController_BP_C::MakeItWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItWalk");
		
		AJugbug_AIController_BP_C_MakeItWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AJugbug_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.UserConstructionScript");
		
		AJugbug_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AJugbug_AIController_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveTick");
		
		AJugbug_AIController_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AJugbug_AIController_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveBeginPlay");
		
		AJugbug_AIController_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ExecuteUbergraph_Jugbug_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AJugbug_AIController_BP_C::ExecuteUbergraph_Jugbug_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ExecuteUbergraph_Jugbug_AIController_BP");
		
		AJugbug_AIController_BP_C_ExecuteUbergraph_Jugbug_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AJugbug_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJugbug_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Jugbug_AIController_BP.Jugbug_AIController_BP_C");
		return ptr;
	}

}


