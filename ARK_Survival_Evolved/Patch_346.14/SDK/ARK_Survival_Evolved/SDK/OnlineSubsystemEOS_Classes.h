#pragma once

/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
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
	 * Class OnlineSubsystemEOS.EOSNetDriver
	 * Size -> 0x0000 (FullSize[0x03C0] - InheritedSize[0x03C0])
	 */
	class UEOSNetDriver : public UIpNetDriver
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
