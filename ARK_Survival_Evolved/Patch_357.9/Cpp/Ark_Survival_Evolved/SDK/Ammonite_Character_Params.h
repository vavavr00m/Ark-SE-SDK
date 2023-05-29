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
	 * Function Ammonite_Character.Ammonite_Character_C.Apply Rage Buff on Character
	 */
	struct AAmmonite_Character_C_ApplyRageBuffonCharacter_Params
	{
	public:
		class AActor*                                              OtherCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              BuffToApply;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ammonite_Character.Ammonite_Character_C.UserConstructionScript
	 */
	struct AAmmonite_Character_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ammonite_Character.Ammonite_Character_C.AnimNotify_CallForHelp
	 */
	struct AAmmonite_Character_C_AnimNotify_CallForHelp_Params
	{
	public:
		class AActor*                                              NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ammonite_Character.Ammonite_Character_C.ReceiveAnyDamage
	 */
	struct AAmmonite_Character_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ARXS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ammonite_Character.Ammonite_Character_C.SpawnLastInk
	 */
	struct AAmmonite_Character_C_SpawnLastInk_Params
	{	};

	/**
	 * Function Ammonite_Character.Ammonite_Character_C.ExecuteUbergraph_Ammonite_Character
	 */
	struct AAmmonite_Character_C_ExecuteUbergraph_Ammonite_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
