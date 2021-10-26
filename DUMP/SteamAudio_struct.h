// Enum SteamAudio.EIplAudioEngine
enum class EIplAudioEngine : uint8 {
	UNREAL,
	EIplAudioEngine_MAX,
};

// Enum SteamAudio.EIplRayTracerType
enum class EIplRayTracerType : uint8 {
	PHONON,
	EMBREE,
	RADEONRAYS,
	EIplRayTracerType_MAX,
};

// Enum SteamAudio.EIplConvolutionType
enum class EIplConvolutionType : uint8 {
	PHONON,
	TRUEAUDIONEXT,
	EIplConvolutionType_MAX,
};

// Enum SteamAudio.EIplSimulationType
enum class EIplSimulationType : uint8 {
	REALTIME,
	BAKED,
	DISABLED,
	EIplSimulationType_MAX,
};

// Enum SteamAudio.EIplDirectOcclusionMode
enum class EIplDirectOcclusionMode : uint8 {
	NONE,
	DIRECTOCCLUSION_NOTRANSMISSION,
	DIRECTOCCLUSION_TRANSMISSIONBYVOLUME,
	DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY,
	EIplDirectOcclusionMode_MAX,
};

// Enum SteamAudio.EIplDirectOcclusionMethod
enum class EIplDirectOcclusionMethod : uint8 {
	RAYCAST,
	VOLUMETRIC,
	EIplDirectOcclusionMethod_MAX,
};

// Enum SteamAudio.EIplHrtfInterpolationMethod
enum class EIplHrtfInterpolationMethod : uint8 {
	NEAREST,
	BILINEAR,
	EIplHrtfInterpolationMethod_MAX,
};

// Enum SteamAudio.EIplSpatializationMethod
enum class EIplSpatializationMethod : uint8 {
	PANNING,
	HRTF,
	EIplSpatializationMethod_MAX,
};

// Enum SteamAudio.EQualitySettings
enum class EQualitySettings : uint8 {
	LOW,
	MEDIUM,
	HIGH,
	CUSTOM,
	EQualitySettings_MAX,
};

// Enum SteamAudio.EPhononMaterial
enum class EPhononMaterial : uint8 {
	GENERIC,
	BRICK,
	CONCRETE,
	CERAMIC,
	GRAVEL,
	CARPET,
	GLASS,
	PLASTER,
	WOOD,
	METAL,
	ROCK,
	CUSTOM,
	EPhononMaterial_MAX,
};

// Enum SteamAudio.EPhononProbeMobility
enum class EPhononProbeMobility : uint8 {
	STATIC,
	DYNAMIC,
	EPhononProbeMobility_MAX,
};

// Enum SteamAudio.EPhononProbePlacementStrategy
enum class EPhononProbePlacementStrategy : uint8 {
	CENTROID,
	UNIFORM_FLOOR,
	EPhononProbePlacementStrategy_MAX,
};

// ScriptStruct SteamAudio.BakedDataInfo
// Size: 0x0c (Inherited: 0x00)
struct FBakedDataInfo {
	struct FName Name; // 0x00(0x08)
	int32_t Size; // 0x08(0x04)
};

// ScriptStruct SteamAudio.SubmixEffectReverbPluginSettings
// Size: 0x01 (Inherited: 0x00)
struct FSubmixEffectReverbPluginSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

