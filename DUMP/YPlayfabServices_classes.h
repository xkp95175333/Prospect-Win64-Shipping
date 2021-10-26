// Class YPlayfabServices.YPlayfabService
// Size: 0x48 (Inherited: 0x28)
struct UYPlayfabService : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class YPlayfabServices.YPlayfabServiceInventory
// Size: 0x7c8 (Inherited: 0x48)
struct UYPlayfabServiceInventory : UYPlayfabService {
	char pad_48[0x780]; // 0x48(0x780)
};

// Class YPlayfabServices.YPlayfabServiceRoom
// Size: 0x90 (Inherited: 0x48)
struct UYPlayfabServiceRoom : UYPlayfabService {
	char pad_48[0x48]; // 0x48(0x48)
};

// Class YPlayfabServices.YPlayfabServicesCommonFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYPlayfabServicesCommonFunctions : UObject {
};

// Class YPlayfabServices.YPlayfabServicesMessageManager
// Size: 0x28 (Inherited: 0x28)
struct UYPlayfabServicesMessageManager : UObject {
};

// Class YPlayfabServices.YPlayfabServiceVivox
// Size: 0xc8 (Inherited: 0x48)
struct UYPlayfabServiceVivox : UYPlayfabService {
	char pad_48[0x80]; // 0x48(0x80)
};

