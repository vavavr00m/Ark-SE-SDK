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
	 * 		Name   -> Function Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_SpoiledMeat_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C.UserConstructionScript");
		
		AStructure_PlantSpeciesR_SpoiledMeat_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C.ExecuteUbergraph_Structure_PlantSpeciesR_SpoiledMeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_SpoiledMeat_C::ExecuteUbergraph_Structure_PlantSpeciesR_SpoiledMeat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C.ExecuteUbergraph_Structure_PlantSpeciesR_SpoiledMeat");
		
		AStructure_PlantSpeciesR_SpoiledMeat_C_ExecuteUbergraph_Structure_PlantSpeciesR_SpoiledMeat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_PlantSpeciesR_SpoiledMeat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_PlantSpeciesR_SpoiledMeat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C");
		return ptr;
	}

}


