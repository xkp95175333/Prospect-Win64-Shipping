// Class YChatFilteringPlugin.YChatFilterDataObject
// Size: 0x48 (Inherited: 0x28)
struct UYChatFilterDataObject : UObject {
	struct TArray<struct FYFilterWordEntry> m_cachedWords; // 0x28(0x10)
	struct TArray<struct FYFilterWordEntry> m_regexWords; // 0x38(0x10)
};

// Class YChatFilteringPlugin.YChatFilterExternalFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYChatFilterExternalFunctions : UObject {

	bool ContainsProfanity(struct UYChatFilterDataObject* Data, struct FString inString, struct FString outString); // Function YChatFilteringPlugin.YChatFilterExternalFunctions.ContainsProfanity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1341fd0
};

