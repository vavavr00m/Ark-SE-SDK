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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ProjBoomerang.ProjBoomerang_C
	 * Size -> 0x001C (FullSize[0x072C] - InheritedSize[0x0710])
	 */
	class AProjBoomerang_C : public APrimalProjectileBoomerang
	{
	public:
		class UAudioComponent*                                     ProjectileSFX;                                           // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     RotationPoint;                                           // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetWorldLocation_ReturnValue;                   // 0x0720(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void BndEvt__ProjectileSFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature();
		void ExecuteUbergraph_ProjBoomerang(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
