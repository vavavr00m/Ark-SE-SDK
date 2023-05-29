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
	 * 		Name   -> Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.BPForceTargetDinoRider
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           playerTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AThylacoleo_AIController_BP_C::BPForceTargetDinoRider(class AShooterCharacter* playerTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.BPForceTargetDinoRider");
		
		AThylacoleo_AIController_BP_C_BPForceTargetDinoRider_Params params {};
		params.playerTarget = playerTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.UserConstructionScript");
		
		AThylacoleo_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.ExecuteUbergraph_Thylacoleo_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_AIController_BP_C::ExecuteUbergraph_Thylacoleo_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.ExecuteUbergraph_Thylacoleo_AIController_BP");
		
		AThylacoleo_AIController_BP_C_ExecuteUbergraph_Thylacoleo_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThylacoleo_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThylacoleo_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C");
		return ptr;
	}

}


