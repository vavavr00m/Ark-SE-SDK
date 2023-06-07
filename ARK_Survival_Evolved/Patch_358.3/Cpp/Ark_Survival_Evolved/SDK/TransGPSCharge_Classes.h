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
	 * BlueprintGeneratedClass TransGPSCharge.TransGPSCharge_C
	 * Size -> 0x0040 (FullSize[0x0BE0] - InheritedSize[0x0BA0])
	 */
	class ATransGPSCharge_C : public APrimalStructureExplosiveTransGPS
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3STO[0x8];                                   // 0x0BA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  RelativeTransform;                                       // 0x0BB0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		void BPPostLoadedFromSaveGame();
		void BPPlacedStructure(class APlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_TransGPSCharge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
