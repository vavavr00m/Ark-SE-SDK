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
	 * 		Name   -> Function CreditsUI.CreditsUI_C.Construct
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsUI_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.Construct");
		
		UCreditsUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function CreditsUI.CreditsUI_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCreditsUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.Tick");
		
		UCreditsUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function CreditsUI.CreditsUI_C.CloseButtonEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsUI_C::CloseButtonEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.CloseButtonEvent");
		
		UCreditsUI_C_CloseButtonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function CreditsUI.CreditsUI_C.RemovedFromViewport
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsUI_C::RemovedFromViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.RemovedFromViewport");
		
		UCreditsUI_C_RemovedFromViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCreditsUI_C::ExecuteUbergraph_CreditsUI(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI");
		
		UCreditsUI_C_ExecuteUbergraph_CreditsUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCreditsUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreditsUI_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreditsUI.CreditsUI_C");
		return ptr;
	}

}


