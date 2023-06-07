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
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Allosaurus.PrimalItemSkin_ChibiDino_Allosaurus_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Allosaurus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Allosaurus_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Allosaurus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Allosaurus.PrimalItemSkin_ChibiDino_Allosaurus_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Allosaurus");
		
		UPrimalItemSkin_ChibiDino_Allosaurus_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Allosaurus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_ChibiDino_Allosaurus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_ChibiDino_Allosaurus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Allosaurus.PrimalItemSkin_ChibiDino_Allosaurus_C");
		return ptr;
	}

}


