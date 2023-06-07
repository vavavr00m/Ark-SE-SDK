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
	 * 		Name   -> Function PrimalItemStructure_FenceSupport_Stone.PrimalItemStructure_FenceSupport_Stone_C.ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_FenceSupport_Stone_C::ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_FenceSupport_Stone.PrimalItemStructure_FenceSupport_Stone_C.ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone");
		
		UPrimalItemStructure_FenceSupport_Stone_C_ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_FenceSupport_Stone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_FenceSupport_Stone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_FenceSupport_Stone.PrimalItemStructure_FenceSupport_Stone_C");
		return ptr;
	}

}


