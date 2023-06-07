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
	 * 		Name   -> Function BP_MushroomSporeEmitter.BP_MushroomSporeEmitter_C.ExecuteUbergraph_BP_MushroomSporeEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MushroomSporeEmitter_C::ExecuteUbergraph_BP_MushroomSporeEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MushroomSporeEmitter.BP_MushroomSporeEmitter_C.ExecuteUbergraph_BP_MushroomSporeEmitter");
		
		UBP_MushroomSporeEmitter_C_ExecuteUbergraph_BP_MushroomSporeEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MushroomSporeEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MushroomSporeEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MushroomSporeEmitter.BP_MushroomSporeEmitter_C");
		return ptr;
	}

}


