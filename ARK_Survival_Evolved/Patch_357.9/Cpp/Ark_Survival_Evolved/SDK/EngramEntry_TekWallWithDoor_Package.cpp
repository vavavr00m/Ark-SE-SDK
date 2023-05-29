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
	 * 		Name   -> Function EngramEntry_TekWallWithDoor.EngramEntry_TekWallWithDoor_C.ExecuteUbergraph_EngramEntry_TekWallWithDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_TekWallWithDoor_C::ExecuteUbergraph_EngramEntry_TekWallWithDoor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_TekWallWithDoor.EngramEntry_TekWallWithDoor_C.ExecuteUbergraph_EngramEntry_TekWallWithDoor");
		
		UEngramEntry_TekWallWithDoor_C_ExecuteUbergraph_EngramEntry_TekWallWithDoor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_TekWallWithDoor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_TekWallWithDoor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TekWallWithDoor.EngramEntry_TekWallWithDoor_C");
		return ptr;
	}

}


