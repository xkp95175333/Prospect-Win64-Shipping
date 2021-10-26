// WidgetBlueprintGeneratedClass UI_ScannerPing_WBP.UI_ScannerPing_WBP_C
// Size: 0x2b0 (Inherited: 0x260)
struct UUI_ScannerPing_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Ping; // 0x268(0x08)
	struct UImage* PingImage_01; // 0x270(0x08)
	struct UImage* PingImageBlue; // 0x278(0x08)
	float WidgetOpacity; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UMaterialInstanceDynamic* Material; // 0x288(0x08)
	float Delay; // 0x290(0x04)
	struct FVector Location; // 0x294(0x0c)
	struct FTimerHandle FakeTickTimerHandle; // 0x2a0(0x08)
	struct USoundBase* SFX_PingSound; // 0x2a8(0x08)

	void SequenceEvent__ENTRYPOINTUI_ScannerPing_WBP_1(); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SequenceEvent__ENTRYPOINTUI_ScannerPing_WBP_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetOpacityBasedOnDistanceToCamera(); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SetOpacityBasedOnDistanceToCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetScaleBasedOnDistanceToCamera(); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SetScaleBasedOnDistanceToCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ProjectPositionToScreen(); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.ProjectPositionToScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayPingSound(); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.PlayPingSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnFakeTick(); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.OnFakeTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_UI_ScannerPing_WBP(int32_t EntryPoint); // Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.ExecuteUbergraph_UI_ScannerPing_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

