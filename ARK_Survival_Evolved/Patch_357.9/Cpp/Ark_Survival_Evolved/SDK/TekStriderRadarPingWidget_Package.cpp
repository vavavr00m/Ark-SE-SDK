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
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTekStriderRadarPingWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Tick");
		
		UTekStriderRadarPingWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetMaterialHostScaleAndLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTekStriderRadarPingWidget_C::SetMaterialHostScaleAndLocation(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetMaterialHostScaleAndLocation");
		
		UTekStriderRadarPingWidget_C_SetMaterialHostScaleAndLocation_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SyncHUDData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTekStriderRadarPingWidget_C::SyncHUDData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SyncHUDData");
		
		UTekStriderRadarPingWidget_C_SyncHUDData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetupDynamicMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTekStriderRadarPingWidget_C::SetupDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetupDynamicMaterial");
		
		UTekStriderRadarPingWidget_C_SetupDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.InitializeHUDWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTekStriderRadarPingWidget_C::InitializeHUDWidget(class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.InitializeHUDWidget");
		
		UTekStriderRadarPingWidget_C_InitializeHUDWidget_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Reset HUD Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTekStriderRadarPingWidget_C::ResetHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Reset HUD Widget");
		
		UTekStriderRadarPingWidget_C_ResetHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.DestroyWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTekStriderRadarPingWidget_C::DestroyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.DestroyWidget");
		
		UTekStriderRadarPingWidget_C_DestroyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.ExecuteUbergraph_TekStriderRadarPingWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTekStriderRadarPingWidget_C::ExecuteUbergraph_TekStriderRadarPingWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.ExecuteUbergraph_TekStriderRadarPingWidget");
		
		UTekStriderRadarPingWidget_C_ExecuteUbergraph_TekStriderRadarPingWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.OnWidgetDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UTekStriderRadarPingWidget_C::OnWidgetDestroyed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.OnWidgetDestroyed__DelegateSignature");
		
		UTekStriderRadarPingWidget_C_OnWidgetDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTekStriderRadarPingWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTekStriderRadarPingWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TekStriderRadarPingWidget.TekStriderRadarPingWidget_C");
		return ptr;
	}

}


