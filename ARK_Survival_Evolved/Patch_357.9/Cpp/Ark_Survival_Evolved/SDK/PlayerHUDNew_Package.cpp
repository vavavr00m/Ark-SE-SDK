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
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.SetElementBarBoostIconHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHidden                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUDNew_C::SetElementBarBoostIconHidden(bool isHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.SetElementBarBoostIconHidden");
		
		UPlayerHUDNew_C_SetElementBarBoostIconHidden_Params params {};
		params.isHidden = isHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.ExecuteUbergraph_PlayerHUDNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUDNew_C::ExecuteUbergraph_PlayerHUDNew(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.ExecuteUbergraph_PlayerHUDNew");
		
		UPlayerHUDNew_C_ExecuteUbergraph_PlayerHUDNew_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHUDNew_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHUDNew_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHUDNew.PlayerHUDNew_C");
		return ptr;
	}

}


