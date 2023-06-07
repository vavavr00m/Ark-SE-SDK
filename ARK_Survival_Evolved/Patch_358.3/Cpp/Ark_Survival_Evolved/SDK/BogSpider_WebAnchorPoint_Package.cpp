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
	 * 		Name   -> Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.IsAnchorVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_WebAnchorPoint_C::IsAnchorVisible(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.IsAnchorVisible");
		
		ABogSpider_WebAnchorPoint_C_IsAnchorVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorRadiusMult
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              mult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_WebAnchorPoint_C::GetAnchorRadiusMult(float* mult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorRadiusMult");
		
		ABogSpider_WebAnchorPoint_C_GetAnchorRadiusMult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mult != nullptr)
			*mult = params.mult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_WebAnchorPoint_C::GetAnchorColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorColor");
		
		ABogSpider_WebAnchorPoint_C_GetAnchorColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorRadius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_WebAnchorPoint_C::SetAnchorRadius(float NewRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorRadius");
		
		ABogSpider_WebAnchorPoint_C_SetAnchorRadius_Params params {};
		params.NewRadius = NewRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_WebAnchorPoint_C::SetAnchorVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorVisibility");
		
		ABogSpider_WebAnchorPoint_C_SetAnchorVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                WithColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_WebAnchorPoint_C::SetAnchorColor(const struct FLinearColor& WithColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorColor");
		
		ABogSpider_WebAnchorPoint_C_SetAnchorColor_Params params {};
		params.WithColor = WithColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABogSpider_WebAnchorPoint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.UserConstructionScript");
		
		ABogSpider_WebAnchorPoint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.ExecuteUbergraph_BogSpider_WebAnchorPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABogSpider_WebAnchorPoint_C::ExecuteUbergraph_BogSpider_WebAnchorPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.ExecuteUbergraph_BogSpider_WebAnchorPoint");
		
		ABogSpider_WebAnchorPoint_C_ExecuteUbergraph_BogSpider_WebAnchorPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABogSpider_WebAnchorPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABogSpider_WebAnchorPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C");
		return ptr;
	}

}


