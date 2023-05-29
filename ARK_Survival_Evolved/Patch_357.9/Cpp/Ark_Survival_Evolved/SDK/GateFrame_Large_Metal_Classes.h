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
	 * BlueprintGeneratedClass GateFrame_Large_Metal.GateFrame_Large_Metal_C
	 * Size -> 0x0010 (FullSize[0x0AF8] - InheritedSize[0x0AE8])
	 */
	class AGateFrame_Large_Metal_C : public AFenceFoundation_Base_New_C
	{
	public:
		class USphereComponent*                                    Sphere2;                                                 // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    Sphere1;                                                 // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_GateFrame_Large_Metal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
