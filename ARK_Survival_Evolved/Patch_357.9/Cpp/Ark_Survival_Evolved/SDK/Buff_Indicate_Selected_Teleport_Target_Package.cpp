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
	 * 		Name   -> Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Indicate_Selected_Teleport_Target_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.BPClientHandleNetExecCommand");
		
		ABuff_Indicate_Selected_Teleport_Target_C_BPClientHandleNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Indicate_Selected_Teleport_Target_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.UserConstructionScript");
		
		ABuff_Indicate_Selected_Teleport_Target_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.toggle active on targeting client
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Indicate_Selected_Teleport_Target_C::toggleactiveontargetingclient(class APlayerController* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.toggle active on targeting client");
		
		ABuff_Indicate_Selected_Teleport_Target_C_toggleactiveontargetingclient_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Indicate_Selected_Teleport_Target_C::ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target");
		
		ABuff_Indicate_Selected_Teleport_Target_C_ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Indicate_Selected_Teleport_Target_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Indicate_Selected_Teleport_Target_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C");
		return ptr;
	}

}


