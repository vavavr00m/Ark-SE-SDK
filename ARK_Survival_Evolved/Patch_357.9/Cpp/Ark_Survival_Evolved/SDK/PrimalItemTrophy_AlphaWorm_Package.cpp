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
	 * 		Name   -> Function PrimalItemTrophy_AlphaWorm.PrimalItemTrophy_AlphaWorm_C.ExecuteUbergraph_PrimalItemTrophy_AlphaWorm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemTrophy_AlphaWorm_C::ExecuteUbergraph_PrimalItemTrophy_AlphaWorm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_AlphaWorm.PrimalItemTrophy_AlphaWorm_C.ExecuteUbergraph_PrimalItemTrophy_AlphaWorm");
		
		UPrimalItemTrophy_AlphaWorm_C_ExecuteUbergraph_PrimalItemTrophy_AlphaWorm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemTrophy_AlphaWorm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemTrophy_AlphaWorm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_AlphaWorm.PrimalItemTrophy_AlphaWorm_C");
		return ptr;
	}

}


