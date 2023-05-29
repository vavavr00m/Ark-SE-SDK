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
	 * 		Name   -> Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.Is SuperheatActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOverheat_DayCycleManager_C::IsSuperheatActive(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.Is SuperheatActive");
		
		AOverheat_DayCycleManager_C_IsSuperheatActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOverheat_DayCycleManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.UserConstructionScript");
		
		AOverheat_DayCycleManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.ExecuteUbergraph_Overheat_DayCycleManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOverheat_DayCycleManager_C::ExecuteUbergraph_Overheat_DayCycleManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.ExecuteUbergraph_Overheat_DayCycleManager");
		
		AOverheat_DayCycleManager_C_ExecuteUbergraph_Overheat_DayCycleManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOverheat_DayCycleManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOverheat_DayCycleManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Overheat_DayCycleManager.Overheat_DayCycleManager_C");
		return ptr;
	}

}


