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
	 * 		Name   -> Function StructureBP_WoodBench.StructureBP_WoodBench_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureBP_WoodBench_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureBP_WoodBench.StructureBP_WoodBench_C.UserConstructionScript");
		
		AStructureBP_WoodBench_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StructureBP_WoodBench.StructureBP_WoodBench_C.ExecuteUbergraph_StructureBP_WoodBench
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureBP_WoodBench_C::ExecuteUbergraph_StructureBP_WoodBench(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureBP_WoodBench.StructureBP_WoodBench_C.ExecuteUbergraph_StructureBP_WoodBench");
		
		AStructureBP_WoodBench_C_ExecuteUbergraph_StructureBP_WoodBench_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureBP_WoodBench_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureBP_WoodBench_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_WoodBench.StructureBP_WoodBench_C");
		return ptr;
	}

}


