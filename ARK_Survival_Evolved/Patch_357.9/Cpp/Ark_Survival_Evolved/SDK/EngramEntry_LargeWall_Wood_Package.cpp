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
	 * 		Name   -> Function EngramEntry_LargeWall_Wood.EngramEntry_LargeWall_Wood_C.ExecuteUbergraph_EngramEntry_LargeWall_Wood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_LargeWall_Wood_C::ExecuteUbergraph_EngramEntry_LargeWall_Wood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_LargeWall_Wood.EngramEntry_LargeWall_Wood_C.ExecuteUbergraph_EngramEntry_LargeWall_Wood");
		
		UEngramEntry_LargeWall_Wood_C_ExecuteUbergraph_EngramEntry_LargeWall_Wood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_LargeWall_Wood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_LargeWall_Wood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_LargeWall_Wood.EngramEntry_LargeWall_Wood_C");
		return ptr;
	}

}


