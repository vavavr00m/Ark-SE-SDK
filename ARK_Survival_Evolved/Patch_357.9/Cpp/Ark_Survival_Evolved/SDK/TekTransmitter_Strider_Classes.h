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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass TekTransmitter_Strider.TekTransmitter_Strider_C
	 * Size -> 0x0018 (FullSize[0x0E40] - InheritedSize[0x0E28])
	 */
	class ATekTransmitter_Strider_C : public AStorageBox_TekTransmitter_C
	{
	public:
		class USkeletalMeshComponent*                              TekStriderSkeletalMesh;                                  // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Activatedvfx;                                            // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              bodyVFXbuffforactivetransmitter;                         // 0x0E38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void BPContainerDeactivated();
		void BPContainerActivated();
		void BPPreInitializeComponents();
		bool BPCanBeActivatedByPlayer(class AShooterPlayerController* PC);
		void UserConstructionScript();
		void ExecuteUbergraph_TekTransmitter_Strider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
