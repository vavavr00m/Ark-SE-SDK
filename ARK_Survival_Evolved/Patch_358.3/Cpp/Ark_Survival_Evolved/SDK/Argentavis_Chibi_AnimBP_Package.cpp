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
	 * 		Name   -> Function Argentavis_Chibi_AnimBP.Argentavis_Chibi_AnimBP_C.ExecuteUbergraph_Argentavis_Chibi_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UArgentavis_Chibi_AnimBP_C::ExecuteUbergraph_Argentavis_Chibi_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argentavis_Chibi_AnimBP.Argentavis_Chibi_AnimBP_C.ExecuteUbergraph_Argentavis_Chibi_AnimBP");
		
		UArgentavis_Chibi_AnimBP_C_ExecuteUbergraph_Argentavis_Chibi_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArgentavis_Chibi_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArgentavis_Chibi_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Argentavis_Chibi_AnimBP.Argentavis_Chibi_AnimBP_C");
		return ptr;
	}

}


