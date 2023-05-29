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
	 * 		Name   -> Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.BPOverrideItemMinimumUseInterval
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UDinoTamedInventoryComponent_MoleRat_C::BPOverrideItemMinimumUseInterval(class UPrimalItem* theItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.BPOverrideItemMinimumUseInterval");
		
		UDinoTamedInventoryComponent_MoleRat_C_BPOverrideItemMinimumUseInterval_Params params {};
		params.theItem = theItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_MoleRat_C::ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat");
		
		UDinoTamedInventoryComponent_MoleRat_C_ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_MoleRat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_MoleRat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C");
		return ptr;
	}

}


