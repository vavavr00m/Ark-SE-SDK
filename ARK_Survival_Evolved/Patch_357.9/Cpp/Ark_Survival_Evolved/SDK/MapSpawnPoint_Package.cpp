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
	 * 		Name   -> Function MapSpawnPoint.MapSpawnPoint_C.Get_Default__MapSpawnPoint_C_Visiblity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	ESlateVisibility UMapSpawnPoint_C::Get_Default__MapSpawnPoint_C_Visiblity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapSpawnPoint.MapSpawnPoint_C.Get_Default__MapSpawnPoint_C_Visiblity_1");
		
		UMapSpawnPoint_C_Get_Default__MapSpawnPoint_C_Visiblity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MapSpawnPoint.MapSpawnPoint_C.ExecuteUbergraph_MapSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapSpawnPoint_C::ExecuteUbergraph_MapSpawnPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapSpawnPoint.MapSpawnPoint_C.ExecuteUbergraph_MapSpawnPoint");
		
		UMapSpawnPoint_C_ExecuteUbergraph_MapSpawnPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapSpawnPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapSpawnPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C");
		return ptr;
	}

}


