// WidgetBlueprintGeneratedClass VehiclePlate_WBP.VehiclePlate_WBP_C
// Size: 0x3c8 (Inherited: 0x3a8)
struct UVehiclePlate_WBP_C : UYWidget_ActorPlate {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x3b0(0x08)
	struct UYTextBlock* TextBlock_Name; // 0x3b8(0x08)
	struct UWBP_HealthBar_HUD_Item_C* UI_HealthBarWithDelta_WBP; // 0x3c0(0x08)

	void Construct(); // Function VehiclePlate_WBP.VehiclePlate_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_InitializeFor(); // Function VehiclePlate_WBP.VehiclePlate_WBP_C.BP_InitializeFor // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnRuntimeDataChangedDelegate_Event_1(struct FYRuntimeVehicleData oldData, struct FYRuntimeVehicleData newData); // Function VehiclePlate_WBP.VehiclePlate_WBP_C.OnRuntimeDataChangedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_VehiclePlate_WBP(int32_t EntryPoint); // Function VehiclePlate_WBP.VehiclePlate_WBP_C.ExecuteUbergraph_VehiclePlate_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

