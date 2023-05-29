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
	 * 		Name   -> Function Weap_TorchSkin.Weap_TorchSkin_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_TorchSkin_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_TorchSkin.Weap_TorchSkin_C.UserConstructionScript");
		
		AWeap_TorchSkin_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Weap_TorchSkin.Weap_TorchSkin_C.ExecuteUbergraph_Weap_TorchSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeap_TorchSkin_C::ExecuteUbergraph_Weap_TorchSkin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_TorchSkin.Weap_TorchSkin_C.ExecuteUbergraph_Weap_TorchSkin");
		
		AWeap_TorchSkin_C_ExecuteUbergraph_Weap_TorchSkin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeap_TorchSkin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeap_TorchSkin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weap_TorchSkin.Weap_TorchSkin_C");
		return ptr;
	}

}


