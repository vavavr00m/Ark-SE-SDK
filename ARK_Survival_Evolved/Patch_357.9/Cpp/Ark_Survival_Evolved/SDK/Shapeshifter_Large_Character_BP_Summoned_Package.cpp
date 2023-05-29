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
	 * 		Name   -> Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_Summoned_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.Initialize");
		
		AShapeshifter_Large_Character_BP_Summoned_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.BPOverrideTamingDescriptionLabel
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 TextColor                                                  (Parm, OutParm, ReferenceParm)
	 */
	class FString AShapeshifter_Large_Character_BP_Summoned_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.BPOverrideTamingDescriptionLabel");
		
		AShapeshifter_Large_Character_BP_Summoned_C_BPOverrideTamingDescriptionLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextColor != nullptr)
			*TextColor = params.TextColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.TrySet Collision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_Summoned_C::TrySetCollision(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.TrySet Collision");
		
		AShapeshifter_Large_Character_BP_Summoned_C_TrySetCollision_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_Summoned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.UserConstructionScript");
		
		AShapeshifter_Large_Character_BP_Summoned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_Summoned_C::ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned");
		
		AShapeshifter_Large_Character_BP_Summoned_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShapeshifter_Large_Character_BP_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShapeshifter_Large_Character_BP_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C");
		return ptr;
	}

}


