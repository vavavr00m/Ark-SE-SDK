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
	 * 		Name   -> Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARagnarok_Wyvern_Override_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.UserConstructionScript");
		
		ARagnarok_Wyvern_Override_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARagnarok_Wyvern_Override_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.ReceiveBeginPlay");
		
		ARagnarok_Wyvern_Override_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.ExecuteUbergraph_Ragnarok_Wyvern_Override
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARagnarok_Wyvern_Override_C::ExecuteUbergraph_Ragnarok_Wyvern_Override(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.ExecuteUbergraph_Ragnarok_Wyvern_Override");
		
		ARagnarok_Wyvern_Override_C_ExecuteUbergraph_Ragnarok_Wyvern_Override_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARagnarok_Wyvern_Override_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARagnarok_Wyvern_Override_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C");
		return ptr;
	}

}


