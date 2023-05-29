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
	 * 		Name   -> Function TerrorBird_Chibi_AnimBP.TerrorBird_Chibi_AnimBP_C.ExecuteUbergraph_TerrorBird_Chibi_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTerrorBird_Chibi_AnimBP_C::ExecuteUbergraph_TerrorBird_Chibi_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TerrorBird_Chibi_AnimBP.TerrorBird_Chibi_AnimBP_C.ExecuteUbergraph_TerrorBird_Chibi_AnimBP");
		
		UTerrorBird_Chibi_AnimBP_C_ExecuteUbergraph_TerrorBird_Chibi_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorBird_Chibi_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorBird_Chibi_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TerrorBird_Chibi_AnimBP.TerrorBird_Chibi_AnimBP_C");
		return ptr;
	}

}


