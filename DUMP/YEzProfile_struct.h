// Enum YEzProfile.EYEzProfileRuntimeState
enum class EYEzProfileRuntimeState : uint8 {
	None,
	ProfileStats,
	FinalizingStats,
	UploadingFiles,
	EYEzProfileRuntimeState_MAX,
};

// Enum YEzProfile.EYEZProfileType
enum class EYEZProfileType : uint8 {
	None,
	FullProfile,
	NetProfile,
	EYEZProfileType_MAX,
};

// ScriptStruct YEzProfile.YEzProfileRuntimeData
// Size: 0x80 (Inherited: 0x00)
struct FYEzProfileRuntimeData {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct YEzProfile.YEzProfileInitializationData
// Size: 0x18 (Inherited: 0x00)
struct FYEzProfileInitializationData {
	struct FString m_triggerReason; // 0x00(0x10)
	float m_timeToProfile; // 0x10(0x04)
	enum class EYEZProfileType m_type; // 0x14(0x01)
	bool m_forceNewProfile; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

