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
	 * 		Name   -> Function SpinoBipedAnimBlueprint.SpinoBipedAnimBlueprint_C.ExecuteUbergraph_SpinoBipedAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpinoBipedAnimBlueprint_C::ExecuteUbergraph_SpinoBipedAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpinoBipedAnimBlueprint.SpinoBipedAnimBlueprint_C.ExecuteUbergraph_SpinoBipedAnimBlueprint");
		
		USpinoBipedAnimBlueprint_C_ExecuteUbergraph_SpinoBipedAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpinoBipedAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpinoBipedAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpinoBipedAnimBlueprint.SpinoBipedAnimBlueprint_C");
		return ptr;
	}

}


