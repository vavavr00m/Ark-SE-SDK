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
	 * 		Name   -> Function ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C.Construct
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UExoSuitRtsGamepadHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C.Construct");
		
		UExoSuitRtsGamepadHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C.ExecuteUbergraph_ExoSuitRtsGamepadHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExoSuitRtsGamepadHUD_C::ExecuteUbergraph_ExoSuitRtsGamepadHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C.ExecuteUbergraph_ExoSuitRtsGamepadHUD");
		
		UExoSuitRtsGamepadHUD_C_ExecuteUbergraph_ExoSuitRtsGamepadHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExoSuitRtsGamepadHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExoSuitRtsGamepadHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C");
		return ptr;
	}

}


