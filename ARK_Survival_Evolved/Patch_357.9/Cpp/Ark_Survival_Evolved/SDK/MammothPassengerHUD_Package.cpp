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
	 * 		Name   -> Function MammothPassengerHUD.MammothPassengerHUD_C.Receive Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMammothPassengerHUD_C::ReceiveInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.Receive Input");
		
		UMammothPassengerHUD_C_ReceiveInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MammothPassengerHUD.MammothPassengerHUD_C.Sync Minigame Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NextTimeOut                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatWindow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatTimeOut                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatExitWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  BeatWidgetIcon                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMammothPassengerHUD_C::SyncMinigameWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, float BeatExitWidth, class UTexture2D* BeatWidgetIcon, bool UseDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.Sync Minigame Widget");
		
		UMammothPassengerHUD_C_SyncMinigameWidget_Params params {};
		params.NextTimeOut = NextTimeOut;
		params.BeatWindow = BeatWindow;
		params.BeatTimeOut = BeatTimeOut;
		params.BeatExitWidth = BeatExitWidth;
		params.BeatWidgetIcon = BeatWidgetIcon;
		params.UseDebugMode = UseDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MammothPassengerHUD.MammothPassengerHUD_C.Initialize HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_MammothDrummer_C*                      MammothDrummerBuff                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMammothPassengerHUD_C::InitializeHUDWidget(class ABuff_MammothDrummer_C* MammothDrummerBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.Initialize HUD Widget");
		
		UMammothPassengerHUD_C_InitializeHUDWidget_Params params {};
		params.MammothDrummerBuff = MammothDrummerBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MammothPassengerHUD.MammothPassengerHUD_C.Reset HUD Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMammothPassengerHUD_C::ResetHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.Reset HUD Widget");
		
		UMammothPassengerHUD_C_ResetHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MammothPassengerHUD.MammothPassengerHUD_C.StartClosingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifeSpan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMammothPassengerHUD_C::StartClosingWidget(float NewLifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.StartClosingWidget");
		
		UMammothPassengerHUD_C_StartClosingWidget_Params params {};
		params.NewLifeSpan = NewLifeSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MammothPassengerHUD.MammothPassengerHUD_C.DestroySkiffHudWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMammothPassengerHUD_C::DestroySkiffHudWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.DestroySkiffHudWidget");
		
		UMammothPassengerHUD_C_DestroySkiffHudWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MammothPassengerHUD.MammothPassengerHUD_C.ExecuteUbergraph_MammothPassengerHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMammothPassengerHUD_C::ExecuteUbergraph_MammothPassengerHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.ExecuteUbergraph_MammothPassengerHUD");
		
		UMammothPassengerHUD_C_ExecuteUbergraph_MammothPassengerHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMammothPassengerHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMammothPassengerHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MammothPassengerHUD.MammothPassengerHUD_C");
		return ptr;
	}

}


