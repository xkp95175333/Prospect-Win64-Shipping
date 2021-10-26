// BlueprintGeneratedClass ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C
// Size: 0x100 (Inherited: 0xb0)
struct UScannerWeaponComponent_BP_C : UYScriptableWeaponComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UYWeaponPlayerControllerRuntimeComponent* Controller Weapon Runtime Component; // 0xb8(0x08)
	struct UYPlayerCharacterWeaponComponent* Character Weapon Component; // 0xc0(0x08)
	struct USoundBase* SFX_ScannerReady; // 0xc8(0x08)
	struct USoundBase* SFX_ScannerCharge; // 0xd0(0x08)
	struct UAudioComponent* Recharge2DSound; // 0xd8(0x08)
	struct USoundBase* SFX_ScannerNotReady; // 0xe0(0x08)
	float ScanDelayMaxRange; // 0xe8(0x04)
	float ScanTravelTime; // 0xec(0x04)
	bool LatestScanResult; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float PlayScanResultFXDelayTime; // 0xf4(0x04)
	struct FTimerHandle TimerPlayScanResult; // 0xf8(0x08)

	struct FVector GetCharacterLocation(); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacterLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct AActor* GetCharacter(); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void AddPingWidgetWithDelay(struct UActorComponent* ScannableComponent); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.AddPingWidgetWithDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	float CalcPingDelay(struct UActorComponent* ScannableComponent); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.CalcPingDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ScanForScannableComponents(); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ScanForScannableComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetWidget(struct UWBP_ScannerInterface_C* AsWBP Scanner Interface); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FadeOutRechargeSound(); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.FadeOutRechargeSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Init(struct UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent, struct UYPlayerCharacterWeaponComponent* characterWeaponComponent); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.Init // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnWeaponCantBeFired_Event(); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponCantBeFired_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnWeaponRefireCooldownTimeChanged_Event(float percentage); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnWeaponRefireCooldownTimeFinished_Event(); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeFinished_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnWeaponFired_Event(struct UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponFired_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayScanFeedbackDelayed(bool IsSuccess); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.PlayScanFeedbackDelayed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayScanFX(); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnPlayScanFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateRefireProgress(float percentage); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.UpdateRefireProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ScannerWeaponComponent_BP(int32_t EntryPoint); // Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ExecuteUbergraph_ScannerWeaponComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

