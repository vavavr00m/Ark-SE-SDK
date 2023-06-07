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
	 * 		Name   -> Function WeapPike_Santiago.WeapPike_Santiago_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapPike_Santiago_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPike_Santiago.WeapPike_Santiago_C.UserConstructionScript");
		
		AWeapPike_Santiago_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapPike_Santiago.WeapPike_Santiago_C.ExecuteUbergraph_WeapPike_Santiago
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapPike_Santiago_C::ExecuteUbergraph_WeapPike_Santiago(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPike_Santiago.WeapPike_Santiago_C.ExecuteUbergraph_WeapPike_Santiago");
		
		AWeapPike_Santiago_C_ExecuteUbergraph_WeapPike_Santiago_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapPike_Santiago_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapPike_Santiago_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapPike_Santiago.WeapPike_Santiago_C");
		return ptr;
	}

}


