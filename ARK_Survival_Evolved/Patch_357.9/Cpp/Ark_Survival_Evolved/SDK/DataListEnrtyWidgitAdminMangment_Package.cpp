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
	 * 		Name   -> Function DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C.ExecuteUbergraph_DataListEnrtyWidgitAdminMangment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEnrtyWidgitAdminMangment_C::ExecuteUbergraph_DataListEnrtyWidgitAdminMangment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C.ExecuteUbergraph_DataListEnrtyWidgitAdminMangment");
		
		UDataListEnrtyWidgitAdminMangment_C_ExecuteUbergraph_DataListEnrtyWidgitAdminMangment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEnrtyWidgitAdminMangment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEnrtyWidgitAdminMangment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C");
		return ptr;
	}

}


