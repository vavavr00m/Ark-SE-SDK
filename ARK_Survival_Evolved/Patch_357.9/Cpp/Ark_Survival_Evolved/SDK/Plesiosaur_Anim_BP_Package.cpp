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
	 * 		Name   -> Function Plesiosaur_Anim_BP.Plesiosaur_Anim_BP_C.ExecuteUbergraph_Plesiosaur_Anim_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlesiosaur_Anim_BP_C::ExecuteUbergraph_Plesiosaur_Anim_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Plesiosaur_Anim_BP.Plesiosaur_Anim_BP_C.ExecuteUbergraph_Plesiosaur_Anim_BP");
		
		UPlesiosaur_Anim_BP_C_ExecuteUbergraph_Plesiosaur_Anim_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlesiosaur_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlesiosaur_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Plesiosaur_Anim_BP.Plesiosaur_Anim_BP_C");
		return ptr;
	}

}


