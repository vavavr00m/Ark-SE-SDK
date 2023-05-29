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
	 * 		Name   -> Function MissionRace_Interface.MissionRace_Interface_C.GetPlayerRanking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Ranking                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionRace_Interface_C::GetPlayerRanking(int32_t PlayerIndex, int32_t* Ranking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionRace_Interface.MissionRace_Interface_C.GetPlayerRanking");
		
		UMissionRace_Interface_C_GetPlayerRanking_Params params {};
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ranking != nullptr)
			*Ranking = params.Ranking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionRace_Interface.MissionRace_Interface_C.GetRaceData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FRacePlayerData>                     RaceData                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void UMissionRace_Interface_C::GetRaceData(TArray<struct FRacePlayerData>* RaceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionRace_Interface.MissionRace_Interface_C.GetRaceData");
		
		UMissionRace_Interface_C_GetRaceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RaceData != nullptr)
			*RaceData = params.RaceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionRace_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionRace_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionRace_Interface.MissionRace_Interface_C");
		return ptr;
	}

}


