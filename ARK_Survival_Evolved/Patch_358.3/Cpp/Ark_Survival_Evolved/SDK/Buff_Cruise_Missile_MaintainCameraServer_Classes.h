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
	 * BlueprintGeneratedClass Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C
	 * Size -> 0x0018 (FullSize[0x0998] - InheritedSize[0x0980])
	 */
	class ABuff_Cruise_Missile_MaintainCameraServer_C : public ABuff_Base_C
	{
	public:
		struct FVector                                             CameraLocation;                                          // 0x0980(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CameraRotation;                                          // 0x098C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void BPHandleOnStartFire(bool bFromGamepad);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
