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
	 * Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.OrbitCameraChanged
	 */
	struct UPrimalItemSkin_SunGlasses_C_OrbitCameraChanged_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.EnteredThirdPerson
	 */
	struct UPrimalItemSkin_SunGlasses_C_EnteredThirdPerson_Params
	{	};

	/**
	 * Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.EnteredFirstPerson
	 */
	struct UPrimalItemSkin_SunGlasses_C_EnteredFirstPerson_Params
	{	};

	/**
	 * Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.CreateSunglassesComponent
	 */
	struct UPrimalItemSkin_SunGlasses_C_CreateSunglassesComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ParentComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Created;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JCRB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.BPAnimNotifyCustomEvent
	 */
	struct UPrimalItemSkin_SunGlasses_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses
	 */
	struct UPrimalItemSkin_SunGlasses_C_ExecuteUbergraph_PrimalItemSkin_SunGlasses_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
