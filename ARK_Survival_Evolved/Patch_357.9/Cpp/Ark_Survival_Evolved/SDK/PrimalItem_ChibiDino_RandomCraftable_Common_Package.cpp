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
	 * 		Name   -> Function PrimalItem_ChibiDino_RandomCraftable_Common.PrimalItem_ChibiDino_RandomCraftable_Common_C.BPPostInitializeItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWorld*                                      OptionalInitWorld                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_ChibiDino_RandomCraftable_Common_C::BPPostInitializeItem(class UWorld* OptionalInitWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChibiDino_RandomCraftable_Common.PrimalItem_ChibiDino_RandomCraftable_Common_C.BPPostInitializeItem");
		
		UPrimalItem_ChibiDino_RandomCraftable_Common_C_BPPostInitializeItem_Params params {};
		params.OptionalInitWorld = OptionalInitWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItem_ChibiDino_RandomCraftable_Common.PrimalItem_ChibiDino_RandomCraftable_Common_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Common
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_ChibiDino_RandomCraftable_Common_C::ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Common(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChibiDino_RandomCraftable_Common.PrimalItem_ChibiDino_RandomCraftable_Common_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Common");
		
		UPrimalItem_ChibiDino_RandomCraftable_Common_C_ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Common_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_ChibiDino_RandomCraftable_Common_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_ChibiDino_RandomCraftable_Common_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_ChibiDino_RandomCraftable_Common.PrimalItem_ChibiDino_RandomCraftable_Common_C");
		return ptr;
	}

}


