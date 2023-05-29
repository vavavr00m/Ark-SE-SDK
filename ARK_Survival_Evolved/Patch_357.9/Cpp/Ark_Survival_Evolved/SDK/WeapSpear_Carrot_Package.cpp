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
	 * 		Name   -> Function WeapSpear_Carrot.WeapSpear_Carrot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSpear_Carrot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSpear_Carrot.WeapSpear_Carrot_C.UserConstructionScript");
		
		AWeapSpear_Carrot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapSpear_Carrot.WeapSpear_Carrot_C.ExecuteUbergraph_WeapSpear_Carrot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapSpear_Carrot_C::ExecuteUbergraph_WeapSpear_Carrot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSpear_Carrot.WeapSpear_Carrot_C.ExecuteUbergraph_WeapSpear_Carrot");
		
		AWeapSpear_Carrot_C_ExecuteUbergraph_WeapSpear_Carrot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapSpear_Carrot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapSpear_Carrot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapSpear_Carrot.WeapSpear_Carrot_C");
		return ptr;
	}

}


