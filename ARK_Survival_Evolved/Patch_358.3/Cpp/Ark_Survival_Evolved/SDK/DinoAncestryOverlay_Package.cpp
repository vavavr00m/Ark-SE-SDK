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
	 * 		Name   -> Function DinoAncestryOverlay.DinoAncestryOverlay_C.ExecuteUbergraph_DinoAncestryOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAncestryOverlay_C::ExecuteUbergraph_DinoAncestryOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAncestryOverlay.DinoAncestryOverlay_C.ExecuteUbergraph_DinoAncestryOverlay");
		
		UDinoAncestryOverlay_C_ExecuteUbergraph_DinoAncestryOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAncestryOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAncestryOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinoAncestryOverlay.DinoAncestryOverlay_C");
		return ptr;
	}

}


