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
	 * BlueprintGeneratedClass ArrowNet_Interface.ArrowNet_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UArrowNet_Interface_C : public UInterface
	{
	public:
		void RemoteSetCrosshairSize(float InSize, float* OutSize);
		void RemoteSetCrosshairColor(const struct FLinearColor& InColor, struct FLinearColor* outColor);
		void GetHudData(class UClass** ProjectileClass, struct FVector* SocketLocation, struct FVector* FireDirection, float* AimedTargetCheckRadius, bool* IsFPV);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
