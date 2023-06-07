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
	 * 		Name   -> Function WeapTaxidermyTool.WeapTaxidermyTool_C.BPGetSelectedMeleeAttackAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FWeaponAnim AWeapTaxidermyTool_C::BPGetSelectedMeleeAttackAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTaxidermyTool.WeapTaxidermyTool_C.BPGetSelectedMeleeAttackAnim");
		
		AWeapTaxidermyTool_C_BPGetSelectedMeleeAttackAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTaxidermyTool.WeapTaxidermyTool_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTaxidermyTool_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTaxidermyTool.WeapTaxidermyTool_C.UserConstructionScript");
		
		AWeapTaxidermyTool_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapTaxidermyTool.WeapTaxidermyTool_C.ExecuteUbergraph_WeapTaxidermyTool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTaxidermyTool_C::ExecuteUbergraph_WeapTaxidermyTool(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTaxidermyTool.WeapTaxidermyTool_C.ExecuteUbergraph_WeapTaxidermyTool");
		
		AWeapTaxidermyTool_C_ExecuteUbergraph_WeapTaxidermyTool_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTaxidermyTool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTaxidermyTool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTaxidermyTool.WeapTaxidermyTool_C");
		return ptr;
	}

}


