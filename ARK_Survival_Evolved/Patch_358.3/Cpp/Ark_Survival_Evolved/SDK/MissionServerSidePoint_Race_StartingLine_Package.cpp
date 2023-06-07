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
	 * 		Name   -> Function MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionServerSidePoint_Race_StartingLine_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C.UserConstructionScript");
		
		AMissionServerSidePoint_Race_StartingLine_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C.ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionServerSidePoint_Race_StartingLine_C::ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C.ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine");
		
		AMissionServerSidePoint_Race_StartingLine_C_ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionServerSidePoint_Race_StartingLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionServerSidePoint_Race_StartingLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C");
		return ptr;
	}

}


