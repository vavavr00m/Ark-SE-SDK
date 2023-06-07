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
	 * 		Name   -> Function ClusterBombGroundImpact.ClusterBombGroundImpact_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AClusterBombGroundImpact_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClusterBombGroundImpact.ClusterBombGroundImpact_C.UserConstructionScript");
		
		AClusterBombGroundImpact_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ClusterBombGroundImpact.ClusterBombGroundImpact_C.ExecuteUbergraph_ClusterBombGroundImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AClusterBombGroundImpact_C::ExecuteUbergraph_ClusterBombGroundImpact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClusterBombGroundImpact.ClusterBombGroundImpact_C.ExecuteUbergraph_ClusterBombGroundImpact");
		
		AClusterBombGroundImpact_C_ExecuteUbergraph_ClusterBombGroundImpact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClusterBombGroundImpact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClusterBombGroundImpact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ClusterBombGroundImpact.ClusterBombGroundImpact_C");
		return ptr;
	}

}


