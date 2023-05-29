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
	 * 		Name   -> Function Leaderboard_Race.Leaderboard_Race_C.BPFormatLeaderboardRow
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MissionTag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLeaderboardRow                             DatabaseRow                                                (Parm, OutParm, ReferenceParm)
	 */
	struct FLeaderboardDisplayRow ULeaderboard_Race_C::BPFormatLeaderboardRow(const class FName& MissionTag, int32_t index, struct FLeaderboardRow* DatabaseRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_Race.Leaderboard_Race_C.BPFormatLeaderboardRow");
		
		ULeaderboard_Race_C_BPFormatLeaderboardRow_Params params {};
		params.MissionTag = MissionTag;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DatabaseRow != nullptr)
			*DatabaseRow = params.DatabaseRow;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Leaderboard_Race.Leaderboard_Race_C.SelectIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Place                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULeaderboard_Race_C::SelectIcon(int32_t Place, class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_Race.Leaderboard_Race_C.SelectIcon");
		
		ULeaderboard_Race_C_SelectIcon_Params params {};
		params.Place = Place;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Leaderboard_Race.Leaderboard_Race_C.ExecuteUbergraph_Leaderboard_Race
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULeaderboard_Race_C::ExecuteUbergraph_Leaderboard_Race(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_Race.Leaderboard_Race_C.ExecuteUbergraph_Leaderboard_Race");
		
		ULeaderboard_Race_C_ExecuteUbergraph_Leaderboard_Race_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboard_Race_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaderboard_Race_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Leaderboard_Race.Leaderboard_Race_C");
		return ptr;
	}

}


