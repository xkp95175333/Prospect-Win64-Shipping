// BlueprintGeneratedClass Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C
// Size: 0x108 (Inherited: 0xb0)
struct UPlayer_InventoryAudioComponent_BP_C : UYInventoryAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FDataTableRowHandle InventoryInteractionRowHandle; // 0xb8(0x10)
	struct FDataTableRowHandle ConsumableInteractionRowHandle; // 0xc8(0x10)
	struct FDataTableRowHandle WeaponInteractionRowHandle; // 0xd8(0x10)
	struct FDataTableRowHandle SwapInteractionRowHandle; // 0xe8(0x10)
	struct FDataTableRowHandle DropInteractionRowHandle; // 0xf8(0x10)

	void FindAudioRowHandle(enum class EYPlayerSetType InTargetSetType, enum class EYItemType InItemType, struct FDataTableRowHandle OutItemInteractionSound); // Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.FindAudioRowHandle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void Event Play Inventory Audio Action(enum class EYInventoryAudioActionPerformed actionPerformed, enum class EYPlayerSetType targetSetType, struct FYInventoryItem inventoryItem); // Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.Event Play Inventory Audio Action // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_PlayInventoryAudio(enum class EYInventoryAudioActionPerformed actionPerformed, enum class EYPlayerSetType targetSetType, struct FYInventoryItem Item); // Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.BP_PlayInventoryAudio // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Player_InventoryAudioComponent_BP(int32_t EntryPoint); // Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.ExecuteUbergraph_Player_InventoryAudioComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

