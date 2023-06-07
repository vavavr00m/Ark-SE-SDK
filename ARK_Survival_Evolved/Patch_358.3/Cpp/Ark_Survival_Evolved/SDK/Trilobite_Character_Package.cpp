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
	 * 		Name   -> Function Trilobite_Character.Trilobite_Character_C.BP_ForceAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATrilobite_Character_C::BP_ForceAllowAddBuff(class UClass* BuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_Character.Trilobite_Character_C.BP_ForceAllowAddBuff");
		
		ATrilobite_Character_C_BP_ForceAllowAddBuff_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Trilobite_Character.Trilobite_Character_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrilobite_Character_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_Character.Trilobite_Character_C.UserConstructionScript");
		
		ATrilobite_Character_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Trilobite_Character.Trilobite_Character_C.ExecuteUbergraph_Trilobite_Character
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrilobite_Character_C::ExecuteUbergraph_Trilobite_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_Character.Trilobite_Character_C.ExecuteUbergraph_Trilobite_Character");
		
		ATrilobite_Character_C_ExecuteUbergraph_Trilobite_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrilobite_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrilobite_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trilobite_Character.Trilobite_Character_C");
		return ptr;
	}

}


