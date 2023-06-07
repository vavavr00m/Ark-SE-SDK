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
	 * 		Name   -> Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFurniture_WallChain_XmasLights_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.UserConstructionScript");
		
		AFurniture_WallChain_XmasLights_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFurniture_WallChain_XmasLights_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.ReceiveBeginPlay");
		
		AFurniture_WallChain_XmasLights_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.ExecuteUbergraph_Furniture_WallChain_XmasLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFurniture_WallChain_XmasLights_C::ExecuteUbergraph_Furniture_WallChain_XmasLights(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.ExecuteUbergraph_Furniture_WallChain_XmasLights");
		
		AFurniture_WallChain_XmasLights_C_ExecuteUbergraph_Furniture_WallChain_XmasLights_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFurniture_WallChain_XmasLights_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFurniture_WallChain_XmasLights_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C");
		return ptr;
	}

}


