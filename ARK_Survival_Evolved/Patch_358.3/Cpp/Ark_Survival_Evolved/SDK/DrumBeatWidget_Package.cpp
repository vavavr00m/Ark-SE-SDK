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
	 * 		Name   -> Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Content Opacity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewOpacity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumBeatWidget_C::SetWidgetContentOpacity(float NewOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Content Opacity");
		
		UDrumBeatWidget_C_SetWidgetContentOpacity_Params params {};
		params.NewOpacity = NewOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Coloration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumBeatWidget_C::SetWidgetColoration(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Coloration");
		
		UDrumBeatWidget_C_SetWidgetColoration_Params params {};
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumBeatWidget.DrumBeatWidget_C.ExecuteUbergraph_DrumBeatWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumBeatWidget_C::ExecuteUbergraph_DrumBeatWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumBeatWidget.DrumBeatWidget_C.ExecuteUbergraph_DrumBeatWidget");
		
		UDrumBeatWidget_C_ExecuteUbergraph_DrumBeatWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrumBeatWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrumBeatWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DrumBeatWidget.DrumBeatWidget_C");
		return ptr;
	}

}


