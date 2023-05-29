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
	 * 		Name   -> Function Buff_FoliageTrap.Buff_FoliageTrap_C.GetTrapCooldownAtLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             CooldownAtLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LocationIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FoliageTrap_C::GetTrapCooldownAtLocation(const struct FVector& AtLocation, double* CooldownAtLocation, int32_t* LocationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.GetTrapCooldownAtLocation");
		
		ABuff_FoliageTrap_C_GetTrapCooldownAtLocation_Params params {};
		params.AtLocation = AtLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CooldownAtLocation != nullptr)
			*CooldownAtLocation = params.CooldownAtLocation;
		if (LocationIndex != nullptr)
			*LocationIndex = params.LocationIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FoliageTrap.Buff_FoliageTrap_C.CullCooldowns
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FoliageTrap_C::CullCooldowns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.CullCooldowns");
		
		ABuff_FoliageTrap_C_CullCooldowns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FoliageTrap.Buff_FoliageTrap_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FoliageTrap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.ReceiveBeginPlay");
		
		ABuff_FoliageTrap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FoliageTrap.Buff_FoliageTrap_C.CheckFoliageForTrap
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      HarvestComponentClass                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AtLoc                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TheInstigatorLoc                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FoliageTrap_C::CheckFoliageForTrap(class UClass* HarvestComponentClass, struct FVector* AtLoc, struct FVector* TheInstigatorLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.CheckFoliageForTrap");
		
		ABuff_FoliageTrap_C_CheckFoliageForTrap_Params params {};
		params.HarvestComponentClass = HarvestComponentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AtLoc != nullptr)
			*AtLoc = params.AtLoc;
		if (TheInstigatorLoc != nullptr)
			*TheInstigatorLoc = params.TheInstigatorLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FoliageTrap.Buff_FoliageTrap_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FoliageTrap_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.BuffTickServer");
		
		ABuff_FoliageTrap_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FoliageTrap.Buff_FoliageTrap_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FoliageTrap_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.UserConstructionScript");
		
		ABuff_FoliageTrap_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FoliageTrap.Buff_FoliageTrap_C.MultiPlayPoisonMushroomSound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FoliageTrap_C::MultiPlayPoisonMushroomSound(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.MultiPlayPoisonMushroomSound");
		
		ABuff_FoliageTrap_C_MultiPlayPoisonMushroomSound_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FoliageTrap.Buff_FoliageTrap_C.ExecuteUbergraph_Buff_FoliageTrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FoliageTrap_C::ExecuteUbergraph_Buff_FoliageTrap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.ExecuteUbergraph_Buff_FoliageTrap");
		
		ABuff_FoliageTrap_C_ExecuteUbergraph_Buff_FoliageTrap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_FoliageTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_FoliageTrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FoliageTrap.Buff_FoliageTrap_C");
		return ptr;
	}

}


