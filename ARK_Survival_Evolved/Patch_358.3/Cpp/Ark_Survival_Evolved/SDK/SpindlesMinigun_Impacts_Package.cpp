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
	 * 		Name   -> Function SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindlesMinigun_Impacts_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C.UserConstructionScript");
		
		ASpindlesMinigun_Impacts_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C.ExecuteUbergraph_SpindlesMinigun_Impacts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindlesMinigun_Impacts_C::ExecuteUbergraph_SpindlesMinigun_Impacts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C.ExecuteUbergraph_SpindlesMinigun_Impacts");
		
		ASpindlesMinigun_Impacts_C_ExecuteUbergraph_SpindlesMinigun_Impacts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpindlesMinigun_Impacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpindlesMinigun_Impacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C");
		return ptr;
	}

}


