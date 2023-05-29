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
	 * 		Name   -> Function DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C.ExecuteUbergraph_DataListEnrtyWidgitserverinfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEnrtyWidgitserverinfo_C::ExecuteUbergraph_DataListEnrtyWidgitserverinfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C.ExecuteUbergraph_DataListEnrtyWidgitserverinfo");
		
		UDataListEnrtyWidgitserverinfo_C_ExecuteUbergraph_DataListEnrtyWidgitserverinfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEnrtyWidgitserverinfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEnrtyWidgitserverinfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C");
		return ptr;
	}

}


