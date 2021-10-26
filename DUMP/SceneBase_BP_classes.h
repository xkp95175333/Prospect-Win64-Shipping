// BlueprintGeneratedClass SceneBase_BP.SceneBase_BP_C
// Size: 0x430 (Inherited: 0x420)
struct ASceneBase_BP_C : AYScene {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x428(0x08)

	void BP_UnInitialize(); // Function SceneBase_BP.SceneBase_BP_C.BP_UnInitialize // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_Initialize(struct FYSceneRuntimeInitializationData sceneRuntimeInitializationData); // Function SceneBase_BP.SceneBase_BP_C.BP_Initialize // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_SceneBase_BP(int32_t EntryPoint); // Function SceneBase_BP.SceneBase_BP_C.ExecuteUbergraph_SceneBase_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

