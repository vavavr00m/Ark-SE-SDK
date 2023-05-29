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
	 * 		Name   -> Function Thylacoleo_Chibi_AnimBlueprint.Thylacoleo_Chibi_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThylacoleo_Chibi_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Chibi_AnimBlueprint.Thylacoleo_Chibi_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UThylacoleo_Chibi_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Thylacoleo_Chibi_AnimBlueprint.Thylacoleo_Chibi_AnimBlueprint_C.ExecuteUbergraph_Thylacoleo_Chibi_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThylacoleo_Chibi_AnimBlueprint_C::ExecuteUbergraph_Thylacoleo_Chibi_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Chibi_AnimBlueprint.Thylacoleo_Chibi_AnimBlueprint_C.ExecuteUbergraph_Thylacoleo_Chibi_AnimBlueprint");
		
		UThylacoleo_Chibi_AnimBlueprint_C_ExecuteUbergraph_Thylacoleo_Chibi_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThylacoleo_Chibi_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThylacoleo_Chibi_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Thylacoleo_Chibi_AnimBlueprint.Thylacoleo_Chibi_AnimBlueprint_C");
		return ptr;
	}

}


