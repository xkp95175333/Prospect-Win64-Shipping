// Class YEzProfile.YEZProfileManager
// Size: 0xd8 (Inherited: 0x28)
struct UYEZProfileManager : UObject {
	struct FString m_uploadShare; // 0x28(0x10)
	struct FYEzProfileInitializationData m_initializationData; // 0x38(0x18)
	struct FYEzProfileRuntimeData m_runtimeData; // 0x50(0x80)
	float m_defaultEZProfileTime; // 0xd0(0x04)
	float m_defaultEZNetProfileTime; // 0xd4(0x04)

	bool StartEZProfile(struct UObject* objCtx, struct UYEZProfileManager* Instance, struct FYEzProfileInitializationData initializationData); // Function YEzProfile.YEZProfileManager.StartEZProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104e830
};

