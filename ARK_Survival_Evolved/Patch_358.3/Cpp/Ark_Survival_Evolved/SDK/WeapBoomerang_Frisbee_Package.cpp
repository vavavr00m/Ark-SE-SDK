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
	 * 		Name   -> Function WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapBoomerang_Frisbee_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C.UserConstructionScript");
		
		AWeapBoomerang_Frisbee_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C.ExecuteUbergraph_WeapBoomerang_Frisbee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapBoomerang_Frisbee_C::ExecuteUbergraph_WeapBoomerang_Frisbee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C.ExecuteUbergraph_WeapBoomerang_Frisbee");
		
		AWeapBoomerang_Frisbee_C_ExecuteUbergraph_WeapBoomerang_Frisbee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapBoomerang_Frisbee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapBoomerang_Frisbee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C");
		return ptr;
	}

}


