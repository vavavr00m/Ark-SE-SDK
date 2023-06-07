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
	 * 		Name   -> Function SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhaleTurret_ImpactEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C.UserConstructionScript");
		
		ASpaceWhaleTurret_ImpactEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C.ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhaleTurret_ImpactEmitter_C::ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C.ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter");
		
		ASpaceWhaleTurret_ImpactEmitter_C_ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceWhaleTurret_ImpactEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceWhaleTurret_ImpactEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C");
		return ptr;
	}

}


