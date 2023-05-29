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
	 * BlueprintGeneratedClass DmgType_Direct_TropeFlakCannonProj.DmgType_Direct_TropeFlakCannonProj_C
	 * Size -> 0x000F (FullSize[0x0140] - InheritedSize[0x0131])
	 */
	class UDmgType_Direct_TropeFlakCannonProj_C : public UShooterDamageTypeBP_Base_C
	{
	public:
		unsigned char                                              UnknownData_N99T[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SaddleQualityIndexToDamageMultCurve;                     // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
