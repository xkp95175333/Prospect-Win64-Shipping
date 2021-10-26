// BlueprintGeneratedClass SceneQuickMenuBase_BP.SceneQuickMenuBase_BP_C
// Size: 0x440 (Inherited: 0x430)
struct ASceneQuickMenuBase_BP_C : ASceneBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UWBP_Transition_C* TransitionWidget; // 0x438(0x08)

	void GetPlayerControllerAndCharacter(struct AYPlayerController* Controller, struct AYPlayerCharacter* Character); // Function SceneQuickMenuBase_BP.SceneQuickMenuBase_BP_C.GetPlayerControllerAndCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void BP_Initialize(struct FYSceneRuntimeInitializationData sceneRuntimeInitializationData); // Function SceneQuickMenuBase_BP.SceneQuickMenuBase_BP_C.BP_Initialize // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_UnInitialize(); // Function SceneQuickMenuBase_BP.SceneQuickMenuBase_BP_C.BP_UnInitialize // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_SceneQuickMenuBase_BP(int32_t EntryPoint); // Function SceneQuickMenuBase_BP.SceneQuickMenuBase_BP_C.ExecuteUbergraph_SceneQuickMenuBase_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

