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
	 * 		Name   -> Function StructureBP_Gravestone.StructureBP_Gravestone_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureBP_Gravestone_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureBP_Gravestone.StructureBP_Gravestone_C.UserConstructionScript");
		
		AStructureBP_Gravestone_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StructureBP_Gravestone.StructureBP_Gravestone_C.ExecuteUbergraph_StructureBP_Gravestone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureBP_Gravestone_C::ExecuteUbergraph_StructureBP_Gravestone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureBP_Gravestone.StructureBP_Gravestone_C.ExecuteUbergraph_StructureBP_Gravestone");
		
		AStructureBP_Gravestone_C_ExecuteUbergraph_StructureBP_Gravestone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureBP_Gravestone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureBP_Gravestone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_Gravestone.StructureBP_Gravestone_C");
		return ptr;
	}

}


