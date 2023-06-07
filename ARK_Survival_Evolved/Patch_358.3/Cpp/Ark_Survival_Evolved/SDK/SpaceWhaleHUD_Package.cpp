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
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText USpaceWhaleHUD_C::Get_HyperdriveValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveValueTextBlock_Text_1");
		
		USpaceWhaleHUD_C_Get_HyperdriveValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Set Progress Bar Foreground Color
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ProgressBarObject                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                LinearColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceWhaleHUD_C::SetProgressBarForegroundColor(class UObject* ProgressBarObject, const struct FLinearColor& LinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Set Progress Bar Foreground Color");
		
		USpaceWhaleHUD_C_SetProgressBarForegroundColor_Params params {};
		params.ProgressBarObject = ProgressBarObject;
		params.LinearColor = LinearColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerBelowProgressBar_Percent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float USpaceWhaleHUD_C::Get_CosmicPowerBelowProgressBar_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerBelowProgressBar_Percent_1");
		
		USpaceWhaleHUD_C_Get_CosmicPowerBelowProgressBar_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText USpaceWhaleHUD_C::Get_CosmicPowerValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerValueTextBlock_Text_1");
		
		USpaceWhaleHUD_C_Get_CosmicPowerValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerAboveProgressBar_Percent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float USpaceWhaleHUD_C::Get_CosmicPowerAboveProgressBar_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerAboveProgressBar_Percent_1");
		
		USpaceWhaleHUD_C_Get_CosmicPowerAboveProgressBar_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveProgressBar_Percent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float USpaceWhaleHUD_C::Get_HyperdriveProgressBar_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveProgressBar_Percent_1");
		
		USpaceWhaleHUD_C_Get_HyperdriveProgressBar_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get BombsHintText 0
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText USpaceWhaleHUD_C::GetBombsHintText0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get BombsHintText 0");
		
		USpaceWhaleHUD_C_GetBombsHintText0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.InitFromSpaceWhale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpaceWhale_Character_BP_C*                  SpaceWhaleCharBP                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceWhaleHUD_C::InitFromSpaceWhale(class ASpaceWhale_Character_BP_C* SpaceWhaleCharBP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.InitFromSpaceWhale");
		
		USpaceWhaleHUD_C_InitFromSpaceWhale_Params params {};
		params.SpaceWhaleCharBP = SpaceWhaleCharBP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.StartClosingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifeSpan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceWhaleHUD_C::StartClosingWidget(float NewLifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.StartClosingWidget");
		
		USpaceWhaleHUD_C_StartClosingWidget_Params params {};
		params.NewLifeSpan = NewLifeSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.DestroyHudWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpaceWhaleHUD_C::DestroyHudWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.DestroyHudWidget");
		
		USpaceWhaleHUD_C_DestroyHudWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.ResetHudWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpaceWhaleHUD_C::ResetHudWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.ResetHudWidget");
		
		USpaceWhaleHUD_C_ResetHudWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceWhaleHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Tick");
		
		USpaceWhaleHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.Construct
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpaceWhaleHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Construct");
		
		USpaceWhaleHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleHUD.SpaceWhaleHUD_C.ExecuteUbergraph_SpaceWhaleHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceWhaleHUD_C::ExecuteUbergraph_SpaceWhaleHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.ExecuteUbergraph_SpaceWhaleHUD");
		
		USpaceWhaleHUD_C_ExecuteUbergraph_SpaceWhaleHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceWhaleHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceWhaleHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpaceWhaleHUD.SpaceWhaleHUD_C");
		return ptr;
	}

}


