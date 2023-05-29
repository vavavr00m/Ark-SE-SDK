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
	 * 		Name   -> Function RAG_Item_Egg_Wyvern_Fertilized_Ice.RAG_Item_Egg_Wyvern_Fertilized_Ice_C.ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URAG_Item_Egg_Wyvern_Fertilized_Ice_C::ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RAG_Item_Egg_Wyvern_Fertilized_Ice.RAG_Item_Egg_Wyvern_Fertilized_Ice_C.ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice");
		
		URAG_Item_Egg_Wyvern_Fertilized_Ice_C_ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URAG_Item_Egg_Wyvern_Fertilized_Ice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URAG_Item_Egg_Wyvern_Fertilized_Ice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RAG_Item_Egg_Wyvern_Fertilized_Ice.RAG_Item_Egg_Wyvern_Fertilized_Ice_C");
		return ptr;
	}

}


