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
	 * 		Name   -> Function Ammonite_AIController.Ammonite_AIController_C.BPShouldNotifyNeighbor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        neighbor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAmmonite_AIController_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter* neighbor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammonite_AIController.Ammonite_AIController_C.BPShouldNotifyNeighbor");
		
		AAmmonite_AIController_C_BPShouldNotifyNeighbor_Params params {};
		params.neighbor = neighbor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Ammonite_AIController.Ammonite_AIController_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmmonite_AIController_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammonite_AIController.Ammonite_AIController_C.UserConstructionScript");
		
		AAmmonite_AIController_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Ammonite_AIController.Ammonite_AIController_C.ExecuteUbergraph_Ammonite_AIController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmmonite_AIController_C::ExecuteUbergraph_Ammonite_AIController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammonite_AIController.Ammonite_AIController_C.ExecuteUbergraph_Ammonite_AIController");
		
		AAmmonite_AIController_C_ExecuteUbergraph_Ammonite_AIController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmmonite_AIController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmmonite_AIController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ammonite_AIController.Ammonite_AIController_C");
		return ptr;
	}

}


