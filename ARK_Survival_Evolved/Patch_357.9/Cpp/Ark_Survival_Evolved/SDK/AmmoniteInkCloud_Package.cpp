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
	 * 		Name   -> Function AmmoniteInkCloud.AmmoniteInkCloud_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmmoniteInkCloud_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmmoniteInkCloud.AmmoniteInkCloud_C.UserConstructionScript");
		
		AAmmoniteInkCloud_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function AmmoniteInkCloud.AmmoniteInkCloud_C.ExecuteUbergraph_AmmoniteInkCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmmoniteInkCloud_C::ExecuteUbergraph_AmmoniteInkCloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmmoniteInkCloud.AmmoniteInkCloud_C.ExecuteUbergraph_AmmoniteInkCloud");
		
		AAmmoniteInkCloud_C_ExecuteUbergraph_AmmoniteInkCloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmmoniteInkCloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmmoniteInkCloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoniteInkCloud.AmmoniteInkCloud_C");
		return ptr;
	}

}


