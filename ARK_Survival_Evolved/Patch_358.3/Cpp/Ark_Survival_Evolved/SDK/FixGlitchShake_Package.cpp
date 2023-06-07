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
	 * 		Name   -> Function FixGlitchShake.FixGlitchShake_C.ExecuteUbergraph_FixGlitchShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFixGlitchShake_C::ExecuteUbergraph_FixGlitchShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixGlitchShake.FixGlitchShake_C.ExecuteUbergraph_FixGlitchShake");
		
		UFixGlitchShake_C_ExecuteUbergraph_FixGlitchShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixGlitchShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixGlitchShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FixGlitchShake.FixGlitchShake_C");
		return ptr;
	}

}


