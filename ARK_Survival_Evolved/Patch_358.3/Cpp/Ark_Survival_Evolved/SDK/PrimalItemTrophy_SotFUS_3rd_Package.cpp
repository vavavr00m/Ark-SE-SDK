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
	 * 		Name   -> Function PrimalItemTrophy_SotFUS_3rd.PrimalItemTrophy_SotFUS_3rd_C.ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemTrophy_SotFUS_3rd_C::ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_SotFUS_3rd.PrimalItemTrophy_SotFUS_3rd_C.ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd");
		
		UPrimalItemTrophy_SotFUS_3rd_C_ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemTrophy_SotFUS_3rd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemTrophy_SotFUS_3rd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_SotFUS_3rd.PrimalItemTrophy_SotFUS_3rd_C");
		return ptr;
	}

}


