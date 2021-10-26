// BlueprintGeneratedClass YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C
// Size: 0xd0 (Inherited: 0xb0)
struct UYPlayerEscapeComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool CanEscape; // 0xb8(0x01)
	bool IsOwnerInDBNO; // 0xb9(0x01)
	bool WasAbleToEscapePriorToDBNO; // 0xba(0x01)
	bool HasShownNotification; // 0xbb(0x01)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FDataTableRowHandle VOHandle_ReadyToEscape; // 0xc0(0x10)

	bool CanUpdateEscapeProgress(); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.CanUpdateEscapeProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetCanEscape(bool CanEscape); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.SetCanEscape // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EscapeStatusChanged(); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.EscapeStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnEnterDBNOEvent_Event_1(struct AController* Controller); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEnterDBNOEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRecoveredDBNO_Event_1(struct AController* Controller); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRecoveredDBNO_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRevived_Event_1(struct AController* Controller); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRevived_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StoppedDBNO(); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.StoppedDBNO // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TryShowingNotification(); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.TryShowingNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEscapeStateChanged(); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEscapeStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPlayerEscapeComponent_BP(int32_t EntryPoint); // Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ExecuteUbergraph_YPlayerEscapeComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

