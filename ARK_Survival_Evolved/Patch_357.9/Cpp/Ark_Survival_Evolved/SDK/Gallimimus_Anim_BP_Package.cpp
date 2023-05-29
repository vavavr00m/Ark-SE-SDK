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
	 * 		Name   -> Function Gallimimus_Anim_BP.Gallimimus_Anim_BP_C.ExecuteUbergraph_Gallimimus_Anim_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGallimimus_Anim_BP_C::ExecuteUbergraph_Gallimimus_Anim_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gallimimus_Anim_BP.Gallimimus_Anim_BP_C.ExecuteUbergraph_Gallimimus_Anim_BP");
		
		UGallimimus_Anim_BP_C_ExecuteUbergraph_Gallimimus_Anim_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGallimimus_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGallimimus_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Gallimimus_Anim_BP.Gallimimus_Anim_BP_C");
		return ptr;
	}

}


