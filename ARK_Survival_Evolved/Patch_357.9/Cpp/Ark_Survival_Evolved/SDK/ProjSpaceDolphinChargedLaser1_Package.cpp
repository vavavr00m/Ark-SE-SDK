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
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjSpaceDolphinChargedLaser1_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C.UserConstructionScript");
		
		AProjSpaceDolphinChargedLaser1_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjSpaceDolphinChargedLaser1_C::ExecuteUbergraph_ProjSpaceDolphinChargedLaser1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser1");
		
		AProjSpaceDolphinChargedLaser1_C_ExecuteUbergraph_ProjSpaceDolphinChargedLaser1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjSpaceDolphinChargedLaser1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjSpaceDolphinChargedLaser1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C");
		return ptr;
	}

}


