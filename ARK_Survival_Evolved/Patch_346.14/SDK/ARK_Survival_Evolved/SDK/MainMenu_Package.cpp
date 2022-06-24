﻿/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function MainMenu.MainMenu_C.K2Node_MatineeController_1_MatineeEvent
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenu_C::K2Node_MatineeController_1_MatineeEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.K2Node_MatineeController_1_MatineeEvent");
		
		AMainMenu_C_K2Node_MatineeController_1_MatineeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function MainMenu.MainMenu_C.K2Node_MatineeController_1_Finished
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenu_C::K2Node_MatineeController_1_Finished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.K2Node_MatineeController_1_Finished");
		
		AMainMenu_C_K2Node_MatineeController_1_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function MainMenu.MainMenu_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveBeginPlay");
		
		AMainMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainMenu_C::ExecuteUbergraph_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");
		
		AMainMenu_C_ExecuteUbergraph_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}

}


