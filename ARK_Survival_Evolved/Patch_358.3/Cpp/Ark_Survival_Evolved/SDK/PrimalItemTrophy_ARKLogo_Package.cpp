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
	 * 		Name   -> Function PrimalItemTrophy_ARKLogo.PrimalItemTrophy_ARKLogo_C.ExecuteUbergraph_PrimalItemTrophy_ARKLogo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemTrophy_ARKLogo_C::ExecuteUbergraph_PrimalItemTrophy_ARKLogo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_ARKLogo.PrimalItemTrophy_ARKLogo_C.ExecuteUbergraph_PrimalItemTrophy_ARKLogo");
		
		UPrimalItemTrophy_ARKLogo_C_ExecuteUbergraph_PrimalItemTrophy_ARKLogo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemTrophy_ARKLogo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemTrophy_ARKLogo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_ARKLogo.PrimalItemTrophy_ARKLogo_C");
		return ptr;
	}

}


