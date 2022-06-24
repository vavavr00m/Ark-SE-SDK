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
	 * 		Name   -> Function DataListButton_HostSession.DataListButton_HostSession_C.ExecuteUbergraph_DataListButton_HostSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListButton_HostSession_C::ExecuteUbergraph_DataListButton_HostSession(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DataListButton_HostSession.DataListButton_HostSession_C.ExecuteUbergraph_DataListButton_HostSession");
		
		UDataListButton_HostSession_C_ExecuteUbergraph_DataListButton_HostSession_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDataListButton_HostSession_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListButton_HostSession_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListButton_HostSession.DataListButton_HostSession_C");
		return ptr;
	}

}


