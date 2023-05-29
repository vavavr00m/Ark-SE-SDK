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
	 * BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C
	 * Size -> 0x0008 (FullSize[0x13E8] - InheritedSize[0x13E0])
	 */
	class APlayerControllerBlueprint_C : public AShooterPlayerController
	{
	public:
		class UUserWidget*                                         InventoryScene;                                          // 0x13E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
		void CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* Actor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
		struct FVector BPCheckCanDinoSpawnFromLocation(class UClass* DinoClass, struct FVector* CheckLocation);
		void UserConstructionScript();
		void ExecuteUbergraph_PlayerControllerBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
