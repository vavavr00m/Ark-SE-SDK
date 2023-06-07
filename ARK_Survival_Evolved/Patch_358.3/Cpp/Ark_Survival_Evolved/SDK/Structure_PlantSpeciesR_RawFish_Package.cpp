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
	 * 		Name   -> Function Structure_PlantSpeciesR_RawFish.Structure_PlantSpeciesR_RawFish_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_RawFish_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR_RawFish.Structure_PlantSpeciesR_RawFish_C.UserConstructionScript");
		
		AStructure_PlantSpeciesR_RawFish_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_PlantSpeciesR_RawFish.Structure_PlantSpeciesR_RawFish_C.ExecuteUbergraph_Structure_PlantSpeciesR_RawFish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_RawFish_C::ExecuteUbergraph_Structure_PlantSpeciesR_RawFish(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR_RawFish.Structure_PlantSpeciesR_RawFish_C.ExecuteUbergraph_Structure_PlantSpeciesR_RawFish");
		
		AStructure_PlantSpeciesR_RawFish_C_ExecuteUbergraph_Structure_PlantSpeciesR_RawFish_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_PlantSpeciesR_RawFish_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_PlantSpeciesR_RawFish_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PlantSpeciesR_RawFish.Structure_PlantSpeciesR_RawFish_C");
		return ptr;
	}

}


