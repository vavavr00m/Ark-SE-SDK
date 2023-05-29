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
	 * 		Name   -> Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Notify Minigame Ready
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingBeatWidget_C::NotifyMinigameReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Notify Minigame Ready");
		
		UStriderHackingBeatWidget_C_NotifyMinigameReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.UpdateGlyphTextures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Glyph0_Top                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Glyph1_TopMiddle                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Glyph2_Middle                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Glyph3_MiddleBottom                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Glyph4_Bottom                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingBeatWidget_C::UpdateGlyphTextures(class UTexture2D* Glyph0_Top, class UTexture2D* Glyph1_TopMiddle, class UTexture2D* Glyph2_Middle, class UTexture2D* Glyph3_MiddleBottom, class UTexture2D* Glyph4_Bottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.UpdateGlyphTextures");
		
		UStriderHackingBeatWidget_C_UpdateGlyphTextures_Params params {};
		params.Glyph0_Top = Glyph0_Top;
		params.Glyph1_TopMiddle = Glyph1_TopMiddle;
		params.Glyph2_Middle = Glyph2_Middle;
		params.Glyph3_MiddleBottom = Glyph3_MiddleBottom;
		params.Glyph4_Bottom = Glyph4_Bottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingBeatWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Tick");
		
		UStriderHackingBeatWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Construct
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingBeatWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Construct");
		
		UStriderHackingBeatWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.ExecuteUbergraph_StriderHackingBeatWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingBeatWidget_C::ExecuteUbergraph_StriderHackingBeatWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.ExecuteUbergraph_StriderHackingBeatWidget");
		
		UStriderHackingBeatWidget_C_ExecuteUbergraph_StriderHackingBeatWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStriderHackingBeatWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStriderHackingBeatWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StriderHackingBeatWidget.StriderHackingBeatWidget_C");
		return ptr;
	}

}


