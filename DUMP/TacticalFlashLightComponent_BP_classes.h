// BlueprintGeneratedClass TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C
// Size: 0xd0 (Inherited: 0xb0)
struct UTacticalFlashLightComponent_BP_C : UYTacticalFlashlightComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct USpotLightComponent* FlashLightComponent; // 0xb8(0x08)
	bool bIsEnabled; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct USoundBase* SFX_TorchButton; // 0xc8(0x08)

	void OnRep_bIsEnabled(); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OnRep_bIsEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Play Sound on Weapon(struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Play Sound on Weapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWeaponSwitched(); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.BP_OnWeaponSwitched // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void Turn On Light(); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Turn On Light // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TurnOffLight(); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.TurnOffLight // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ToggleLight(); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleLight // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerTurnOnLight(); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ServerTurnOnLight // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerTurnOffLight(); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ServerTurnOffLight // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_TacticalFlashLightComponent_BP(int32_t EntryPoint); // Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ExecuteUbergraph_TacticalFlashLightComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

