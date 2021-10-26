// BlueprintGeneratedClass MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C
// Size: 0x688 (Inherited: 0x270)
struct AMeleeWeaponCustomization_BP_C : AYMeleeActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FYMeleeVanityDataTableRow MeleeWeaponRow; // 0x278(0x400)
	struct FDataTableRowHandle MeleeDTRow; // 0x678(0x10)

	void UserConstructionScript(); // Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_143A10034D179E9A18A9BEB9CD8A42EF(struct UObject* Loaded); // Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.OnLoaded_143A10034D179E9A18A9BEB9CD8A42EF // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_603C613442143C4DDF9B4FAA74FA4987(struct UObject* Loaded); // Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.OnLoaded_603C613442143C4DDF9B4FAA74FA4987 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature(struct FDataTableRowHandle oldRowHandle, struct FDataTableRowHandle newRowHandle); // Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void Preview(); // Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.Preview // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MeleeWeaponCustomization_BP(int32_t EntryPoint); // Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.ExecuteUbergraph_MeleeWeaponCustomization_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

