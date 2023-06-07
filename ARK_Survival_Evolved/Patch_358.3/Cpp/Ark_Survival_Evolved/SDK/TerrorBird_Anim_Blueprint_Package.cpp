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
	 * 		Name   -> Function TerrorBird_Anim_Blueprint.TerrorBird_Anim_Blueprint_C.ExecuteUbergraph_TerrorBird_Anim_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTerrorBird_Anim_Blueprint_C::ExecuteUbergraph_TerrorBird_Anim_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TerrorBird_Anim_Blueprint.TerrorBird_Anim_Blueprint_C.ExecuteUbergraph_TerrorBird_Anim_Blueprint");
		
		UTerrorBird_Anim_Blueprint_C_ExecuteUbergraph_TerrorBird_Anim_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorBird_Anim_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorBird_Anim_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TerrorBird_Anim_Blueprint.TerrorBird_Anim_Blueprint_C");
		return ptr;
	}

}


