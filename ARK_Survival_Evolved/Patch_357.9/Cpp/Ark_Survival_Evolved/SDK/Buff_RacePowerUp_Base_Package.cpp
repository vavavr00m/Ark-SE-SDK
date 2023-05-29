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
	 * 		Name   -> Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.InitRacePowerUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionType_Race_C*                         FromRaceMission                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RacePowerUp_Base_C::InitRacePowerUp(class AMissionType_Race_C* FromRaceMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.InitRacePowerUp");
		
		ABuff_RacePowerUp_Base_C_InitRacePowerUp_Params params {};
		params.FromRaceMission = FromRaceMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RacePowerUp_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.UserConstructionScript");
		
		ABuff_RacePowerUp_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.ExecuteUbergraph_Buff_RacePowerUp_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RacePowerUp_Base_C::ExecuteUbergraph_Buff_RacePowerUp_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.ExecuteUbergraph_Buff_RacePowerUp_Base");
		
		ABuff_RacePowerUp_Base_C_ExecuteUbergraph_Buff_RacePowerUp_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_RacePowerUp_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_RacePowerUp_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C");
		return ptr;
	}

}


