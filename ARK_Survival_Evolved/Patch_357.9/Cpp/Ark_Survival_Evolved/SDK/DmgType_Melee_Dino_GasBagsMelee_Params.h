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
	 * Function DmgType_Melee_Dino_GasBagsMelee.DmgType_Melee_Dino_GasBagsMelee_C.BPAdjustAggro
	 */
	struct UDmgType_Melee_Dino_GasBagsMelee_C_BPAdjustAggro_Params
	{
	public:
		class APrimalDinoAIController*                             DamagedCharacterController;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    DamagedCharacter;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredAggroValue;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      IncomingDamage;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0018(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
