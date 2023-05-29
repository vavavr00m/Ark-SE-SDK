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
	 * 		Name   -> Function Spindles_Chibi_animBP.Spindles_Chibi_animBP_C.ExecuteUbergraph_Spindles_Chibi_animBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpindles_Chibi_animBP_C::ExecuteUbergraph_Spindles_Chibi_animBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Chibi_animBP.Spindles_Chibi_animBP_C.ExecuteUbergraph_Spindles_Chibi_animBP");
		
		USpindles_Chibi_animBP_C_ExecuteUbergraph_Spindles_Chibi_animBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpindles_Chibi_animBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpindles_Chibi_animBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Spindles_Chibi_animBP.Spindles_Chibi_animBP_C");
		return ptr;
	}

}


