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
	 * Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPDeactivated
	 */
	struct ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.TickLifeStealing
	 */
	struct ABuff_DesmodusLifeStealingFromCarriedCharacter_C_TickLifeStealing_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BX0I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPSetupForInstigator
	 */
	struct ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.UserConstructionScript
	 */
	struct ABuff_DesmodusLifeStealingFromCarriedCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickClient
	 */
	struct ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickServer
	 */
	struct ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter
	 */
	struct ABuff_DesmodusLifeStealingFromCarriedCharacter_C_ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
