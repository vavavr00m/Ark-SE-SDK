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
	 * 		Name   -> Function WeapStoneClube_Candy.WeapStoneClube_Candy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapStoneClube_Candy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapStoneClube_Candy.WeapStoneClube_Candy_C.UserConstructionScript");
		
		AWeapStoneClube_Candy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapStoneClube_Candy.WeapStoneClube_Candy_C.ExecuteUbergraph_WeapStoneClube_Candy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapStoneClube_Candy_C::ExecuteUbergraph_WeapStoneClube_Candy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapStoneClube_Candy.WeapStoneClube_Candy_C.ExecuteUbergraph_WeapStoneClube_Candy");
		
		AWeapStoneClube_Candy_C_ExecuteUbergraph_WeapStoneClube_Candy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapStoneClube_Candy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapStoneClube_Candy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClube_Candy.WeapStoneClube_Candy_C");
		return ptr;
	}

}


