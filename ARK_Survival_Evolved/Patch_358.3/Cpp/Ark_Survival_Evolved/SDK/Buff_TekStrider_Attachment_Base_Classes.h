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
	 * BlueprintGeneratedClass Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C
	 * Size -> 0x002F (FullSize[0x09AF] - InheritedSize[0x0980])
	 */
	class ABuff_TekStrider_Attachment_Base_C : public APrimalBuff
	{
	public:
		EPrimalEquipmentType                                       equipmentType;                                           // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRequiresAiming;                                         // 0x0981(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LCAB[0x2];                                   // 0x0982(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttachmentChargeUsage;                                   // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUsesAttachmentHUDSlot;                                  // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CDVE[0x7];                                   // 0x0989(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          InstigatorItemIcon;                                      // 0x0990(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentCharge;                                           // 0x0998(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxCharge;                                               // 0x099C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowTrackingItemDurability;                            // 0x09A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XWFO[0x3];                                   // 0x09A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentDurability;                                       // 0x09A4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDurability;                                           // 0x09A8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECollisionChannel                                          tracechannel;                                            // 0x09AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EDrawDebugTrace                                            debugdrawnecktrace;                                      // 0x09AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Aicanuseattachment;                                      // 0x09AE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void getsocketloc(const struct FVector& fallbackloc, const class FName& socketname, class APrimalCharacter* Character, struct FVector* Loc, bool* couldgetsocketloc);
		void isheadclear(const class FName& extrasocket, bool fromanimbp, bool* headisclear, bool* couldfindsocket);
		bool tracecheckforblockersbetweenlocations(const struct FVector& Start, const struct FVector& End, bool ignorefoliage, struct FHitResult* OutHit);
		void BuffTickServer(float DeltaTime);
		void clearrider(class AShooterCharacter* prevrider);
		void setrider();
		void TriggerDoubletapped();
		void TriggerReleased();
		void BPDeactivated(class AActor* ForInstigator);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void Trigger();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_TekStrider_Attachment_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
