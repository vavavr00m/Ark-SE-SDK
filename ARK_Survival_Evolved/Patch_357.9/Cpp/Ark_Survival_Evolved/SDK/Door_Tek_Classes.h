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
	 * BlueprintGeneratedClass Door_Tek.Door_Tek_C
	 * Size -> 0x0013 (FullSize[0x0D70] - InheritedSize[0x0D5D])
	 */
	class ADoor_Tek_C : public ADoor_Tek_Base_C
	{
	public:
		unsigned char                                              UnknownData_GMP3[0x3];                                   // 0x0D5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    Sphere1;                                                 // 0x0D60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0D68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Door_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
