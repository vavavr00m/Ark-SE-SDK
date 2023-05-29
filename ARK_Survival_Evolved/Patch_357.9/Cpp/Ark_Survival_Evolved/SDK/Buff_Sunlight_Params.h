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
	 * Function Buff_Sunlight.Buff_Sunlight_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_Sunlight_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AKZ7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.Get Max Health
	 */
	struct ABuff_Sunlight_C_GetMaxHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8UDD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.GetDamageMitigationArmorEquippedCount
	 */
	struct ABuff_Sunlight_C_GetDamageMitigationArmorEquippedCount_Params
	{
	public:
		int32_t                                                    NumItemsEquipped;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.DamageDurability
	 */
	struct ABuff_Sunlight_C_DamageDurability_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.RemoveBuffs
	 */
	struct ABuff_Sunlight_C_RemoveBuffs_Params
	{	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.BPActivated
	 */
	struct ABuff_Sunlight_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.BuffTickServer
	 */
	struct ABuff_Sunlight_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.UserConstructionScript
	 */
	struct ABuff_Sunlight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.LocalParticleFadeout__FinishedFunc
	 */
	struct ABuff_Sunlight_C_LocalParticleFadeout__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.LocalParticleFadeout__UpdateFunc
	 */
	struct ABuff_Sunlight_C_LocalParticleFadeout__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.ReceiveBeginPlay
	 */
	struct ABuff_Sunlight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.BPDeactivated
	 */
	struct ABuff_Sunlight_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Sunlight.Buff_Sunlight_C.ExecuteUbergraph_Buff_Sunlight
	 */
	struct ABuff_Sunlight_C_ExecuteUbergraph_Buff_Sunlight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
