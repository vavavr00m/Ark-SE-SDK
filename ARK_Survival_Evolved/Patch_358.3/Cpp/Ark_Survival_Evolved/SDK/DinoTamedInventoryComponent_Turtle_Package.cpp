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
	 * 		Name   -> Function DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C.BPOverrideItemMinimumUseInterval
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UDinoTamedInventoryComponent_Turtle_C::BPOverrideItemMinimumUseInterval(class UPrimalItem* theItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C.BPOverrideItemMinimumUseInterval");
		
		UDinoTamedInventoryComponent_Turtle_C_BPOverrideItemMinimumUseInterval_Params params {};
		params.theItem = theItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Turtle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Turtle_C::ExecuteUbergraph_DinoTamedInventoryComponent_Turtle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Turtle");
		
		UDinoTamedInventoryComponent_Turtle_C_ExecuteUbergraph_DinoTamedInventoryComponent_Turtle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Turtle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Turtle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C");
		return ptr;
	}

}


