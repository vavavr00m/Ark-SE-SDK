/**
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
	 * 		Name   -> Function SponsoredModsUI.SponsoredModsUI_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USponsoredModsUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SponsoredModsUI.SponsoredModsUI_C.Tick");
		
		USponsoredModsUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function SponsoredModsUI.SponsoredModsUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USponsoredModsUI_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SponsoredModsUI.SponsoredModsUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature");
		
		USponsoredModsUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function SponsoredModsUI.SponsoredModsUI_C.OnClickedObject_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     clickedWidget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USponsoredModsUI_C::OnClickedObject_Event(class UWidget* clickedWidget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SponsoredModsUI.SponsoredModsUI_C.OnClickedObject_Event");
		
		USponsoredModsUI_C_OnClickedObject_Event_Params params {};
		params.clickedWidget = clickedWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function SponsoredModsUI.SponsoredModsUI_C.ExecuteUbergraph_SponsoredModsUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USponsoredModsUI_C::ExecuteUbergraph_SponsoredModsUI(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SponsoredModsUI.SponsoredModsUI_C.ExecuteUbergraph_SponsoredModsUI");
		
		USponsoredModsUI_C_ExecuteUbergraph_SponsoredModsUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USponsoredModsUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USponsoredModsUI_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SponsoredModsUI.SponsoredModsUI_C");
		return ptr;
	}

}


