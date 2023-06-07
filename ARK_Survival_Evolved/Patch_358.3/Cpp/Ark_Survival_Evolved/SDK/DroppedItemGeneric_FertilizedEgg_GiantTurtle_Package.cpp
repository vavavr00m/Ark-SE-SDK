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
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ReceiveBeginPlay");
		
		ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.UpdateAllowIncubation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::UpdateAllowIncubation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.UpdateAllowIncubation");
		
		ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_UpdateAllowIncubation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.GetDefaultEggValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              DefaultEggDurabilityLoss                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultEggMinTemp                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultEggMaxTemp                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::GetDefaultEggValues(float* DefaultEggDurabilityLoss, float* DefaultEggMinTemp, float* DefaultEggMaxTemp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.GetDefaultEggValues");
		
		ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_GetDefaultEggValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DefaultEggDurabilityLoss != nullptr)
			*DefaultEggDurabilityLoss = params.DefaultEggDurabilityLoss;
		if (DefaultEggMinTemp != nullptr)
			*DefaultEggMinTemp = params.DefaultEggMinTemp;
		if (DefaultEggMaxTemp != nullptr)
			*DefaultEggMaxTemp = params.DefaultEggMaxTemp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.OnRep_AllowIncubation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::OnRep_AllowIncubation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.OnRep_AllowIncubation");
		
		ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_OnRep_AllowIncubation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.GetAllowIncubation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::GetAllowIncubation(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.GetAllowIncubation");
		
		ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_GetAllowIncubation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::ThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ThrottledTick");
		
		ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_ThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.UserConstructionScript");
		
		ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_GiantTurtle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_GiantTurtle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_GiantTurtle");
		
		ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_GiantTurtle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C");
		return ptr;
	}

}


