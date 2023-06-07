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
	 * 		Name   -> Function PrimalItemSkin_Hatchet_Santiago.PrimalItemSkin_Hatchet_Santiago_C.ExecuteUbergraph_PrimalItemSkin_Hatchet_Santiago
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_Hatchet_Santiago_C::ExecuteUbergraph_PrimalItemSkin_Hatchet_Santiago(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Hatchet_Santiago.PrimalItemSkin_Hatchet_Santiago_C.ExecuteUbergraph_PrimalItemSkin_Hatchet_Santiago");
		
		UPrimalItemSkin_Hatchet_Santiago_C_ExecuteUbergraph_PrimalItemSkin_Hatchet_Santiago_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_Hatchet_Santiago_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_Hatchet_Santiago_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Hatchet_Santiago.PrimalItemSkin_Hatchet_Santiago_C");
		return ptr;
	}

}


