// Enum YConventionPlugin.EYCodeConventionStandardEnum
enum class EYCodeConventionStandardEnum : uint8 {
	ValueA,
	ValueB,
	ValueC,
	Count,
	EYCodeConventionStandardEnum_MAX,
};

// ScriptStruct YConventionPlugin.YCodeConventionBlueprintVarGroup
// Size: 0x0c (Inherited: 0x00)
struct FYCodeConventionBlueprintVarGroup {
	float CameraTraceVolumeWidth; // 0x00(0x04)
	float CameraTraceVolumeHeight; // 0x04(0x04)
	bool ShowCameraWidget; // 0x08(0x01)
	bool ShowWeaponWidget; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

