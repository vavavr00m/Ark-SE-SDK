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
	 * 		Name   -> Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFurniture_Wall_Wreath_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.UserConstructionScript");
		
		AFurniture_Wall_Wreath_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFurniture_Wall_Wreath_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.ReceiveBeginPlay");
		
		AFurniture_Wall_Wreath_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.ExecuteUbergraph_Furniture_Wall_Wreath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFurniture_Wall_Wreath_C::ExecuteUbergraph_Furniture_Wall_Wreath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.ExecuteUbergraph_Furniture_Wall_Wreath");
		
		AFurniture_Wall_Wreath_C_ExecuteUbergraph_Furniture_Wall_Wreath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFurniture_Wall_Wreath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFurniture_Wall_Wreath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_Wall_Wreath.Furniture_Wall_Wreath_C");
		return ptr;
	}

}


