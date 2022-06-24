#pragma once

/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OculusLibrary.OculusFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetPositionScale3D(const struct FVector& PosScale3D);
		bool STATIC_IsPlayerControllerFollowHmdEnabled();
		bool STATIC_GetUserProfile(struct FHmdUserProfile* Profile);
		void STATIC_GetRawSensorData(struct FVector* Accelerometer, struct FVector* Gyro, struct FVector* Magnetometer, float* Temperature, float* TimeInSeconds);
		void STATIC_GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale);
		void STATIC_GetPlayerCameraManagerFollowHmd(bool* bFollowHmdOrientation, bool* bFollowHmdPosition);
		void STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
		void STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
		void STATIC_EnablePlayerControllerFollowHmd(bool bEnable);
		void STATIC_EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
