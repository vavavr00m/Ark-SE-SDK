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
	 * 		Name   -> Function CamoGasCloud.CamoGasCloud_C.BPExcludeAoEActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToConsider                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACamoGasCloud_C::BPExcludeAoEActor(class AActor* ActorToConsider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CamoGasCloud.CamoGasCloud_C.BPExcludeAoEActor");
		
		ACamoGasCloud_C_BPExcludeAoEActor_Params params {};
		params.ActorToConsider = ActorToConsider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CamoGasCloud.CamoGasCloud_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACamoGasCloud_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CamoGasCloud.CamoGasCloud_C.UserConstructionScript");
		
		ACamoGasCloud_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CamoGasCloud.CamoGasCloud_C.ExecuteUbergraph_CamoGasCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACamoGasCloud_C::ExecuteUbergraph_CamoGasCloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CamoGasCloud.CamoGasCloud_C.ExecuteUbergraph_CamoGasCloud");
		
		ACamoGasCloud_C_ExecuteUbergraph_CamoGasCloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACamoGasCloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACamoGasCloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CamoGasCloud.CamoGasCloud_C");
		return ptr;
	}

}


