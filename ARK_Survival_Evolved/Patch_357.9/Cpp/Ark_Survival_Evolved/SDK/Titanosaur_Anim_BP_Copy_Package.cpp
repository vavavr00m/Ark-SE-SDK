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
	 * 		Name   -> Function Titanosaur_Anim_BP_Copy.Titanosaur_Anim_BP_Copy_C.ExecuteUbergraph_Titanosaur_Anim_BP_Copy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitanosaur_Anim_BP_Copy_C::ExecuteUbergraph_Titanosaur_Anim_BP_Copy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Titanosaur_Anim_BP_Copy.Titanosaur_Anim_BP_Copy_C.ExecuteUbergraph_Titanosaur_Anim_BP_Copy");
		
		UTitanosaur_Anim_BP_Copy_C_ExecuteUbergraph_Titanosaur_Anim_BP_Copy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitanosaur_Anim_BP_Copy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitanosaur_Anim_BP_Copy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Titanosaur_Anim_BP_Copy.Titanosaur_Anim_BP_Copy_C");
		return ptr;
	}

}


