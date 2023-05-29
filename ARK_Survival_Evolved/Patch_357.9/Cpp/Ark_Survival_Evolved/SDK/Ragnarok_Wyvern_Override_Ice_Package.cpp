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
	 * 		Name   -> Function Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARagnarok_Wyvern_Override_Ice_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C.UserConstructionScript");
		
		ARagnarok_Wyvern_Override_Ice_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C.ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARagnarok_Wyvern_Override_Ice_C::ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C.ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice");
		
		ARagnarok_Wyvern_Override_Ice_C_ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARagnarok_Wyvern_Override_Ice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARagnarok_Wyvern_Override_Ice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C");
		return ptr;
	}

}


