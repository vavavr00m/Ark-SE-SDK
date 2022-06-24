/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x03961EB0
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     PosScale3D                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOculusFunctionLibrary::STATIC_SetPositionScale3D(const struct FVector& PosScale3D)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D");
		
		UOculusFunctionLibrary_SetPositionScale3D_Params params {};
		params.PosScale3D = PosScale3D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03961F90
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UOculusFunctionLibrary::STATIC_IsPlayerControllerFollowHmdEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled");
		
		UOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03961FC0
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.GetUserProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHmdUserProfile                             Profile                                                    (Parm, OutParm)
	 */
	bool UOculusFunctionLibrary::STATIC_GetUserProfile(struct FHmdUserProfile* Profile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetUserProfile");
		
		UOculusFunctionLibrary_GetUserProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Profile != nullptr)
			*Profile = params.Profile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03962080
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Accelerometer                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gyro                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Magnetometer                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Temperature                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TimeInSeconds                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOculusFunctionLibrary::STATIC_GetRawSensorData(struct FVector* Accelerometer, struct FVector* Gyro, struct FVector* Magnetometer, float* Temperature, float* TimeInSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData");
		
		UOculusFunctionLibrary_GetRawSensorData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Accelerometer != nullptr)
			*Accelerometer = params.Accelerometer;
		if (Gyro != nullptr)
			*Gyro = params.Gyro;
		if (Magnetometer != nullptr)
			*Magnetometer = params.Magnetometer;
		if (Temperature != nullptr)
			*Temperature = params.Temperature;
		if (TimeInSeconds != nullptr)
			*TimeInSeconds = params.TimeInSeconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03962320
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.GetPose
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    DeviceRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DevicePosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NeckPosition                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseOrienationForPlayerCamera                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUsePositionForPlayerCamera                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PositionScale                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOculusFunctionLibrary::STATIC_GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetPose");
		
		UOculusFunctionLibrary_GetPose_Params params {};
		params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
		params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
		params.PositionScale = PositionScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceRotation != nullptr)
			*DeviceRotation = params.DeviceRotation;
		if (DevicePosition != nullptr)
			*DevicePosition = params.DevicePosition;
		if (NeckPosition != nullptr)
			*NeckPosition = params.NeckPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03962600
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bFollowHmdOrientation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFollowHmdPosition                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOculusFunctionLibrary::STATIC_GetPlayerCameraManagerFollowHmd(bool* bFollowHmdOrientation, bool* bFollowHmdPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd");
		
		UOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFollowHmdOrientation != nullptr)
			*bFollowHmdOrientation = params.bFollowHmdOrientation;
		if (bFollowHmdPosition != nullptr)
			*bFollowHmdPosition = params.bFollowHmdPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03962730
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    OutRot                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutPosOffset                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOculusFunctionLibrary::STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset");
		
		UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRot != nullptr)
			*OutRot = params.OutRot;
		if (OutPosOffset != nullptr)
			*OutPosOffset = params.OutPosOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03962860
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutBaseOffsetInMeters                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOculusFunctionLibrary::STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters");
		
		UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRotation != nullptr)
			*OutRotation = params.OutRotation;
		if (OutBaseOffsetInMeters != nullptr)
			*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03962990
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOculusFunctionLibrary::STATIC_EnablePlayerControllerFollowHmd(bool bEnable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd");
		
		UOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03962A20
	 * 		Name   -> Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFollowHmdOrientation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFollowHmdPosition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOculusFunctionLibrary::STATIC_EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd");
		
		UOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params params {};
		params.bFollowHmdOrientation = bFollowHmdOrientation;
		params.bFollowHmdPosition = bFollowHmdPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOculusFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OculusLibrary.OculusFunctionLibrary");
		return ptr;
	}

}


