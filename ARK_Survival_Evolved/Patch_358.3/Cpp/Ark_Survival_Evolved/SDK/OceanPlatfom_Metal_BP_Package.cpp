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
	 * 		Name   -> Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.BPOnLinkedStructureDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            DestroyedStructure                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatfom_Metal_BP_C::BPOnLinkedStructureDestroyed(class APrimalStructure* DestroyedStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.BPOnLinkedStructureDestroyed");
		
		AOceanPlatfom_Metal_BP_C_BPOnLinkedStructureDestroyed_Params params {};
		params.DestroyedStructure = DestroyedStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatfom_Metal_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.UserConstructionScript");
		
		AOceanPlatfom_Metal_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatfom_Metal_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.ReceiveBeginPlay");
		
		AOceanPlatfom_Metal_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.ExecuteUbergraph_OceanPlatfom_Metal_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatfom_Metal_BP_C::ExecuteUbergraph_OceanPlatfom_Metal_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.ExecuteUbergraph_OceanPlatfom_Metal_BP");
		
		AOceanPlatfom_Metal_BP_C_ExecuteUbergraph_OceanPlatfom_Metal_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOceanPlatfom_Metal_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOceanPlatfom_Metal_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C");
		return ptr;
	}

}


