// Enum YInitializationPlugin.EYInitializationRequestSettingTypes
enum class EYInitializationRequestSettingTypes : uint8 {
	Invalid,
	AllComplete,
	IgnoreCharacterCustomization,
	EYInitializationRequestSettingTypes_MAX,
};

// ScriptStruct YInitializationPlugin.YRuntimeInitializationContext
// Size: 0x30 (Inherited: 0x00)
struct FYRuntimeInitializationContext {
	struct APlayerController* m_controller; // 0x00(0x08)
	struct APlayerState* m_playerState; // 0x08(0x08)
	struct APawn* m_pawn; // 0x10(0x08)
	struct FString m_userId; // 0x18(0x10)
	bool m_isAdditionalIntialized; // 0x28(0x01)
	enum class EYInitializationRequestSettingTypes m_requestSettingType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct YInitializationPlugin.YInitializationRequestEntry
// Size: 0x30 (Inherited: 0x00)
struct FYInitializationRequestEntry {
	struct AActor* m_relevantContext; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct FDelegate m_bpDelegate; // 0x18(0x10)
	enum class EYInitializationRequestSettingTypes m_requestType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

