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
	 * 		Name   -> Function WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSlingshot_Nutcracker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C.UserConstructionScript");
		
		AWeapSlingshot_Nutcracker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C.ExecuteUbergraph_WeapSlingshot_Nutcracker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapSlingshot_Nutcracker_C::ExecuteUbergraph_WeapSlingshot_Nutcracker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C.ExecuteUbergraph_WeapSlingshot_Nutcracker");
		
		AWeapSlingshot_Nutcracker_C_ExecuteUbergraph_WeapSlingshot_Nutcracker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapSlingshot_Nutcracker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapSlingshot_Nutcracker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C");
		return ptr;
	}

}


