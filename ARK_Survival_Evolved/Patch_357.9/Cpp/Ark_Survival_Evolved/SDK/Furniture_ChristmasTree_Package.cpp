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
	 * 		Name   -> Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFurniture_ChristmasTree_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.UserConstructionScript");
		
		AFurniture_ChristmasTree_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFurniture_ChristmasTree_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.ReceiveBeginPlay");
		
		AFurniture_ChristmasTree_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.ExecuteUbergraph_Furniture_ChristmasTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFurniture_ChristmasTree_C::ExecuteUbergraph_Furniture_ChristmasTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.ExecuteUbergraph_Furniture_ChristmasTree");
		
		AFurniture_ChristmasTree_C_ExecuteUbergraph_Furniture_ChristmasTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFurniture_ChristmasTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFurniture_ChristmasTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_ChristmasTree.Furniture_ChristmasTree_C");
		return ptr;
	}

}


