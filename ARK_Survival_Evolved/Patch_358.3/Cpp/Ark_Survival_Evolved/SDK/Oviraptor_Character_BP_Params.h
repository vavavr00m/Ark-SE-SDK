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
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem
	 */
	struct AOviraptor_Character_BP_C_OnRep_CarriedItem_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg
	 */
	struct AOviraptor_Character_BP_C_FindCarriedEgg_Params
	{
	public:
		bool                                                       bIsAnimNotify;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost
	 */
	struct AOviraptor_Character_BP_C_UpdateEggBoost_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UserConstructionScript
	 */
	struct AOviraptor_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick
	 */
	struct AOviraptor_Character_BP_C_BlueprintTamedTick_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AOviraptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg
	 */
	struct AOviraptor_Character_BP_C_DoCheckEgg_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP
	 */
	struct AOviraptor_Character_BP_C_ExecuteUbergraph_Oviraptor_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
