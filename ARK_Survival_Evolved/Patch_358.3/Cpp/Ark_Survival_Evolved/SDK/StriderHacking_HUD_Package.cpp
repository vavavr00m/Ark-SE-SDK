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
	 * 		Name   -> Function StriderHacking_HUD.StriderHacking_HUD_C.Try Trigger Win
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHacking_HUD_C::TryTriggerWin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Try Trigger Win");
		
		UStriderHacking_HUD_C_TryTriggerWin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHacking_HUD.StriderHacking_HUD_C.Receive Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHacking_HUD_C::ReceiveInput(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Receive Input");
		
		UStriderHacking_HUD_C_ReceiveInput_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHacking_HUD.StriderHacking_HUD_C.Sync Minigame Widget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NextTimeOut                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatWindow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatTimeOut                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            BeatsPerLoop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsShuttingDown                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                PostProcessInputColorParam                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHacking_HUD_C::SyncMinigameWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, int32_t BeatsPerLoop, bool IsShuttingDown, struct FLinearColor* PostProcessInputColorParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Sync Minigame Widget");
		
		UStriderHacking_HUD_C_SyncMinigameWidget_Params params {};
		params.NextTimeOut = NextTimeOut;
		params.BeatWindow = BeatWindow;
		params.BeatTimeOut = BeatTimeOut;
		params.BeatsPerLoop = BeatsPerLoop;
		params.IsShuttingDown = IsShuttingDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PostProcessInputColorParam != nullptr)
			*PostProcessInputColorParam = params.PostProcessInputColorParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHacking_HUD.StriderHacking_HUD_C.Initialize HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHacking_HUD_C::InitializeHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Initialize HUD Widget");
		
		UStriderHacking_HUD_C_InitializeHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHacking_HUD.StriderHacking_HUD_C.Reset HUD Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHacking_HUD_C::ResetHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Reset HUD Widget");
		
		UStriderHacking_HUD_C_ResetHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHacking_HUD.StriderHacking_HUD_C.StartClosingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifeSpan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHacking_HUD_C::StartClosingWidget(float NewLifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.StartClosingWidget");
		
		UStriderHacking_HUD_C_StartClosingWidget_Params params {};
		params.NewLifeSpan = NewLifeSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHacking_HUD.StriderHacking_HUD_C.DestroyWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHacking_HUD_C::DestroyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.DestroyWidget");
		
		UStriderHacking_HUD_C_DestroyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHacking_HUD.StriderHacking_HUD_C.ExecuteUbergraph_StriderHacking_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHacking_HUD_C::ExecuteUbergraph_StriderHacking_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.ExecuteUbergraph_StriderHacking_HUD");
		
		UStriderHacking_HUD_C_ExecuteUbergraph_StriderHacking_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStriderHacking_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStriderHacking_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StriderHacking_HUD.StriderHacking_HUD_C");
		return ptr;
	}

}


