// ScriptStruct YDataValidator.YAssetValidatorEntry
// Size: 0x28 (Inherited: 0x00)
struct FYAssetValidatorEntry {
	struct TArray<struct FYAssetTagCheckEntry> m_prefixes; // 0x00(0x10)
	struct TArray<struct FYAssetTagCheckEntry> m_suffixes; // 0x10(0x10)
	bool m_enabled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct YDataValidator.YAssetTagCheckEntry
// Size: 0x38 (Inherited: 0x00)
struct FYAssetTagCheckEntry {
	struct FString m_tag; // 0x00(0x10)
	bool m_specificTagEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> m_onlyCheckSpecificFolders; // 0x18(0x10)
	struct TArray<struct FString> m_ignoreSpecificFolders; // 0x28(0x10)
};

// ScriptStruct YDataValidator.YAssetValidationStatistics
// Size: 0x20 (Inherited: 0x00)
struct FYAssetValidationStatistics {
	struct TArray<struct FYAssetValidatorEntry> m_enabledAssetTypes; // 0x00(0x10)
	struct TArray<struct FYAssetValidatorEntry> m_disabledAssetTypes; // 0x10(0x10)
};

