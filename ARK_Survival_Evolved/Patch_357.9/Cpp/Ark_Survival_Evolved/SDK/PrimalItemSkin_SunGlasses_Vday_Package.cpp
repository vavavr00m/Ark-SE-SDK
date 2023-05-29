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
	 * 		Name   -> Function PrimalItemSkin_SunGlasses_Vday.PrimalItemSkin_SunGlasses_Vday_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses_Vday
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_SunGlasses_Vday_C::ExecuteUbergraph_PrimalItemSkin_SunGlasses_Vday(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses_Vday.PrimalItemSkin_SunGlasses_Vday_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses_Vday");
		
		UPrimalItemSkin_SunGlasses_Vday_C_ExecuteUbergraph_PrimalItemSkin_SunGlasses_Vday_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_SunGlasses_Vday_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_SunGlasses_Vday_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_SunGlasses_Vday.PrimalItemSkin_SunGlasses_Vday_C");
		return ptr;
	}

}


