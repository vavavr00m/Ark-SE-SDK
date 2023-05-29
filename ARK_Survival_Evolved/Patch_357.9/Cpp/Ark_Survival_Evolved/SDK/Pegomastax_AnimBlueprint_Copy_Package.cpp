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
	 * 		Name   -> Function Pegomastax_AnimBlueprint_Copy.Pegomastax_AnimBlueprint_Copy_C.ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPegomastax_AnimBlueprint_Copy_C::ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_AnimBlueprint_Copy.Pegomastax_AnimBlueprint_Copy_C.ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy");
		
		UPegomastax_AnimBlueprint_Copy_C_ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPegomastax_AnimBlueprint_Copy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPegomastax_AnimBlueprint_Copy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pegomastax_AnimBlueprint_Copy.Pegomastax_AnimBlueprint_Copy_C");
		return ptr;
	}

}


