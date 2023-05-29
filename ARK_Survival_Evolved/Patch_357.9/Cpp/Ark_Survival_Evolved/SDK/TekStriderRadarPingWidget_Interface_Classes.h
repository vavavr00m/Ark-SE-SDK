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
	 * BlueprintGeneratedClass TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTekStriderRadarPingWidget_Interface_C : public UInterface
	{
	public:
		void GetHudData(struct FVector* PingWorldLocation, float* ProgressBarValue, struct FLinearColor* BaseColor, float* RingScale, float* Visibility);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
