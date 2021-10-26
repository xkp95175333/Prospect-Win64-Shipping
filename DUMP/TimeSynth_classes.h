// Class TimeSynth.TimeSynthVolumeGroup
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynthVolumeGroup : UObject {
	float DefaultVolume; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class TimeSynth.TimeSynthClip
// Size: 0x68 (Inherited: 0x28)
struct UTimeSynthClip : UObject {
	struct TArray<struct FTimeSynthClipSound> Sounds; // 0x28(0x10)
	struct FVector2D VolumeScaleDb; // 0x38(0x08)
	struct FVector2D PitchScaleSemitones; // 0x40(0x08)
	struct FTimeSynthTimeDef FadeInTime; // 0x48(0x08)
	bool bApplyFadeOut; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FTimeSynthTimeDef FadeOutTime; // 0x54(0x08)
	struct FTimeSynthTimeDef ClipDuration; // 0x5c(0x08)
	enum class ETimeSynthEventClipQuantization ClipQuantization; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class TimeSynth.TimeSynthComponent
// Size: 0x1110 (Inherited: 0x6c0)
struct UTimeSynthComponent : USynthComponent {
	struct FTimeSynthQuantizationSettings QuantizationSettings; // 0x6c0(0x14)
	char bEnableSpectralAnalysis : 1; // 0x6d4(0x01)
	char pad_6D4_1 : 7; // 0x6d4(0x01)
	char pad_6D5[0x3]; // 0x6d5(0x03)
	struct TArray<float> FrequenciesToAnalyze; // 0x6d8(0x10)
	enum class ETimeSynthFFTSize FFTSize; // 0x6e8(0x01)
	char pad_6E9[0x7]; // 0x6e9(0x07)
	struct FMulticastInlineDelegate OnPlaybackTime; // 0x6f0(0x10)
	char bIsFilterAEnabled : 1; // 0x700(0x01)
	char bIsFilterBEnabled : 1; // 0x700(0x01)
	char pad_700_2 : 6; // 0x700(0x01)
	char pad_701[0x3]; // 0x701(0x03)
	struct FTimeSynthFilterSettings FilterASettings; // 0x704(0x0c)
	struct FTimeSynthFilterSettings FilterBSettings; // 0x710(0x0c)
	char bIsEnvelopeFollowerEnabled : 1; // 0x71c(0x01)
	char pad_71C_1 : 7; // 0x71c(0x01)
	char pad_71D[0x3]; // 0x71d(0x03)
	struct FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings; // 0x720(0x0c)
	int32_t MaxPoolSize; // 0x72c(0x04)
	char pad_730[0x9e0]; // 0x730(0x9e0)

	void StopSoundsOnVolumeGroupWithFadeOverride(struct UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef FadeTime); // Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x104cc30
	void StopSoundsOnVolumeGroup(struct UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization); // Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x104cb60
	void StopClipWithFadeOverride(struct FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef FadeTime); // Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x104ca10
	void StopClip(struct FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization); // Function TimeSynth.TimeSynthComponent.StopClip // (Final|Native|Public|BlueprintCallable) // @ game+0x104c920
	void SetVolumeGroup(struct UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec); // Function TimeSynth.TimeSynthComponent.SetVolumeGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x104c810
	void SetSeed(int32_t InSeed); // Function TimeSynth.TimeSynthComponent.SetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x104c780
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings InQuantizationSettings); // Function TimeSynth.TimeSynthComponent.SetQuantizationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x104c6c0
	void SetFilterSettings(enum class ETimeSynthFilter Filter, struct FTimeSynthFilterSettings InSettings); // Function TimeSynth.TimeSynthComponent.SetFilterSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x104c5d0
	void SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled); // Function TimeSynth.TimeSynthComponent.SetFilterEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x104c500
	void SetFFTSize(enum class ETimeSynthFFTSize InFFTSize); // Function TimeSynth.TimeSynthComponent.SetFFTSize // (Final|Native|Public|BlueprintCallable) // @ game+0x104c480
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings InSettings); // Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x104c3d0
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled); // Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x104c340
	void SetBPM(float BeatsPerMinute); // Function TimeSynth.TimeSynthComponent.SetBPM // (Final|Native|Public|BlueprintCallable) // @ game+0x104c2c0
	void ResetSeed(); // Function TimeSynth.TimeSynthComponent.ResetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x104c2a0
	struct FTimeSynthClipHandle PlayClip(struct UTimeSynthClip* InClip, struct UTimeSynthVolumeGroup* InVolumeGroup); // Function TimeSynth.TimeSynthComponent.PlayClip // (Final|Native|Public|BlueprintCallable) // @ game+0x104c1c0
	bool HasActiveClips(); // Function TimeSynth.TimeSynthComponent.HasActiveClips // (Final|Native|Public|BlueprintCallable) // @ game+0x104c190
	struct TArray<struct FTimeSynthSpectralData> GetSpectralData(); // Function TimeSynth.TimeSynthComponent.GetSpectralData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104c110
	int32_t GetMaxActiveClipLimit(); // Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104c0e0
	float GetEnvelopeFollowerValue(); // Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104c0c0
	int32_t GetBPM(); // Function TimeSynth.TimeSynthComponent.GetBPM // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104c090
	void AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, struct FDelegate OnQuantizationEvent); // Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x104bfa0
};

