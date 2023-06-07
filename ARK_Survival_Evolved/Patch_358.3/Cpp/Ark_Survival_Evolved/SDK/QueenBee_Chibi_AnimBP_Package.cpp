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
	 * 		Name   -> Function QueenBee_Chibi_AnimBP.QueenBee_Chibi_AnimBP_C.ExecuteUbergraph_QueenBee_Chibi_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQueenBee_Chibi_AnimBP_C::ExecuteUbergraph_QueenBee_Chibi_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QueenBee_Chibi_AnimBP.QueenBee_Chibi_AnimBP_C.ExecuteUbergraph_QueenBee_Chibi_AnimBP");
		
		UQueenBee_Chibi_AnimBP_C_ExecuteUbergraph_QueenBee_Chibi_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQueenBee_Chibi_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQueenBee_Chibi_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass QueenBee_Chibi_AnimBP.QueenBee_Chibi_AnimBP_C");
		return ptr;
	}

}


