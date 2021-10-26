// BlueprintGeneratedClass ScannerProjectile_BP.ScannerProjectile_BP_C
// Size: 0x3c4 (Inherited: 0x398)
struct AScannerProjectile_BP_C : AYProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UPostProcessComponent* PostProcess; // 0x3a0(0x08)
	float AnimationTimeline_scan_animSlider_2F90A4414F348CDBE3A862A55B787712; // 0x3a8(0x04)
	enum class ETimelineDirection AnimationTimeline__Direction_2F90A4414F348CDBE3A862A55B787712; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct UTimelineComponent* AnimationTimeline; // 0x3b0(0x08)
	struct UMaterialInstanceDynamic* ScannerPPMat; // 0x3b8(0x08)
	float ScanTravelTime; // 0x3c0(0x04)

	void AnimationTimeline__FinishedFunc(); // Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void AnimationTimeline__UpdateFunc(); // Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function ScannerProjectile_BP.ScannerProjectile_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void StartScanFX(); // Function ScannerProjectile_BP.ScannerProjectile_BP_C.StartScanFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ScannerProjectile_BP(int32_t EntryPoint); // Function ScannerProjectile_BP.ScannerProjectile_BP_C.ExecuteUbergraph_ScannerProjectile_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

