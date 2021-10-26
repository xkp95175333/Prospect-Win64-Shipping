// BlueprintGeneratedClass PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C
// Size: 0xc1 (Inherited: 0xb0)
struct UPlayerCharacterCombatAwarenessComponent_BP_C : UYPlayerCharacterAwarenessComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AYPlayerCharacter* PlayerCharacterOwner; // 0xb8(0x08)
	bool HasShield; // 0xc0(0x01)

	void GetOwningPlayerControllerAwarenesComponent(struct UYPlayerControllerAwarenessComponent* awarenessComp); // Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.GetOwningPlayerControllerAwarenesComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void TryGetLocalPlayerControllerAwarenessComponent(struct UYPlayerControllerAwarenessComponent* Component); // Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.TryGetLocalPlayerControllerAwarenessComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnTakeDamage_Event_1(struct FYDealtDamageData Data); // Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnTakeDamage_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEnterDBNOEvent_Event_1(struct AController* Controller); // Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnEnterDBNOEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDealDamage(struct FYDealtDamageData Data); // Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnDealDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CurrentShieldChangedDelegate_Event_1(float CurrentShield); // Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.CurrentShieldChangedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerCharacterCombatAwarenessComponent_BP(int32_t EntryPoint); // Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.ExecuteUbergraph_PlayerCharacterCombatAwarenessComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

