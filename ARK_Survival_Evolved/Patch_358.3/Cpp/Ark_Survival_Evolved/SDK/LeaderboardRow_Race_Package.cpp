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
	 * 		Name   -> Function LeaderboardRow_Race.LeaderboardRow_Race_C.ExecuteUbergraph_LeaderboardRow_Race
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULeaderboardRow_Race_C::ExecuteUbergraph_LeaderboardRow_Race(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardRow_Race.LeaderboardRow_Race_C.ExecuteUbergraph_LeaderboardRow_Race");
		
		ULeaderboardRow_Race_C_ExecuteUbergraph_LeaderboardRow_Race_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboardRow_Race_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaderboardRow_Race_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LeaderboardRow_Race.LeaderboardRow_Race_C");
		return ptr;
	}

}


