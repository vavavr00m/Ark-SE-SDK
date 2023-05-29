﻿/**
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
	 * 		Name   -> Function MissionMetaTagInfo.MissionMetaTagInfo_C.ExecuteUbergraph_MissionMetaTagInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionMetaTagInfo_C::ExecuteUbergraph_MissionMetaTagInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionMetaTagInfo.MissionMetaTagInfo_C.ExecuteUbergraph_MissionMetaTagInfo");
		
		UMissionMetaTagInfo_C_ExecuteUbergraph_MissionMetaTagInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionMetaTagInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionMetaTagInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionMetaTagInfo.MissionMetaTagInfo_C");
		return ptr;
	}

}


