// Class Ping.PingIP
// Size: 0x70 (Inherited: 0x28)
struct UPingIP : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct FMulticastInlineDelegate OnPingComplete; // 0x50(0x10)
	struct FMulticastInlineDelegate OnPingFailure; // 0x60(0x10)

	void SendPing(struct FString ipAddress, bool useUdp); // Function Ping.PingIP.SendPing // (Final|Native|Public|BlueprintCallable) // @ game+0xfef440
	void PollThread(); // Function Ping.PingIP.PollThread // (Final|Native|Public|BlueprintCallable) // @ game+0xca5af0
};

