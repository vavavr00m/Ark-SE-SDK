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
	 * Function Buff_FoliageTrap.Buff_FoliageTrap_C.GetTrapCooldownAtLocation
	 */
	struct ABuff_FoliageTrap_C_GetTrapCooldownAtLocation_Params
	{
	public:
		struct FVector                                             AtLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZCEN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     CooldownAtLocation;                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    LocationIndex;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FoliageTrap.Buff_FoliageTrap_C.CullCooldowns
	 */
	struct ABuff_FoliageTrap_C_CullCooldowns_Params
	{	};

	/**
	 * Function Buff_FoliageTrap.Buff_FoliageTrap_C.ReceiveBeginPlay
	 */
	struct ABuff_FoliageTrap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_FoliageTrap.Buff_FoliageTrap_C.CheckFoliageForTrap
	 */
	struct ABuff_FoliageTrap_C_CheckFoliageForTrap_Params
	{
	public:
		class UClass*                                              HarvestComponentClass;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AtLoc;                                                   // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             TheInstigatorLoc;                                        // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FoliageTrap.Buff_FoliageTrap_C.BuffTickServer
	 */
	struct ABuff_FoliageTrap_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FoliageTrap.Buff_FoliageTrap_C.UserConstructionScript
	 */
	struct ABuff_FoliageTrap_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FoliageTrap.Buff_FoliageTrap_C.MultiPlayPoisonMushroomSound
	 */
	struct ABuff_FoliageTrap_C_MultiPlayPoisonMushroomSound_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FoliageTrap.Buff_FoliageTrap_C.ExecuteUbergraph_Buff_FoliageTrap
	 */
	struct ABuff_FoliageTrap_C_ExecuteUbergraph_Buff_FoliageTrap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
