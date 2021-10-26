// UserDefinedStruct STR_AimAssistPresetDesc.STR_AimAssistPresetDesc
// Size: 0x30 (Inherited: 0x00)
struct FSTR_AimAssistPresetDesc {
	struct FString PresetName_2_D4E25D0B43133DE51189979C1C8A65F0; // 0x00(0x10)
	float HoldTargetTime_5_81BDCDCC4E08ABFB4E0D8ABE65FDCC7C; // 0x10(0x04)
	bool ApplyAutoAim_8_92D63579442B59F48DF4E2BA76E80C93; // 0x14(0x01)
	bool AutoAimWithGamepadOnly_10_6DE4FD204C2E283D7EBCC4ACD1C7CEB0; // 0x15(0x01)
	bool ApplyMagnetism_12_CD725E92491B8D32DD9FE28444D50F08; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct UCurveFloat* MagnetismInputSense_27_3D16323E4B722D7ED5E407AE82AB8207; // 0x18(0x08)
	struct FSTR_MagnetismSettingsDesc MagnetismSettingsInBlindState_18_1CAD4B1F4963283BF5CC40A6C997333B; // 0x20(0x08)
	struct FSTR_MagnetismSettingsDesc MagnetismSettingsInAimState_19_DD72A238482DEB2C6FCF5D8DE8F517FC; // 0x28(0x08)
};

