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
	 * 		Name   -> Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.BPUpdateBestTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      bestTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontSetIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontSetOut                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AActor* ASpaceDolphin_AIController_BP_C::BPUpdateBestTarget(class AActor* bestTarget, bool dontSetIn, bool* dontSetOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.BPUpdateBestTarget");
		
		ASpaceDolphin_AIController_BP_C_BPUpdateBestTarget_Params params {};
		params.bestTarget = bestTarget;
		params.dontSetIn = dontSetIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dontSetOut != nullptr)
			*dontSetOut = params.dontSetOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.UserConstructionScript");
		
		ASpaceDolphin_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.ExecuteUbergraph_SpaceDolphin_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_AIController_BP_C::ExecuteUbergraph_SpaceDolphin_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.ExecuteUbergraph_SpaceDolphin_AIController_BP");
		
		ASpaceDolphin_AIController_BP_C_ExecuteUbergraph_SpaceDolphin_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceDolphin_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceDolphin_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C");
		return ptr;
	}

}


