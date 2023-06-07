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
	 * 		Name   -> Function DinoAncestryEntry.DinoAncestryEntry_C.ExecuteUbergraph_DinoAncestryEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAncestryEntry_C::ExecuteUbergraph_DinoAncestryEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAncestryEntry.DinoAncestryEntry_C.ExecuteUbergraph_DinoAncestryEntry");
		
		UDinoAncestryEntry_C_ExecuteUbergraph_DinoAncestryEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAncestryEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAncestryEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinoAncestryEntry.DinoAncestryEntry_C");
		return ptr;
	}

}


