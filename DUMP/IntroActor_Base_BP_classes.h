// BlueprintGeneratedClass IntroActor_Base_BP.IntroActor_Base_BP_C
// Size: 0x25a (Inherited: 0x240)
struct AIntroActor_Base_BP_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct FMulticastInlineDelegate IntroSequenceFinished; // 0x248(0x10)
	bool IntroStarted; // 0x258(0x01)
	bool IntroFinished; // 0x259(0x01)

	void StartIntroSequence(struct AActor* startActor); // Function IntroActor_Base_BP.IntroActor_Base_BP_C.StartIntroSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void IntroSequenceFinished__DelegateSignature(); // Function IntroActor_Base_BP.IntroActor_Base_BP_C.IntroSequenceFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

