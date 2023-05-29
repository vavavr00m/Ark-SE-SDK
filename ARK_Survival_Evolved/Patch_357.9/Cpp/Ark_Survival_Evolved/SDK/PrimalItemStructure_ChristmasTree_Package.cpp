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
	 * 		Name   -> Function PrimalItemStructure_ChristmasTree.PrimalItemStructure_ChristmasTree_C.ExecuteUbergraph_PrimalItemStructure_ChristmasTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_ChristmasTree_C::ExecuteUbergraph_PrimalItemStructure_ChristmasTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ChristmasTree.PrimalItemStructure_ChristmasTree_C.ExecuteUbergraph_PrimalItemStructure_ChristmasTree");
		
		UPrimalItemStructure_ChristmasTree_C_ExecuteUbergraph_PrimalItemStructure_ChristmasTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_ChristmasTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_ChristmasTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_ChristmasTree.PrimalItemStructure_ChristmasTree_C");
		return ptr;
	}

}


