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
	 * 		Name   -> Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.SpawnWaterOverlapVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      WaterActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_WS_C::SpawnWaterOverlapVFX(class AActor* WaterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.SpawnWaterOverlapVFX");
		
		ACrystalWyvern_Character_BP_WS_C_SpawnWaterOverlapVFX_Params params {};
		params.WaterActor = WaterActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_WS_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.UserConstructionScript");
		
		ACrystalWyvern_Character_BP_WS_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_WS_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorBeginOverlap");
		
		ACrystalWyvern_Character_BP_WS_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorEndOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_WS_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorEndOverlap");
		
		ACrystalWyvern_Character_BP_WS_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.Multi_UpdateBuffTime
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_WS_C::Multi_UpdateBuffTime(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.Multi_UpdateBuffTime");
		
		ACrystalWyvern_Character_BP_WS_C_Multi_UpdateBuffTime_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ExecuteUbergraph_CrystalWyvern_Character_BP_WS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_WS_C::ExecuteUbergraph_CrystalWyvern_Character_BP_WS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ExecuteUbergraph_CrystalWyvern_Character_BP_WS");
		
		ACrystalWyvern_Character_BP_WS_C_ExecuteUbergraph_CrystalWyvern_Character_BP_WS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrystalWyvern_Character_BP_WS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrystalWyvern_Character_BP_WS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C");
		return ptr;
	}

}


