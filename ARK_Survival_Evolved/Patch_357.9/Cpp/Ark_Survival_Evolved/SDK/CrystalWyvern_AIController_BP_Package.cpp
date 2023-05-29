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
	 * 		Name   -> Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BPShouldNotifyAnyNeighbor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        neighbor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrystalWyvern_AIController_BP_C::BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter* neighbor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BPShouldNotifyAnyNeighbor");
		
		ACrystalWyvern_AIController_BP_C_BPShouldNotifyAnyNeighbor_Params params {};
		params.neighbor = neighbor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BP_TamedOverrideHorizontalLandingRange
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector2D ACrystalWyvern_AIController_BP_C::BP_TamedOverrideHorizontalLandingRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BP_TamedOverrideHorizontalLandingRange");
		
		ACrystalWyvern_AIController_BP_C_BP_TamedOverrideHorizontalLandingRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.UserConstructionScript");
		
		ACrystalWyvern_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.ExecuteUbergraph_CrystalWyvern_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_AIController_BP_C::ExecuteUbergraph_CrystalWyvern_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.ExecuteUbergraph_CrystalWyvern_AIController_BP");
		
		ACrystalWyvern_AIController_BP_C_ExecuteUbergraph_CrystalWyvern_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrystalWyvern_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrystalWyvern_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C");
		return ptr;
	}

}


