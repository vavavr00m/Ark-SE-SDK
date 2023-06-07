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
	 * 		Name   -> Function Dinopithecus_Chibi_AnimBP.Dinopithecus_Chibi_AnimBP_C.ExecuteUbergraph_Dinopithecus_Chibi_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinopithecus_Chibi_AnimBP_C::ExecuteUbergraph_Dinopithecus_Chibi_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Chibi_AnimBP.Dinopithecus_Chibi_AnimBP_C.ExecuteUbergraph_Dinopithecus_Chibi_AnimBP");
		
		UDinopithecus_Chibi_AnimBP_C_ExecuteUbergraph_Dinopithecus_Chibi_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinopithecus_Chibi_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinopithecus_Chibi_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dinopithecus_Chibi_AnimBP.Dinopithecus_Chibi_AnimBP_C");
		return ptr;
	}

}


