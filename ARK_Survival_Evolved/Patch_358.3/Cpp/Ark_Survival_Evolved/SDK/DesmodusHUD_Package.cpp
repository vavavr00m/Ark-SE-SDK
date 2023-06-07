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
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.ClearString
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesmodusHUD_C::ClearString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.ClearString");
		
		UDesmodusHUD_C_ClearString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.FadeOutHUDString
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDesmodusHUD_C::FadeOutHUDString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.FadeOutHUDString");
		
		UDesmodusHUD_C_FadeOutHUDString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.SetHUDString
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      HudString                                                  (Parm, ZeroConstructor)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TargetOpacity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ColorRed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDesmodusHUD_C::SetHUDString(const class FString& HudString, int32_t Priority, float TargetOpacity, float CurrentOpacity, bool ColorRed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.SetHUDString");
		
		UDesmodusHUD_C_SetHUDString_Params params {};
		params.HudString = HudString;
		params.Priority = Priority;
		params.TargetOpacity = TargetOpacity;
		params.CurrentOpacity = CurrentOpacity;
		params.ColorRed = ColorRed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.Initialize HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesmodusHUD_C::InitializeHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.Initialize HUD Widget");
		
		UDesmodusHUD_C_InitializeHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.Reset HUD Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDesmodusHUD_C::ResetHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.Reset HUD Widget");
		
		UDesmodusHUD_C_ResetHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.DestroyWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDesmodusHUD_C::DestroyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.DestroyWidget");
		
		UDesmodusHUD_C_DestroyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.StartClosingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifeSpan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDesmodusHUD_C::StartClosingWidget(float NewLifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.StartClosingWidget");
		
		UDesmodusHUD_C_StartClosingWidget_Params params {};
		params.NewLifeSpan = NewLifeSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.ExecuteUbergraph_DesmodusHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDesmodusHUD_C::ExecuteUbergraph_DesmodusHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.ExecuteUbergraph_DesmodusHUD");
		
		UDesmodusHUD_C_ExecuteUbergraph_DesmodusHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DesmodusHUD.DesmodusHUD_C.OnWidgetDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UDesmodusHUD_C::OnWidgetDestroyed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.OnWidgetDestroyed__DelegateSignature");
		
		UDesmodusHUD_C_OnWidgetDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesmodusHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesmodusHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DesmodusHUD.DesmodusHUD_C");
		return ptr;
	}

}


