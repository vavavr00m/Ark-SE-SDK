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
	 * 		Name   -> Function Scorpion_Anim_Blueprint.Scorpion_Anim_Blueprint_C.ExecuteUbergraph_Scorpion_Anim_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScorpion_Anim_Blueprint_C::ExecuteUbergraph_Scorpion_Anim_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scorpion_Anim_Blueprint.Scorpion_Anim_Blueprint_C.ExecuteUbergraph_Scorpion_Anim_Blueprint");
		
		UScorpion_Anim_Blueprint_C_ExecuteUbergraph_Scorpion_Anim_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScorpion_Anim_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScorpion_Anim_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Scorpion_Anim_Blueprint.Scorpion_Anim_Blueprint_C");
		return ptr;
	}

}


