// Class YInitializationPlugin.YInitializationManager
// Size: 0x78 (Inherited: 0x28)
struct UYInitializationManager : UObject {
	struct TMap<int32_t, struct FYInitializationRequestEntry> m_requests; // 0x28(0x50)

	int32_t RequestCompleteInitializationCallbackBlueprint(struct AActor* actorContext, struct FDelegate Delegate, bool outSuccess, enum class EYInitializationRequestSettingTypes Type); // Function YInitializationPlugin.YInitializationManager.RequestCompleteInitializationCallbackBlueprint // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x130f610
};

// Class YInitializationPlugin.YIInitializationRetrievalInterface
// Size: 0x28 (Inherited: 0x28)
struct UYIInitializationRetrievalInterface : UInterface {
};

