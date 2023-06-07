﻿#pragma once

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
	 * BlueprintGeneratedClass WeapHarpoon_Net.WeapHarpoon_Net_C
	 * Size -> 0x0040 (FullSize[0x0E78] - InheritedSize[0x0E38])
	 */
	class AWeapHarpoon_Net_C : public AWeapHarpoon_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh2;                                             // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CrosshairMID;                                            // 0x0E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  CrosshairMaterial;                                       // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CrosshairSize;                                           // 0x0E50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H1GT[0x4];                                   // 0x0E54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WeaponHelperBuffClass;                                   // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GetAimedActorCheckRadius;                                // 0x0E60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CrosshairColor;                                          // 0x0E64(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CrosshairMaterialSize;                                   // 0x0E74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RemoteSetCrosshairSize(float InSize, float* OutSize);
		void RemoteSetCrosshairColor(const struct FLinearColor& InColor, struct FLinearColor* outColor);
		void GetHudData(class UClass** ProjectileClass, struct FVector* SocketLocation, struct FVector* FireDirection, float* AimedTargetCheckRadius, bool* isFPV);
		struct FColor BPGetCrosshairColor();
		void BPStartEquippedNotify();
		void StartUnequipEvent();
		void ReceiveDestroyed();
		void GetCrosshairColor(struct FLinearColor* Color);
		void BPDrawHud(class AShooterHUD* HUD);
		void UserConstructionScript();
		void ExecuteUbergraph_WeapHarpoon_Net(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
