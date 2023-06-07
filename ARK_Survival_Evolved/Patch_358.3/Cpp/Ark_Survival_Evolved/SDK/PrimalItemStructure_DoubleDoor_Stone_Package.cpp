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
	 * 		Name   -> Function PrimalItemStructure_DoubleDoor_Stone.PrimalItemStructure_DoubleDoor_Stone_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Stone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_DoubleDoor_Stone_C::ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Stone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_DoubleDoor_Stone.PrimalItemStructure_DoubleDoor_Stone_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Stone");
		
		UPrimalItemStructure_DoubleDoor_Stone_C_ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Stone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_DoubleDoor_Stone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_DoubleDoor_Stone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoor_Stone.PrimalItemStructure_DoubleDoor_Stone_C");
		return ptr;
	}

}


