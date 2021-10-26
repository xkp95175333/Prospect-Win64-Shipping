// BlueprintGeneratedClass YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C
// Size: 0x108 (Inherited: 0xb0)
struct UYIdleDetectionComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FVector WorldLocation_Previous; // 0xb8(0x0c)
	bool IsInStation; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float matchMaxIdleTime; // 0xc8(0x04)
	float stationMaxIdleTime; // 0xcc(0x04)
	int32_t TimesCheckedDuringWarning; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FTimerHandle TH_ShowKickWarning; // 0xd8(0x08)
	struct FMulticastInlineDelegate ShowIdleKickWarning; // 0xe0(0x10)
	struct FMulticastInlineDelegate HideIdleKickWarning; // 0xf0(0x10)
	struct APRO_PlayerCharacter_C* Character; // 0x100(0x08)

	void ReceiveBeginPlay(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void CheckForIdleness(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.CheckForIdleness // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientSendPlayerToOutpost(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ClientSendPlayerToOutpost // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEnterDBNOEvent_Event_2(struct AController* Controller); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnEnterDBNOEvent_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SendPlayerToOutpost(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.SendPlayerToOutpost // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowKickWarning(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowKickWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ResetWarning(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ResetWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Client_ShowIdleKickWarning(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_ShowIdleKickWarning // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Client_HideIdleKickWarning(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_HideIdleKickWarning // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void KillPlayer(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.KillPlayer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitializationComplete(struct FYRuntimeInitializationContext Result); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnInitializationComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRequestIdleKick_Event_1(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnRequestIdleKick_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrigerIdleKickExecution(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.TrigerIdleKickExecution // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YIdleDetectionComponent_BP(int32_t EntryPoint); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ExecuteUbergraph_YIdleDetectionComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void HideIdleKickWarning__DelegateSignature(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.HideIdleKickWarning__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowIdleKickWarning__DelegateSignature(); // Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowIdleKickWarning__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

