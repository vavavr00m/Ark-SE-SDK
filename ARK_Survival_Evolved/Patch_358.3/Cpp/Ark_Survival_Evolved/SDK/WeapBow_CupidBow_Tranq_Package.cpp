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
	 * 		Name   -> Function WeapBow_CupidBow_Tranq.WeapBow_CupidBow_Tranq_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapBow_CupidBow_Tranq_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBow_CupidBow_Tranq.WeapBow_CupidBow_Tranq_C.UserConstructionScript");
		
		AWeapBow_CupidBow_Tranq_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapBow_CupidBow_Tranq.WeapBow_CupidBow_Tranq_C.ExecuteUbergraph_WeapBow_CupidBow_Tranq
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapBow_CupidBow_Tranq_C::ExecuteUbergraph_WeapBow_CupidBow_Tranq(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBow_CupidBow_Tranq.WeapBow_CupidBow_Tranq_C.ExecuteUbergraph_WeapBow_CupidBow_Tranq");
		
		AWeapBow_CupidBow_Tranq_C_ExecuteUbergraph_WeapBow_CupidBow_Tranq_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapBow_CupidBow_Tranq_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapBow_CupidBow_Tranq_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapBow_CupidBow_Tranq.WeapBow_CupidBow_Tranq_C");
		return ptr;
	}

}


