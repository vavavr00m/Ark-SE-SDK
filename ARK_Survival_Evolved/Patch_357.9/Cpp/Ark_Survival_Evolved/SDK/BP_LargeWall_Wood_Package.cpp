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
	 * 		Name   -> Function BP_LargeWall_Wood.BP_LargeWall_Wood_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LargeWall_Wood_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LargeWall_Wood.BP_LargeWall_Wood_C.UserConstructionScript");
		
		ABP_LargeWall_Wood_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BP_LargeWall_Wood.BP_LargeWall_Wood_C.ExecuteUbergraph_BP_LargeWall_Wood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LargeWall_Wood_C::ExecuteUbergraph_BP_LargeWall_Wood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LargeWall_Wood.BP_LargeWall_Wood_C.ExecuteUbergraph_BP_LargeWall_Wood");
		
		ABP_LargeWall_Wood_C_ExecuteUbergraph_BP_LargeWall_Wood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LargeWall_Wood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LargeWall_Wood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeWall_Wood.BP_LargeWall_Wood_C");
		return ptr;
	}

}


