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
	 * 		Name   -> Function PrimalItemTrophy_AlphaRex.PrimalItemTrophy_AlphaRex_C.ExecuteUbergraph_PrimalItemTrophy_AlphaRex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemTrophy_AlphaRex_C::ExecuteUbergraph_PrimalItemTrophy_AlphaRex(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_AlphaRex.PrimalItemTrophy_AlphaRex_C.ExecuteUbergraph_PrimalItemTrophy_AlphaRex");
		
		UPrimalItemTrophy_AlphaRex_C_ExecuteUbergraph_PrimalItemTrophy_AlphaRex_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemTrophy_AlphaRex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemTrophy_AlphaRex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_AlphaRex.PrimalItemTrophy_AlphaRex_C");
		return ptr;
	}

}


