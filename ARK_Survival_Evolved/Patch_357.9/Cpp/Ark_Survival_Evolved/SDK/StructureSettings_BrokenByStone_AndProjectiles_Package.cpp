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
	 * 		Name   -> Function StructureSettings_BrokenByStone_AndProjectiles.StructureSettings_BrokenByStone_AndProjectiles_C.ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStructureSettings_BrokenByStone_AndProjectiles_C::ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByStone_AndProjectiles.StructureSettings_BrokenByStone_AndProjectiles_C.ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles");
		
		UStructureSettings_BrokenByStone_AndProjectiles_C_ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructureSettings_BrokenByStone_AndProjectiles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_BrokenByStone_AndProjectiles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByStone_AndProjectiles.StructureSettings_BrokenByStone_AndProjectiles_C");
		return ptr;
	}

}


