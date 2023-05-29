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
	 * 		Name   -> Function Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C.Check for Ai Attach to Tree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_Eden_Summoned_C::CheckforAiAttachtoTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C.Check for Ai Attach to Tree");
		
		AThylacoleo_Character_BP_Eden_Summoned_C_CheckforAiAttachtoTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_Eden_Summoned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C.UserConstructionScript");
		
		AThylacoleo_Character_BP_Eden_Summoned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Thylacoleo_Character_BP_Eden_Summoned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_Eden_Summoned_C::ExecuteUbergraph_Thylacoleo_Character_BP_Eden_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Thylacoleo_Character_BP_Eden_Summoned");
		
		AThylacoleo_Character_BP_Eden_Summoned_C_ExecuteUbergraph_Thylacoleo_Character_BP_Eden_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThylacoleo_Character_BP_Eden_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThylacoleo_Character_BP_Eden_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C");
		return ptr;
	}

}


