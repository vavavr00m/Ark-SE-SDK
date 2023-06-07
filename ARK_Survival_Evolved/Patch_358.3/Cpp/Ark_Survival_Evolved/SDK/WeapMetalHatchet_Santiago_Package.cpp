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
	 * 		Name   -> Function WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMetalHatchet_Santiago_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C.UserConstructionScript");
		
		AWeapMetalHatchet_Santiago_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C.ExecuteUbergraph_WeapMetalHatchet_Santiago
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMetalHatchet_Santiago_C::ExecuteUbergraph_WeapMetalHatchet_Santiago(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C.ExecuteUbergraph_WeapMetalHatchet_Santiago");
		
		AWeapMetalHatchet_Santiago_C_ExecuteUbergraph_WeapMetalHatchet_Santiago_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapMetalHatchet_Santiago_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapMetalHatchet_Santiago_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C");
		return ptr;
	}

}


