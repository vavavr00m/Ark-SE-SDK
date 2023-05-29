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
	 * 		Name   -> Function PrimalItemTrophy_SotF_3rd.PrimalItemTrophy_SotF_3rd_C.ExecuteUbergraph_PrimalItemTrophy_SotF_3rd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemTrophy_SotF_3rd_C::ExecuteUbergraph_PrimalItemTrophy_SotF_3rd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_SotF_3rd.PrimalItemTrophy_SotF_3rd_C.ExecuteUbergraph_PrimalItemTrophy_SotF_3rd");
		
		UPrimalItemTrophy_SotF_3rd_C_ExecuteUbergraph_PrimalItemTrophy_SotF_3rd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemTrophy_SotF_3rd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemTrophy_SotF_3rd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_SotF_3rd.PrimalItemTrophy_SotF_3rd_C");
		return ptr;
	}

}


