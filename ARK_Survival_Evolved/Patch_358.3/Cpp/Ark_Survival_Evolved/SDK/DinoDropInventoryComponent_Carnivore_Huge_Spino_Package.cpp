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
	 * 		Name   -> Function DinoDropInventoryComponent_Carnivore_Huge_Spino.DinoDropInventoryComponent_Carnivore_Huge_Spino_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_Spino
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Carnivore_Huge_Spino_C::ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_Spino(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Huge_Spino.DinoDropInventoryComponent_Carnivore_Huge_Spino_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_Spino");
		
		UDinoDropInventoryComponent_Carnivore_Huge_Spino_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_Spino_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Carnivore_Huge_Spino_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Carnivore_Huge_Spino_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Huge_Spino.DinoDropInventoryComponent_Carnivore_Huge_Spino_C");
		return ptr;
	}

}


