// Class SteamAudio.PhononGeometryComponent
// Size: 0x220 (Inherited: 0x200)
struct UPhononGeometryComponent : USceneComponent {
	bool ExportAllChildren; // 0x1f8(0x01)
	uint32_t NumVertices; // 0x1fc(0x04)
	uint32_t NumTriangles; // 0x200(0x04)
	char pad_209[0x17]; // 0x209(0x17)
};

// Class SteamAudio.PhononMaterialComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UPhononMaterialComponent : UActorComponent {
	int32_t MaterialIndex; // 0xb0(0x04)
	enum class EPhononMaterial MaterialPreset; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float LowFreqAbsorption; // 0xb8(0x04)
	float MidFreqAbsorption; // 0xbc(0x04)
	float HighFreqAbsorption; // 0xc0(0x04)
	float LowFreqTransmission; // 0xc4(0x04)
	float MidFreqTransmission; // 0xc8(0x04)
	float HighFreqTransmission; // 0xcc(0x04)
	float Scattering; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class SteamAudio.PhononOcclusionSourceSettings
// Size: 0x38 (Inherited: 0x28)
struct UPhononOcclusionSourceSettings : UOcclusionPluginSourceSettingsBase {
	enum class EIplDirectOcclusionMode DirectOcclusionMode; // 0x28(0x01)
	enum class EIplDirectOcclusionMethod DirectOcclusionMethod; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float DirectOcclusionSourceRadius; // 0x2c(0x04)
	bool DirectAttenuation; // 0x30(0x01)
	bool AirAbsorption; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// Class SteamAudio.PhononProbeComponent
// Size: 0x230 (Inherited: 0x200)
struct UPhononProbeComponent : USceneComponent {
	struct TArray<struct FVector> ProbeLocations; // 0x1f8(0x10)
	char pad_210[0x20]; // 0x210(0x20)
};

// Class SteamAudio.PhononProbeVolume
// Size: 0x2c8 (Inherited: 0x278)
struct APhononProbeVolume : AVolume {
	enum class EPhononProbePlacementStrategy PlacementStrategy; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float HorizontalSpacing; // 0x27c(0x04)
	float HeightAboveFloor; // 0x280(0x04)
	int32_t NumProbes; // 0x284(0x04)
	int32_t ProbeDataSize; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<struct FBakedDataInfo> BakedDataInfo; // 0x290(0x10)
	struct UPhononProbeComponent* PhononProbeComponent; // 0x2a0(0x08)
	struct FString ProbeBoxFileName; // 0x2a8(0x10)
	struct FString ProbeBatchFileName; // 0x2b8(0x10)
};

// Class SteamAudio.SubmixEffectReverbPluginPreset
// Size: 0x98 (Inherited: 0x68)
struct USubmixEffectReverbPluginPreset : USoundEffectSubmixPreset {
	char pad_68[0x29]; // 0x68(0x29)
	struct FSubmixEffectReverbPluginSettings Settings; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
};

// Class SteamAudio.PhononReverbSourceSettings
// Size: 0x30 (Inherited: 0x28)
struct UPhononReverbSourceSettings : UReverbPluginSourceSettingsBase {
	enum class EIplSimulationType SourceReverbSimulationType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float SourceReverbContribution; // 0x2c(0x04)
};

// Class SteamAudio.PhononSourceComponent
// Size: 0x210 (Inherited: 0x200)
struct UPhononSourceComponent : USceneComponent {
	float BakingRadius; // 0x1f8(0x04)
	struct FName UniqueIdentifier; // 0x1fc(0x08)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// Class SteamAudio.PhononSpatializationSourceSettings
// Size: 0x30 (Inherited: 0x28)
struct UPhononSpatializationSourceSettings : USpatializationPluginSourceSettingsBase {
	enum class EIplSpatializationMethod SpatializationMethod; // 0x28(0x01)
	enum class EIplHrtfInterpolationMethod HrtfInterpolationMethod; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class SteamAudio.SteamAudioSettings
// Size: 0x108 (Inherited: 0x28)
struct USteamAudioSettings : UObject {
	struct FSoftObjectPath OutputSubmix; // 0x28(0x18)
	enum class EIplAudioEngine AudioEngine; // 0x40(0x01)
	enum class EIplRayTracerType RayTracer; // 0x41(0x01)
	enum class EIplConvolutionType ConvolutionType; // 0x42(0x01)
	bool ExportBSPGeometry; // 0x43(0x01)
	bool ExportLandscapeGeometry; // 0x44(0x01)
	enum class EPhononMaterial StaticMeshMaterialPreset; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	float StaticMeshLowFreqAbsorption; // 0x48(0x04)
	float StaticMeshMidFreqAbsorption; // 0x4c(0x04)
	float StaticMeshHighFreqAbsorption; // 0x50(0x04)
	float StaticMeshLowFreqTransmission; // 0x54(0x04)
	float StaticMeshMidFreqTransmission; // 0x58(0x04)
	float StaticMeshHighFreqTransmission; // 0x5c(0x04)
	float StaticMeshScattering; // 0x60(0x04)
	enum class EPhononMaterial BSPMaterialPreset; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float BSPLowFreqAbsorption; // 0x68(0x04)
	float BSPMidFreqAbsorption; // 0x6c(0x04)
	float BSPHighFreqAbsorption; // 0x70(0x04)
	float BSPLowFreqTransmission; // 0x74(0x04)
	float BSPMidFreqTransmission; // 0x78(0x04)
	float BSPHighFreqTransmission; // 0x7c(0x04)
	float BSPScattering; // 0x80(0x04)
	enum class EPhononMaterial LandscapeMaterialPreset; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float LandscapeLowFreqAbsorption; // 0x88(0x04)
	float LandscapeMidFreqAbsorption; // 0x8c(0x04)
	float LandscapeHighFreqAbsorption; // 0x90(0x04)
	float LandscapeLowFreqTransmission; // 0x94(0x04)
	float LandscapeMidFreqTransmission; // 0x98(0x04)
	float LandscapeHighFreqTransmission; // 0x9c(0x04)
	float LandscapeScattering; // 0xa0(0x04)
	int32_t OcclusionSampleCount; // 0xa4(0x04)
	enum class EIplSimulationType ListenerReverbSimulationType; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float ListenerReverbContribution; // 0xac(0x04)
	int32_t IndirectImpulseResponseOrder; // 0xb0(0x04)
	float IndirectImpulseResponseDuration; // 0xb4(0x04)
	enum class EIplSpatializationMethod IndirectSpatializationMethod; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float IrradianceMinDistance; // 0xbc(0x04)
	uint32_t MaxSources; // 0xc0(0x04)
	enum class EQualitySettings RealtimeQualityPreset; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	int32_t RealTimeCPUCoresPercentage; // 0xc8(0x04)
	int32_t RealtimeBounces; // 0xcc(0x04)
	int32_t RealtimeRays; // 0xd0(0x04)
	int32_t RealtimeSecondaryRays; // 0xd4(0x04)
	enum class EQualitySettings BakedQualityPreset; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t BakingCPUCoresPercentage; // 0xdc(0x04)
	int32_t BakedBounces; // 0xe0(0x04)
	int32_t BakedRays; // 0xe4(0x04)
	int32_t BakedSecondaryRays; // 0xe8(0x04)
	int32_t MaxComputeUnits; // 0xec(0x04)
	float FractionComputeUnitsForIRUpdate; // 0xf0(0x04)
	int32_t TANIndirectImpulseResponseOrder; // 0xf4(0x04)
	float TANIndirectImpulseResponseDuration; // 0xf8(0x04)
	uint32_t TANMaxSources; // 0xfc(0x04)
	int32_t RadeonRaysBakingBatchSize; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

