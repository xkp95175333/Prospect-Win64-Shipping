// BlueprintGeneratedClass YGlobalAudio_BP.YGlobalAudio_BP_C
// Size: 0x80 (Inherited: 0x30)
struct UYGlobalAudio_BP_C : UYGlobalAudio {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	struct FDataTableRowHandle Music_Station; // 0x38(0x10)
	struct UYGameInstance* OwningGameInstance; // 0x48(0x08)
	struct USoundBase* SFX_EvacShip; // 0x50(0x08)
	struct UAudioComponent* SFX_SpaceShip_Component; // 0x58(0x08)
	struct FString GlobalAudioContext; // 0x60(0x10)
	struct USoundMix* DropPodIntroMix; // 0x70(0x08)
	struct USoundMix* MatchJoinedSoundMix; // 0x78(0x08)

	void BP_OnEnteredEndOfMatch(enum class EYPlayerMatchFinishedResult Result); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnEnteredEndOfMatch // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnLoadingScreenStart(); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnLoadingScreenStart // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Push(struct USoundMix* soundMixModifier, struct FString Context); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.Push // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClearAll(struct FString Context); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.ClearAll // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnInit(); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnInit // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnDropPodIntroStart(); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroStart // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnMatchJoined(); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnMatchJoined // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnDropPodIntroEnd(); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroEnd // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnStationStart(); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnStationStart // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnDropPodIntroSkipped(); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroSkipped // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Pop(struct USoundMix* soundMixModifier, struct FString Context); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.Pop // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YGlobalAudio_BP(int32_t EntryPoint); // Function YGlobalAudio_BP.YGlobalAudio_BP_C.ExecuteUbergraph_YGlobalAudio_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

