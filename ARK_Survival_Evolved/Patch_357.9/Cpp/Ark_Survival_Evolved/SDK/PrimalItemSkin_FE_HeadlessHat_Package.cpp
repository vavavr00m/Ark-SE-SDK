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
	 * 		Name   -> Function PrimalItemSkin_FE_HeadlessHat.PrimalItemSkin_FE_HeadlessHat_C.ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_FE_HeadlessHat_C::ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_FE_HeadlessHat.PrimalItemSkin_FE_HeadlessHat_C.ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat");
		
		UPrimalItemSkin_FE_HeadlessHat_C_ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_FE_HeadlessHat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_FE_HeadlessHat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_FE_HeadlessHat.PrimalItemSkin_FE_HeadlessHat_C");
		return ptr;
	}

}


