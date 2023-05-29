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
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPAllowSpawningCrate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CrateType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADayCycleManager_Gen2_C::BPAllowSpawningCrate(class UClass* CrateType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPAllowSpawningCrate");
		
		ADayCycleManager_Gen2_C_BPAllowSpawningCrate_Params params {};
		params.CrateType = CrateType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupBackdropWarpMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::SetupBackdropWarpMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupBackdropWarpMesh");
		
		ADayCycleManager_Gen2_C_SetupBackdropWarpMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.OnRep_WarpState
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::OnRep_WarpState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.OnRep_WarpState");
		
		ADayCycleManager_Gen2_C_OnRep_WarpState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugPrintWarpState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      WarpState                                                  (Parm, ZeroConstructor)
	 */
	void ADayCycleManager_Gen2_C::DebugPrintWarpState(const class FString& WarpState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugPrintWarpState");
		
		ADayCycleManager_Gen2_C_DebugPrintWarpState_Params params {};
		params.WarpState = WarpState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SaveSkyboxInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::SaveSkyboxInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SaveSkyboxInfo");
		
		ADayCycleManager_Gen2_C_SaveSkyboxInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.PlayWarpMatinee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TimeLeft                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::PlayWarpMatinee(int32_t index, float TimeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.PlayWarpMatinee");
		
		ADayCycleManager_Gen2_C_PlayWarpMatinee_Params params {};
		params.index = index;
		params.TimeLeft = TimeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadWarpBackdrop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Load                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::LoadWarpBackdrop(bool Load)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadWarpBackdrop");
		
		ADayCycleManager_Gen2_C_LoadWarpBackdrop_Params params {};
		params.Load = Load;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadAsteroids
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::LoadAsteroids(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadAsteroids");
		
		ADayCycleManager_Gen2_C_LoadAsteroids_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UnloadAsteroids
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::UnloadAsteroids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UnloadAsteroids");
		
		ADayCycleManager_Gen2_C_UnloadAsteroids_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetShipRootFromBackdropLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::GetShipRootFromBackdropLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetShipRootFromBackdropLevel");
		
		ADayCycleManager_Gen2_C_GetShipRootFromBackdropLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSublevels
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::UpdateSublevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSublevels");
		
		ADayCycleManager_Gen2_C_UpdateSublevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ShouldLoadSublevels
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::ShouldLoadSublevels(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ShouldLoadSublevels");
		
		ADayCycleManager_Gen2_C_ShouldLoadSublevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClearSpaceCrates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::ClearSpaceCrates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClearSpaceCrates");
		
		ADayCycleManager_Gen2_C_ClearSpaceCrates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RandomizeSkybox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::RandomizeSkybox(int32_t* newIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RandomizeSkybox");
		
		ADayCycleManager_Gen2_C_RandomizeSkybox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newIndex != nullptr)
			*newIndex = params.newIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSkyboxTables
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::SetupSkyboxTables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSkyboxTables");
		
		ADayCycleManager_Gen2_C_SetupSkyboxTables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPOnDCMCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::BPOnDCMCheat(const class FName& CheatName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPOnDCMCheat");
		
		ADayCycleManager_Gen2_C_BPOnDCMCheat_Params params {};
		params.CheatName = CheatName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClientInitializeHazards
	 * 		Flags  -> (NetReliable, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::ClientInitializeHazards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClientInitializeHazards");
		
		ADayCycleManager_Gen2_C_ClientInitializeHazards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSpaceHazards
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::SetupSpaceHazards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSpaceHazards");
		
		ADayCycleManager_Gen2_C_SetupSpaceHazards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetRockwellStormLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ADayCycleManager_Gen2_C::GetRockwellStormLocations(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetRockwellStormLocations");
		
		ADayCycleManager_Gen2_C_GetRockwellStormLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetEdenStormLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ADayCycleManager_Gen2_C::GetEdenStormLocations(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetEdenStormLocations");
		
		ADayCycleManager_Gen2_C_GetEdenStormLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CompareWeatherLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     StormLocaiton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LocationToCompare                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StormBaseRadius                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InStormRadius                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::CompareWeatherLocation(const struct FVector& StormLocaiton, const struct FVector& LocationToCompare, float StormBaseRadius, bool* InStormRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CompareWeatherLocation");
		
		ADayCycleManager_Gen2_C_CompareWeatherLocation_Params params {};
		params.StormLocaiton = StormLocaiton;
		params.LocationToCompare = LocationToCompare;
		params.StormBaseRadius = StormBaseRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InStormRadius != nullptr)
			*InStormRadius = params.InStormRadius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsLocationInWeatherEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::IsLocationInWeatherEvent(bool Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsLocationInWeatherEvent");
		
		ADayCycleManager_Gen2_C_IsLocationInWeatherEvent_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsRainingAtLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADayCycleManager_Gen2_C::IsRainingAtLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsRainingAtLocation");
		
		ADayCycleManager_Gen2_C_IsRainingAtLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.Earth Quake Drop Item at Location
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtLoc                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            BiomeArea                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    AtRot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::EarthQuakeDropItematLocation(const struct FVector& AtLoc, int32_t BiomeArea, const struct FRotator& AtRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.Earth Quake Drop Item at Location");
		
		ADayCycleManager_Gen2_C_EarthQuakeDropItematLocation_Params params {};
		params.AtLoc = AtLoc;
		params.BiomeArea = BiomeArea;
		params.AtRot = AtRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ManageStormVectors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             BiomeVectorArray                                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              ChanceToAddStorm                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxNumStorms                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BiomeXMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BiomeXMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BiomeYMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BiomeYMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StormRateOfTravel                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<double>                                     StormTimeArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              StormLifetime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BiomeHasActiveStorm                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::ManageStormVectors(TArray<struct FVector>* BiomeVectorArray, float ChanceToAddStorm, int32_t MaxNumStorms, float BiomeXMin, float BiomeXMax, float BiomeYMin, float BiomeYMax, float StormRateOfTravel, TArray<double>* StormTimeArray, float StormLifetime, bool* BiomeHasActiveStorm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ManageStormVectors");
		
		ADayCycleManager_Gen2_C_ManageStormVectors_Params params {};
		params.ChanceToAddStorm = ChanceToAddStorm;
		params.MaxNumStorms = MaxNumStorms;
		params.BiomeXMin = BiomeXMin;
		params.BiomeXMax = BiomeXMax;
		params.BiomeYMin = BiomeYMin;
		params.BiomeYMax = BiomeYMax;
		params.StormRateOfTravel = StormRateOfTravel;
		params.StormLifetime = StormLifetime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BiomeVectorArray != nullptr)
			*BiomeVectorArray = params.BiomeVectorArray;
		if (StormTimeArray != nullptr)
			*StormTimeArray = params.StormTimeArray;
		if (BiomeHasActiveStorm != nullptr)
			*BiomeHasActiveStorm = params.BiomeHasActiveStorm;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UserConstructionScript");
		
		ADayCycleManager_Gen2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::UpdateAreaBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuff");
		
		ADayCycleManager_Gen2_C_UpdateAreaBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ReceiveBeginPlay");
		
		ADayCycleManager_Gen2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.InitializeSpaceHazards
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::InitializeSpaceHazards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.InitializeSpaceHazards");
		
		ADayCycleManager_Gen2_C_InitializeSpaceHazards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EnsureSublevelsAreLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::EnsureSublevelsAreLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EnsureSublevelsAreLoaded");
		
		ADayCycleManager_Gen2_C_EnsureSublevelsAreLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.TriggerWarp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::TriggerWarp(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.TriggerWarp");
		
		ADayCycleManager_Gen2_C_TriggerWarp_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EndWarp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::EndWarp(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EndWarp");
		
		ADayCycleManager_Gen2_C_EndWarp_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugEndWarp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::DebugEndWarp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugEndWarp");
		
		ADayCycleManager_Gen2_C_DebugEndWarp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetEndWarp
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::NetEndWarp(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetEndWarp");
		
		ADayCycleManager_Gen2_C_NetEndWarp_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkybox
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::UpdateSkybox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkybox");
		
		ADayCycleManager_Gen2_C_UpdateSkybox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CheckForShipRoot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::CheckForShipRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CheckForShipRoot");
		
		ADayCycleManager_Gen2_C_CheckForShipRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpWarmUpComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::ServerWarpWarmUpComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpWarmUpComplete");
		
		ADayCycleManager_Gen2_C_ServerWarpWarmUpComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpCooldownComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::ServerWarpCooldownComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpCooldownComplete");
		
		ADayCycleManager_Gen2_C_ServerWarpCooldownComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetWarpLoopStarted
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::NetWarpLoopStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetWarpLoopStarted");
		
		ADayCycleManager_Gen2_C_NetWarpLoopStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RecieveMatineeUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManager_Gen2_C::RecieveMatineeUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RecieveMatineeUpdated");
		
		ADayCycleManager_Gen2_C_RecieveMatineeUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ExecuteUbergraph_DayCycleManager_Gen2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::ExecuteUbergraph_DayCycleManager_Gen2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ExecuteUbergraph_DayCycleManager_Gen2");
		
		ADayCycleManager_Gen2_C_ExecuteUbergraph_DayCycleManager_Gen2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkyboxIndex__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::UpdateSkyboxIndex__DelegateSignature(int32_t CurrentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkyboxIndex__DelegateSignature");
		
		ADayCycleManager_Gen2_C_UpdateSkyboxIndex__DelegateSignature_Params params {};
		params.CurrentIndex = CurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuffPlayerStatus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInCave                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnderwater                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManager_Gen2_C::UpdateAreaBuffPlayerStatus__DelegateSignature(bool IsInCave, bool IsUnderwater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuffPlayerStatus__DelegateSignature");
		
		ADayCycleManager_Gen2_C_UpdateAreaBuffPlayerStatus__DelegateSignature_Params params {};
		params.IsInCave = IsInCave;
		params.IsUnderwater = IsUnderwater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADayCycleManager_Gen2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADayCycleManager_Gen2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DayCycleManager_Gen2.DayCycleManager_Gen2_C");
		return ptr;
	}

}


