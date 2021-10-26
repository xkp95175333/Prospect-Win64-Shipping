// BlueprintGeneratedClass YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C
// Size: 0x18c (Inherited: 0xb0)
struct UYPlayerCharacterEffortsComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FDataTableRowHandle Default_Efforts_Row; // 0xb8(0x10)
	struct FST_EffortDataTableRow CurrentLoadedEffortRow; // 0xc8(0x50)
	float HeavyDamageTreshold; // 0x118(0x04)
	bool bPrintDebug?; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float maxStamina; // 0x120(0x04)
	float MaxHealth; // 0x124(0x04)
	float PrevHealth; // 0x128(0x04)
	float PrevStamina; // 0x12c(0x04)
	struct TArray<enum class EN_EffortTypes> DisabledEffortTypes; // 0x130(0x10)
	struct TArray<struct FDataTableRowHandle> ThrowableAbilities; // 0x140(0x10)
	bool WentLowStamina; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float RequiredDiff; // 0x154(0x04)
	bool WentLowHealth; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UYStaminaComponent* StaminaComp; // 0x160(0x08)
	struct UAudioComponent* StaminaAudioComp; // 0x168(0x08)
	float StaminaBreathThreshold; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct USoundBase* SFX_Female_StaminaLow; // 0x178(0x08)
	struct USoundBase* SFX_Male_StaminaLow; // 0x180(0x08)
	float MediumDamageTreshold; // 0x188(0x04)

	void UpdateDropPodIntroStatus(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.UpdateDropPodIntroStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnHealthDataChangedCallback(struct FYHealthDataTableRow HealthData); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnHealthDataChangedCallback // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCurrentHealthChangedCallback(float CurrentHealth, struct AActor* Instigator); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnCurrentHealthChangedCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupHealthBindings(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupHealthBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCurrentStaminaChangedCallback(float currentStamina); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnCurrentStaminaChangedCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMaxStaminaChangedCallback(float maxStamina); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnMaxStaminaChangedCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupStaminaBindings(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupStaminaBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDeathCallback(struct UYCharacterDeathComponent* deathComponent); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnDeathCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupDeathBinding(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupDeathBinding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTakeDamageCallback(struct FYDealtDamageData IncomingDamageData); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnTakeDamageCallback // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupDamageBinding(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupDamageBinding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteEffortsDataFromEnum(enum class EN_EffortTypes EffortType, bool NetMulticast); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ExecuteEffortsDataFromEnum // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Execute Efforts Data(struct FST_EffortData EffortData, bool NetMulticast); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.Execute Efforts Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FindCorrectEffortsRow(struct FYActiveCustomizationData oldData, struct FYActiveCustomizationData newData, bool forceRefresh); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.FindCorrectEffortsRow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BindEffortEvents_LocallyControlledOnly(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BindEffortEvents_LocallyControlledOnly // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerStateSetCallback(struct AYPlayerState* PlayerState); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnPlayerStateSetCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Server_ReplicateVOData(struct FST_EffortData InEffortData); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.Server_ReplicateVOData // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void NetMulticast_VOData(struct FST_EffortData InEffortData); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.NetMulticast_VOData // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ToggleDebug(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ToggleDebug // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BindEffortEvents_AllClients(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BindEffortEvents_AllClients // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateHeavyBreathing(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.UpdateHeavyBreathing // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupIntroBindings(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupIntroBindings // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnIntroFinished_Event_1(); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BP_OnIntroFinished_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPlayerCharacterEffortsComponent_BP(int32_t EntryPoint); // Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ExecuteUbergraph_YPlayerCharacterEffortsComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

