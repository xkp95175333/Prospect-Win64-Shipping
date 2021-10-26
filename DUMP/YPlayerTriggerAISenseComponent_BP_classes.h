// BlueprintGeneratedClass YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C
// Size: 0x110 (Inherited: 0xb0)
struct UYPlayerTriggerAISenseComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AYPlayerCharacter* OwnerPlayerCharacter; // 0xb8(0x08)
	struct FDataTableRowHandle Sense_Sprinting; // 0xc0(0x10)
	struct FDataTableRowHandle Sense_Walking; // 0xd0(0x10)
	struct FDataTableRowHandle Sense_Crouching; // 0xe0(0x10)
	struct FDataTableRowHandle Sense_Smell; // 0xf0(0x10)
	struct FDataTableRowHandle Sense_Landing; // 0x100(0x10)

	void ReportAISenseInternal(struct FDataTableRowHandle SenseTrigegrRowHandle); // Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ReportAISenseInternal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void TriggerSmell(); // Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.TriggerSmell // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnWeaponFired_Event_1(struct UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent); // Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.OnWeaponFired_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnControllerChanged_Event(struct AController* Controller); // Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.BP_OnControllerChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TryTriggerFootstep(); // Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.TryTriggerFootstep // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnLanding_Event_1(struct FYLandingEventInfo landingInfo); // Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.BP_OnLanding_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPlayerTriggerAISenseComponent_BP(int32_t EntryPoint); // Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ExecuteUbergraph_YPlayerTriggerAISenseComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

