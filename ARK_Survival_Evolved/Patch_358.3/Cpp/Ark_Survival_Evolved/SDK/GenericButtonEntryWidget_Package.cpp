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
	 * 		Name   -> Function GenericButtonEntryWidget.GenericButtonEntryWidget_C.ExecuteUbergraph_GenericButtonEntryWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGenericButtonEntryWidget_C::ExecuteUbergraph_GenericButtonEntryWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericButtonEntryWidget.GenericButtonEntryWidget_C.ExecuteUbergraph_GenericButtonEntryWidget");
		
		UGenericButtonEntryWidget_C_ExecuteUbergraph_GenericButtonEntryWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericButtonEntryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericButtonEntryWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericButtonEntryWidget.GenericButtonEntryWidget_C");
		return ptr;
	}

}


