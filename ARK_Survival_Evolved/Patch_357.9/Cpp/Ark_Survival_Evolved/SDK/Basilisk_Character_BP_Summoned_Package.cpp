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
	 * 		Name   -> Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.InitializeDive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_Summoned_C::InitializeDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.InitializeDive");
		
		ABasilisk_Character_BP_Summoned_C_InitializeDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.FindNearbyEggs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StartSeeking                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_Summoned_C::FindNearbyEggs(bool StartSeeking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.FindNearbyEggs");
		
		ABasilisk_Character_BP_Summoned_C_FindNearbyEggs_Params params {};
		params.StartSeeking = StartSeeking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_Summoned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.UserConstructionScript");
		
		ABasilisk_Character_BP_Summoned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.ExecuteUbergraph_Basilisk_Character_BP_Summoned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_Summoned_C::ExecuteUbergraph_Basilisk_Character_BP_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.ExecuteUbergraph_Basilisk_Character_BP_Summoned");
		
		ABasilisk_Character_BP_Summoned_C_ExecuteUbergraph_Basilisk_Character_BP_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABasilisk_Character_BP_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABasilisk_Character_BP_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C");
		return ptr;
	}

}


