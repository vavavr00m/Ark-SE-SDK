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
	 * 		Name   -> Function PrimalItemSkin_TekGloves_V2.PrimalItemSkin_TekGloves_V2_C.ExecuteUbergraph_PrimalItemSkin_TekGloves_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TekGloves_V2_C::ExecuteUbergraph_PrimalItemSkin_TekGloves_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekGloves_V2.PrimalItemSkin_TekGloves_V2_C.ExecuteUbergraph_PrimalItemSkin_TekGloves_V2");
		
		UPrimalItemSkin_TekGloves_V2_C_ExecuteUbergraph_PrimalItemSkin_TekGloves_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_TekGloves_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_TekGloves_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TekGloves_V2.PrimalItemSkin_TekGloves_V2_C");
		return ptr;
	}

}


