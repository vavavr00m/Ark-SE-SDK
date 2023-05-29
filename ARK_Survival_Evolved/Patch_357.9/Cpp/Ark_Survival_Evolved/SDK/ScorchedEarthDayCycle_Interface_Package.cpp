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
	 * 		Name   -> Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetIsElectricalStorm
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _return_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScorchedEarthDayCycle_Interface_C::GetIsElectricalStorm(bool* _return_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetIsElectricalStorm");
		
		UScorchedEarthDayCycle_Interface_C_GetIsElectricalStorm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_return_ != nullptr)
			*_return_ = params._return_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              LocationRegions                                            (Parm, OutParm, ZeroConstructor)
	 * 		int32_t                                            CurrentRegion                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScorchedEarthDayCycle_Interface_C::GetElectricalStormValues(TArray<class AActor*>* LocationRegions, int32_t* CurrentRegion, float* Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues");
		
		UScorchedEarthDayCycle_Interface_C_GetElectricalStormValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationRegions != nullptr)
			*LocationRegions = params.LocationRegions;
		if (CurrentRegion != nullptr)
			*CurrentRegion = params.CurrentRegion;
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScorchedEarthDayCycle_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScorchedEarthDayCycle_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C");
		return ptr;
	}

}


