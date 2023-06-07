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
	 * 		Name   -> Function PrimalItemSkin_Vday_SwimPants_BearHug.PrimalItemSkin_Vday_SwimPants_BearHug_C.ExecuteUbergraph_PrimalItemSkin_Vday_SwimPants_BearHug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_Vday_SwimPants_BearHug_C::ExecuteUbergraph_PrimalItemSkin_Vday_SwimPants_BearHug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Vday_SwimPants_BearHug.PrimalItemSkin_Vday_SwimPants_BearHug_C.ExecuteUbergraph_PrimalItemSkin_Vday_SwimPants_BearHug");
		
		UPrimalItemSkin_Vday_SwimPants_BearHug_C_ExecuteUbergraph_PrimalItemSkin_Vday_SwimPants_BearHug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_Vday_SwimPants_BearHug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_Vday_SwimPants_BearHug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Vday_SwimPants_BearHug.PrimalItemSkin_Vday_SwimPants_BearHug_C");
		return ptr;
	}

}


