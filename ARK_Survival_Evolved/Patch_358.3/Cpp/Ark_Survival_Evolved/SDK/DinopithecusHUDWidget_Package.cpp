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
	 * 		Name   -> Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.SetHUDText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor)
	 * 		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinopithecusHUDWidget_C::SetHUDText(const class FString& Text, float TimeToFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.SetHUDText");
		
		UDinopithecusHUDWidget_C_SetHUDText_Params params {};
		params.Text = Text;
		params.TimeToFade = TimeToFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Initialize HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinopithecusHUDWidget_C::InitializeHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Initialize HUD Widget");
		
		UDinopithecusHUDWidget_C_InitializeHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Reset HUD Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDinopithecusHUDWidget_C::ResetHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Reset HUD Widget");
		
		UDinopithecusHUDWidget_C_ResetHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.DestroyWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDinopithecusHUDWidget_C::DestroyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.DestroyWidget");
		
		UDinopithecusHUDWidget_C_DestroyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.StartClosingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifeSpan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinopithecusHUDWidget_C::StartClosingWidget(float NewLifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.StartClosingWidget");
		
		UDinopithecusHUDWidget_C_StartClosingWidget_Params params {};
		params.NewLifeSpan = NewLifeSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.ExecuteUbergraph_DinopithecusHUDWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinopithecusHUDWidget_C::ExecuteUbergraph_DinopithecusHUDWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.ExecuteUbergraph_DinopithecusHUDWidget");
		
		UDinopithecusHUDWidget_C_ExecuteUbergraph_DinopithecusHUDWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.OnWidgetDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UDinopithecusHUDWidget_C::OnWidgetDestroyed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.OnWidgetDestroyed__DelegateSignature");
		
		UDinopithecusHUDWidget_C_OnWidgetDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinopithecusHUDWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinopithecusHUDWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinopithecusHUDWidget.DinopithecusHUDWidget_C");
		return ptr;
	}

}


