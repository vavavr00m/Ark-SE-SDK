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
	 * 		Name   -> Function StructureBP_Wardrums.StructureBP_Wardrums_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureBP_Wardrums_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureBP_Wardrums.StructureBP_Wardrums_C.UserConstructionScript");
		
		AStructureBP_Wardrums_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StructureBP_Wardrums.StructureBP_Wardrums_C.ExecuteUbergraph_StructureBP_Wardrums
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureBP_Wardrums_C::ExecuteUbergraph_StructureBP_Wardrums(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureBP_Wardrums.StructureBP_Wardrums_C.ExecuteUbergraph_StructureBP_Wardrums");
		
		AStructureBP_Wardrums_C_ExecuteUbergraph_StructureBP_Wardrums_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureBP_Wardrums_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureBP_Wardrums_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_Wardrums.StructureBP_Wardrums_C");
		return ptr;
	}

}


