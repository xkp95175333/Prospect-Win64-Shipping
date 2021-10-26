// BlueprintGeneratedClass OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C
// Size: 0x30 (Inherited: 0x28)
struct UOpenDebugMenuCommand_BP_C : UYNavigationCommand {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)

	bool BP_IsAvailable(struct AYPlayerController* PlayerController); // Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.BP_IsAvailable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnExecute(struct AYPlayerController* PlayerController); // Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.BP_OnExecute // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_OpenDebugMenuCommand_BP(int32_t EntryPoint); // Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.ExecuteUbergraph_OpenDebugMenuCommand_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

