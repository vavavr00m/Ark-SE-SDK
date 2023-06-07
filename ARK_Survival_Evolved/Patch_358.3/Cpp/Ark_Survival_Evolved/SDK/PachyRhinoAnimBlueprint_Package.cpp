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
	 * 		Name   -> Function PachyRhinoAnimBlueprint.PachyRhinoAnimBlueprint_C.ExecuteUbergraph_PachyRhinoAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPachyRhinoAnimBlueprint_C::ExecuteUbergraph_PachyRhinoAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PachyRhinoAnimBlueprint.PachyRhinoAnimBlueprint_C.ExecuteUbergraph_PachyRhinoAnimBlueprint");
		
		UPachyRhinoAnimBlueprint_C_ExecuteUbergraph_PachyRhinoAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPachyRhinoAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPachyRhinoAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass PachyRhinoAnimBlueprint.PachyRhinoAnimBlueprint_C");
		return ptr;
	}

}


