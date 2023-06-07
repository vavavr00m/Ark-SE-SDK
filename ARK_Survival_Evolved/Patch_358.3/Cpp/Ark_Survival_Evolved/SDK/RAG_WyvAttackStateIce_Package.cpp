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
	 * 		Name   -> Function RAG_WyvAttackStateIce.RAG_WyvAttackStateIce_C.ExecuteUbergraph_RAG_WyvAttackStateIce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URAG_WyvAttackStateIce_C::ExecuteUbergraph_RAG_WyvAttackStateIce(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RAG_WyvAttackStateIce.RAG_WyvAttackStateIce_C.ExecuteUbergraph_RAG_WyvAttackStateIce");
		
		URAG_WyvAttackStateIce_C_ExecuteUbergraph_RAG_WyvAttackStateIce_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URAG_WyvAttackStateIce_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URAG_WyvAttackStateIce_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RAG_WyvAttackStateIce.RAG_WyvAttackStateIce_C");
		return ptr;
	}

}


