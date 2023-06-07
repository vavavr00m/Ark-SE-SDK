#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D
	 */
	struct UOculusFunctionLibrary_SetPositionScale3D_Params
	{
	public:
		struct FVector                                             PosScale3D;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled
	 */
	struct UOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.GetUserProfile
	 */
	struct UOculusFunctionLibrary_GetUserProfile_Params
	{
	public:
		struct FHmdUserProfile                                     Profile;                                                 // 0x0000(0x0048)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData
	 */
	struct UOculusFunctionLibrary_GetRawSensorData_Params
	{
	public:
		struct FVector                                             Accelerometer;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Gyro;                                                    // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Magnetometer;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Temperature;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TimeInSeconds;                                           // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.GetPose
	 */
	struct UOculusFunctionLibrary_GetPose_Params
	{
	public:
		struct FRotator                                            DeviceRotation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DevicePosition;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NeckPosition;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUseOrienationForPlayerCamera;                           // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUsePositionForPlayerCamera;                             // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5GT2[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PositionScale;                                           // 0x0028(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd
	 */
	struct UOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params
	{
	public:
		bool                                                       bFollowHmdOrientation;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFollowHmdPosition;                                      // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
	 */
	struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
	{
	public:
		struct FRotator                                            OutRot;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutPosOffset;                                            // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
	 */
	struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
	{
	public:
		struct FRotator                                            OutRotation;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutBaseOffsetInMeters;                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd
	 */
	struct UOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd
	 */
	struct UOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params
	{
	public:
		bool                                                       bFollowHmdOrientation;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFollowHmdPosition;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
