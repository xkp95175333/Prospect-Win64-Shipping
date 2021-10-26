// BlueprintGeneratedClass HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C
// Size: 0xc1 (Inherited: 0xb0)
struct UHelmetGoggleComponent_BP_C : UYHelmetGoggleComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UMaterialInstanceDynamic* GoggleMat; // 0xb8(0x08)
	bool IsEnabled; // 0xc0(0x01)

	void ToggleNightVision(); // Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ToggleNightVision // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EnableNV(struct UMaterialInterface* Parent); // Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.EnableNV // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_HelmetGoggleComponent_BP(int32_t EntryPoint); // Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ExecuteUbergraph_HelmetGoggleComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

