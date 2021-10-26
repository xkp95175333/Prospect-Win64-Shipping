// BlueprintGeneratedClass PodStart_BP.PodStart_BP_C
// Size: 0x270 (Inherited: 0x25a)
struct APodStart_BP_C : AIntroActor_Base_BP_C {
	char pad_25A[0x6]; // 0x25a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct AYPodActor* SpawnPodActor; // 0x268(0x08)

	void StartIntroSequence(struct AActor* startActor); // Function PodStart_BP.PodStart_BP_C.StartIntroSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnIntroFinished(); // Function PodStart_BP.PodStart_BP_C.OnIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PodStart_BP(int32_t EntryPoint); // Function PodStart_BP.PodStart_BP_C.ExecuteUbergraph_PodStart_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

