#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
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
	 * Function FishingNetHelperFunction.FishingNetHelperFunction_C.Stop Reeling
	 */
	struct UFishingNetHelperFunction_C_StopReeling_Params
	{
	public:
		class UObject*                                             Fisher;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishingNetHelperFunction.FishingNetHelperFunction_C.Cancel Cast
	 */
	struct UFishingNetHelperFunction_C_CancelCast_Params
	{
	public:
		class UObject*                                             ProjectileOwner;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishingNetHelperFunction.FishingNetHelperFunction_C.Caught Fish
	 */
	struct UFishingNetHelperFunction_C_CaughtFish_Params
	{
	public:
		class UObject*                                             ProjectileOwner;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                Fish;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishingNetHelperFunction.FishingNetHelperFunction_C.Pass Projectile Reference
	 */
	struct UFishingNetHelperFunction_C_PassProjectileReference_Params
	{
	public:
		class UObject*                                             ProjectileOwner;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterProjectile*                                  Projectile;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishingNetHelperFunction.FishingNetHelperFunction_C.reel
	 */
	struct UFishingNetHelperFunction_C_reel_Params
	{
	public:
		class UObject*                                             Fisher;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishingNetHelperFunction.FishingNetHelperFunction_C.Update Rope
	 */
	struct UFishingNetHelperFunction_C_UpdateRope_Params
	{
	public:
		class AShooterProjectile*                                  netprojectile;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             RopeEndpointLocation;                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_51PK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FishingNetHelperFunction.FishingNetHelperFunction_C.Notify Net Collided With Water
	 */
	struct UFishingNetHelperFunction_C_NotifyNetCollidedWithWater_Params
	{
	public:
		class UObject*                                             ProjectileOwner;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WaterCollideLocation;                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ProjectileRotation;                                      // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishingNetHelperFunction.FishingNetHelperFunction_C.ExecuteUbergraph_FishingNetHelperFunction
	 */
	struct UFishingNetHelperFunction_C_ExecuteUbergraph_FishingNetHelperFunction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
