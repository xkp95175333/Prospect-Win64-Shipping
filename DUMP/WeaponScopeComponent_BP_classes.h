// BlueprintGeneratedClass WeaponScopeComponent_BP.WeaponScopeComponent_BP_C
// Size: 0xc0 (Inherited: 0xb0)
struct UWeaponScopeComponent_BP_C : UYWeaponScopeComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UMaterialInstanceDynamic* ThermalScopeMat; // 0xb8(0x08)

	void OnEnterTargeting_BP(); // Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.OnEnterTargeting_BP // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnLeaveTargeting_BP(bool interrupted); // Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.OnLeaveTargeting_BP // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WeaponScopeComponent_BP(int32_t EntryPoint); // Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.ExecuteUbergraph_WeaponScopeComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

