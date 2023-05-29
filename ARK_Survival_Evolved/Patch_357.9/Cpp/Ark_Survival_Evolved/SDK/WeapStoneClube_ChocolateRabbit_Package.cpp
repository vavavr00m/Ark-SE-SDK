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
	 * 		Name   -> Function WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapStoneClube_ChocolateRabbit_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C.UserConstructionScript");
		
		AWeapStoneClube_ChocolateRabbit_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C.ExecuteUbergraph_WeapStoneClube_ChocolateRabbit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapStoneClube_ChocolateRabbit_C::ExecuteUbergraph_WeapStoneClube_ChocolateRabbit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C.ExecuteUbergraph_WeapStoneClube_ChocolateRabbit");
		
		AWeapStoneClube_ChocolateRabbit_C_ExecuteUbergraph_WeapStoneClube_ChocolateRabbit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapStoneClube_ChocolateRabbit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapStoneClube_ChocolateRabbit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C");
		return ptr;
	}

}


