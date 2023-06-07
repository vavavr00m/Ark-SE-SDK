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
	 * 		Name   -> Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.BPCustomIsRelevantForClient
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphinLaserUpgrade_C::BPCustomIsRelevantForClient(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.BPCustomIsRelevantForClient");
		
		ASpaceDolphinLaserUpgrade_C_BPCustomIsRelevantForClient_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphinLaserUpgrade_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ReceiveTick");
		
		ASpaceDolphinLaserUpgrade_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphinLaserUpgrade_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.UserConstructionScript");
		
		ASpaceDolphinLaserUpgrade_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ExecuteUbergraph_SpaceDolphinLaserUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphinLaserUpgrade_C::ExecuteUbergraph_SpaceDolphinLaserUpgrade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ExecuteUbergraph_SpaceDolphinLaserUpgrade");
		
		ASpaceDolphinLaserUpgrade_C_ExecuteUbergraph_SpaceDolphinLaserUpgrade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceDolphinLaserUpgrade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceDolphinLaserUpgrade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C");
		return ptr;
	}

}


