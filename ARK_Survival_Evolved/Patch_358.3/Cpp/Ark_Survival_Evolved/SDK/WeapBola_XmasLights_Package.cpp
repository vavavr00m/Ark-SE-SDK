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
	 * 		Name   -> Function WeapBola_XmasLights.WeapBola_XmasLights_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapBola_XmasLights_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBola_XmasLights.WeapBola_XmasLights_C.UserConstructionScript");
		
		AWeapBola_XmasLights_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapBola_XmasLights.WeapBola_XmasLights_C.ExecuteUbergraph_WeapBola_XmasLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapBola_XmasLights_C::ExecuteUbergraph_WeapBola_XmasLights(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBola_XmasLights.WeapBola_XmasLights_C.ExecuteUbergraph_WeapBola_XmasLights");
		
		AWeapBola_XmasLights_C_ExecuteUbergraph_WeapBola_XmasLights_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapBola_XmasLights_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapBola_XmasLights_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapBola_XmasLights.WeapBola_XmasLights_C");
		return ptr;
	}

}


