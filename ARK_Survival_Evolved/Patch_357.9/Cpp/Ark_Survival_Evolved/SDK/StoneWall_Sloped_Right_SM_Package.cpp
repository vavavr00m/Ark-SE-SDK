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
	 * 		Name   -> Function StoneWall_Sloped_Right_SM.StoneWall_Sloped_Right_SM_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStoneWall_Sloped_Right_SM_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StoneWall_Sloped_Right_SM.StoneWall_Sloped_Right_SM_C.UserConstructionScript");
		
		AStoneWall_Sloped_Right_SM_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StoneWall_Sloped_Right_SM.StoneWall_Sloped_Right_SM_C.ExecuteUbergraph_StoneWall_Sloped_Right_SM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStoneWall_Sloped_Right_SM_C::ExecuteUbergraph_StoneWall_Sloped_Right_SM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StoneWall_Sloped_Right_SM.StoneWall_Sloped_Right_SM_C.ExecuteUbergraph_StoneWall_Sloped_Right_SM");
		
		AStoneWall_Sloped_Right_SM_C_ExecuteUbergraph_StoneWall_Sloped_Right_SM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStoneWall_Sloped_Right_SM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStoneWall_Sloped_Right_SM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StoneWall_Sloped_Right_SM.StoneWall_Sloped_Right_SM_C");
		return ptr;
	}

}


