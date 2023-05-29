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
	 * 		Name   -> Function Shapeshifter_Large_Chibi_AnimBP.Shapeshifter_Large_Chibi_AnimBP_C.ExecuteUbergraph_Shapeshifter_Large_Chibi_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShapeshifter_Large_Chibi_AnimBP_C::ExecuteUbergraph_Shapeshifter_Large_Chibi_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Chibi_AnimBP.Shapeshifter_Large_Chibi_AnimBP_C.ExecuteUbergraph_Shapeshifter_Large_Chibi_AnimBP");
		
		UShapeshifter_Large_Chibi_AnimBP_C_ExecuteUbergraph_Shapeshifter_Large_Chibi_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShapeshifter_Large_Chibi_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShapeshifter_Large_Chibi_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Shapeshifter_Large_Chibi_AnimBP.Shapeshifter_Large_Chibi_AnimBP_C");
		return ptr;
	}

}


