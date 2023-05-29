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
	 * 		Name   -> Function ServerChatMessage.ServerChatMessage_C.ExecuteUbergraph_ServerChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UServerChatMessage_C::ExecuteUbergraph_ServerChatMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerChatMessage.ServerChatMessage_C.ExecuteUbergraph_ServerChatMessage");
		
		UServerChatMessage_C_ExecuteUbergraph_ServerChatMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerChatMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerChatMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerChatMessage.ServerChatMessage_C");
		return ptr;
	}

}


