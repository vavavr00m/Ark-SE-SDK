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
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_TerrorBird.PrimalItemSkin_ChibiDino_TerrorBird_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_TerrorBird
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_TerrorBird_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_TerrorBird(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_TerrorBird.PrimalItemSkin_ChibiDino_TerrorBird_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_TerrorBird");
		
		UPrimalItemSkin_ChibiDino_TerrorBird_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_TerrorBird_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_ChibiDino_TerrorBird_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_ChibiDino_TerrorBird_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ChibiDino_TerrorBird.PrimalItemSkin_ChibiDino_TerrorBird_C");
		return ptr;
	}

}


