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
	 * 		Name   -> Function GiantTurtleHUD.GiantTurtleHUD_C.Get_AbilityTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UGiantTurtleHUD_C::Get_AbilityTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.Get_AbilityTextBlock_Text_1");
		
		UGiantTurtleHUD_C_Get_AbilityTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtleHUD.GiantTurtleHUD_C.Get_BubbleBreathProgressBar_Percent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float UGiantTurtleHUD_C::Get_BubbleBreathProgressBar_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.Get_BubbleBreathProgressBar_Percent_1");
		
		UGiantTurtleHUD_C_Get_BubbleBreathProgressBar_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtleHUD.GiantTurtleHUD_C.InitFromGiantTurtle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGiantTurtle_Character_BP_C*                 GiantTurtle_Char_BP                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGiantTurtleHUD_C::InitFromGiantTurtle(class AGiantTurtle_Character_BP_C* GiantTurtle_Char_BP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.InitFromGiantTurtle");
		
		UGiantTurtleHUD_C_InitFromGiantTurtle_Params params {};
		params.GiantTurtle_Char_BP = GiantTurtle_Char_BP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtleHUD.GiantTurtleHUD_C.StartClosingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifeSpan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGiantTurtleHUD_C::StartClosingWidget(float NewLifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.StartClosingWidget");
		
		UGiantTurtleHUD_C_StartClosingWidget_Params params {};
		params.NewLifeSpan = NewLifeSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtleHUD.GiantTurtleHUD_C.DestroyHudWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGiantTurtleHUD_C::DestroyHudWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.DestroyHudWidget");
		
		UGiantTurtleHUD_C_DestroyHudWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtleHUD.GiantTurtleHUD_C.ResetHudWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGiantTurtleHUD_C::ResetHudWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.ResetHudWidget");
		
		UGiantTurtleHUD_C_ResetHudWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtleHUD.GiantTurtleHUD_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGiantTurtleHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.Tick");
		
		UGiantTurtleHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtleHUD.GiantTurtleHUD_C.ExecuteUbergraph_GiantTurtleHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGiantTurtleHUD_C::ExecuteUbergraph_GiantTurtleHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.ExecuteUbergraph_GiantTurtleHUD");
		
		UGiantTurtleHUD_C_ExecuteUbergraph_GiantTurtleHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGiantTurtleHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGiantTurtleHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GiantTurtleHUD.GiantTurtleHUD_C");
		return ptr;
	}

}


