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
	 * 		Name   -> Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FName ARAG_IceWyvProjIceBall_C::GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim");
		
		ARAG_IceWyvProjIceBall_C_GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARAG_IceWyvProjIceBall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.UserConstructionScript");
		
		ARAG_IceWyvProjIceBall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.ExecuteUbergraph_RAG_IceWyvProjIceBall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARAG_IceWyvProjIceBall_C::ExecuteUbergraph_RAG_IceWyvProjIceBall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.ExecuteUbergraph_RAG_IceWyvProjIceBall");
		
		ARAG_IceWyvProjIceBall_C_ExecuteUbergraph_RAG_IceWyvProjIceBall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARAG_IceWyvProjIceBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARAG_IceWyvProjIceBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C");
		return ptr;
	}

}


