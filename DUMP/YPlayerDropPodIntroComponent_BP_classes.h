// BlueprintGeneratedClass YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C
// Size: 0xd8 (Inherited: 0xb0)
struct UYPlayerDropPodIntroComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AYPlayerController_Match* YPlayerController; // 0xb8(0x08)
	struct AIntroActor_Base_BP_C* IntroActor; // 0xc0(0x08)
	bool HasStartedPlayingIntro; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct AActor* IntroActorClass; // 0xd0(0x08)

	void OnRep_HasIntroSequencesEnded(); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.OnRep_HasIntroSequencesEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AdjustTowardsGround(float playerHalfHeight, struct FTransform InTransform, struct FTransform OutTransform); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.AdjustTowardsGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SpawnIntroActor(struct AIntroActor_Base_BP_C* IntroActor, bool returnResult); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.SpawnIntroActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EndIntroSequence(); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.EndIntroSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartIntroSequence(); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.StartIntroSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void IntroSequenceFinished(); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.IntroSequenceFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnDropPodIntroStarted_Event_1(); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.BP_OnDropPodIntroStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPlayerDropPodIntroComponent_BP(int32_t EntryPoint); // Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.ExecuteUbergraph_YPlayerDropPodIntroComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

