// BlueprintGeneratedClass PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C
// Size: 0x76c (Inherited: 0x750)
struct APRO_PlayerController_Login_BP_C : AYPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x750(0x08)
	struct FString commandLine; // 0x758(0x10)
	float LoginTravelTimeout; // 0x768(0x04)

	void ReceiveBeginPlay(); // Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void sendRequestLoginAutomationStarted(); // Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.sendRequestLoginAutomationStarted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PRO_PlayerController_Login_BP(int32_t EntryPoint); // Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.ExecuteUbergraph_PRO_PlayerController_Login_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

