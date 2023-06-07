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
	 * 		Name   -> Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPForceTargetDinoRider
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           playerTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASinomacrops_AIController_BP_C::BPForceTargetDinoRider(class AShooterCharacter* playerTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPForceTargetDinoRider");
		
		ASinomacrops_AIController_BP_C_BPForceTargetDinoRider_Params params {};
		params.playerTarget = playerTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.GetShouldFleeFromShooterChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldFlee                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_AIController_BP_C::GetShouldFleeFromShooterChar(class AShooterCharacter* ShooterChar, bool* ShouldFlee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.GetShouldFleeFromShooterChar");
		
		ASinomacrops_AIController_BP_C_GetShouldFleeFromShooterChar_Params params {};
		params.ShooterChar = ShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldFlee != nullptr)
			*ShouldFlee = params.ShouldFlee;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASinomacrops_AIController_BP_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPGetTargetingDesire");
		
		ASinomacrops_AIController_BP_C_BPGetTargetingDesire_Params params {};
		params.forTarget = forTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.UserConstructionScript");
		
		ASinomacrops_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.ExecuteUbergraph_Sinomacrops_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_AIController_BP_C::ExecuteUbergraph_Sinomacrops_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.ExecuteUbergraph_Sinomacrops_AIController_BP");
		
		ASinomacrops_AIController_BP_C_ExecuteUbergraph_Sinomacrops_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASinomacrops_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASinomacrops_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C");
		return ptr;
	}

}


