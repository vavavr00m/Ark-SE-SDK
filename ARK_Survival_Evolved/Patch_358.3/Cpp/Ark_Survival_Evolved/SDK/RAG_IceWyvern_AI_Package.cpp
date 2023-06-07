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
	 * 		Name   -> Function RAG_IceWyvern_AI.RAG_IceWyvern_AI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARAG_IceWyvern_AI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RAG_IceWyvern_AI.RAG_IceWyvern_AI_C.UserConstructionScript");
		
		ARAG_IceWyvern_AI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RAG_IceWyvern_AI.RAG_IceWyvern_AI_C.ExecuteUbergraph_RAG_IceWyvern_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARAG_IceWyvern_AI_C::ExecuteUbergraph_RAG_IceWyvern_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RAG_IceWyvern_AI.RAG_IceWyvern_AI_C.ExecuteUbergraph_RAG_IceWyvern_AI");
		
		ARAG_IceWyvern_AI_C_ExecuteUbergraph_RAG_IceWyvern_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARAG_IceWyvern_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARAG_IceWyvern_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RAG_IceWyvern_AI.RAG_IceWyvern_AI_C");
		return ptr;
	}

}


