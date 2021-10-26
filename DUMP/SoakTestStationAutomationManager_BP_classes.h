// BlueprintGeneratedClass SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C
// Size: 0x278 (Inherited: 0x240)
struct ASoakTestStationAutomationManager_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct AYPlayerController* YPlayerController; // 0x250(0x08)
	bool automationRunning; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct FString commandLine; // 0x260(0x10)
	enum class EYMatchmakingResult MatchamkingResult; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float MatchmakingWaitTimeout; // 0x274(0x04)

	void getRandomGamemodeForMM(int32_t randInt, char GameMode); // Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.getRandomGamemodeForMM // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void RequestSoaktestStationAutomation(); // Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.RequestSoaktestStationAutomation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void startSoaktestMatchmaking(); // Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.startSoaktestMatchmaking // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void doRequeue(); // Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.doRequeue // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void startSoaktestStationBehavior(); // Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.startSoaktestStationBehavior // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CliStartSoaktestStationAutomation(); // Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.CliStartSoaktestStationAutomation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_SoakTestStationAutomationManager_BP(int32_t EntryPoint); // Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.ExecuteUbergraph_SoakTestStationAutomationManager_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

