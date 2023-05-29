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
	 * 		Name   -> Function PrimalItemSkin_ScorchedSpear.PrimalItemSkin_ScorchedSpear_C.ExecuteUbergraph_PrimalItemSkin_ScorchedSpear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ScorchedSpear_C::ExecuteUbergraph_PrimalItemSkin_ScorchedSpear(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ScorchedSpear.PrimalItemSkin_ScorchedSpear_C.ExecuteUbergraph_PrimalItemSkin_ScorchedSpear");
		
		UPrimalItemSkin_ScorchedSpear_C_ExecuteUbergraph_PrimalItemSkin_ScorchedSpear_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_ScorchedSpear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_ScorchedSpear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ScorchedSpear.PrimalItemSkin_ScorchedSpear_C");
		return ptr;
	}

}


