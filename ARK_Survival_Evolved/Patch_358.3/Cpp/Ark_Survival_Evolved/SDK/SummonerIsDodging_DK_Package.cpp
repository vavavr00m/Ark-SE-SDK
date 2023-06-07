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
	 * 		Name   -> Function SummonerIsDodging_DK.SummonerIsDodging_DK_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USummonerIsDodging_DK_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SummonerIsDodging_DK.SummonerIsDodging_DK_C.ReceiveConditionCheck");
		
		USummonerIsDodging_DK_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SummonerIsDodging_DK.SummonerIsDodging_DK_C.ExecuteUbergraph_SummonerIsDodging_DK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USummonerIsDodging_DK_C::ExecuteUbergraph_SummonerIsDodging_DK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SummonerIsDodging_DK.SummonerIsDodging_DK_C.ExecuteUbergraph_SummonerIsDodging_DK");
		
		USummonerIsDodging_DK_C_ExecuteUbergraph_SummonerIsDodging_DK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USummonerIsDodging_DK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USummonerIsDodging_DK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SummonerIsDodging_DK.SummonerIsDodging_DK_C");
		return ptr;
	}

}


