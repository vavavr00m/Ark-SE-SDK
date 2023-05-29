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
	 * BlueprintGeneratedClass IceKaijuControlNode1.IceKaijuControlNode1_C
	 * Size -> 0x0010 (FullSize[0x0478] - InheritedSize[0x0468])
	 */
	class AIceKaijuControlNode1_C : public AActor
	{
	public:
		class USkeletalMeshComponent*                              Node;                                                    // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCapsuleComponent*                                   Capsule1;                                                // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_IceKaijuControlNode1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
