/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWInterface : NSObject {
    NSArray * _capabilities;
    void * _device;
    BOOL  _deviceAttached;
    id  _eapolClient;
    NSString * _interfaceName;
    unsigned int  _interfaceRemovedNotification;
    struct IONotificationPort { } * _interfaceRemovedNotificationPort;
    void * _interfaceStore;
    NSObject<OS_dispatch_queue> * _internalQueue;
    id  _ipMonitor;
    BOOL  _lastPowerState;
    void * _serviceStore;
    NSXPCConnection * _xpcConnection;
}

@property (atomic, readonly) long long aggregateNoise;
@property (atomic, readonly) long long aggregateRSSI;
@property (atomic, readonly, copy) NSArray *capabilities;
@property (atomic, readwrite, copy) NSArray *capabilities;
@property (atomic, readonly) void*device;
@property (atomic, readwrite) void*device;
@property (atomic, readonly) BOOL deviceAttached;
@property (atomic, readwrite) BOOL deviceAttached;
@property (atomic, readonly, retain) CWEAPOLClient *eapolClient;
@property (atomic, readonly) unsigned long long interfaceCapabilities;
@property (atomic, readwrite, copy) NSString *interfaceName;
@property (atomic, readonly, retain) CWIPMonitor *ipMonitor;
@property (atomic, readwrite) BOOL lastPowerState;
@property (atomic, readonly) BOOL powerSaveModeEnabled;
@property (atomic, readonly) NSSet *supportedISMChannels;

+ (id)interface;
+ (id)interfaceNames;
+ (id)interfaceWithName:(id)arg1;

- (id)__familyScanCacheResults;
- (BOOL)__startEventMonitoring;
- (id)__supportedWLANChannelForChannelNumber:(unsigned long long)arg1;
- (long long)activePHYMode;
- (BOOL)associateToEnterpriseNetwork:(id)arg1 identity:(struct OpaqueSecIdentityRef { }*)arg2 username:(id)arg3 password:(id)arg4 error:(out id*)arg5;
- (BOOL)associateToNetwork:(id)arg1 password:(id)arg2 error:(out id*)arg3;
- (id)bssid;
- (id)cachedScanResults;
- (id)capabilities;
- (BOOL)commitConfiguration:(id)arg1 authorization:(id)arg2 error:(out id*)arg3;
- (id)configuration;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (void*)device;
- (BOOL)deviceAttached;
- (void)disassociate;
- (void)finalize;
- (id)hardwareAddress;
- (id)initWithInterfaceName:(id)arg1;
- (long long)interfaceMode;
- (id)interfaceName;
- (BOOL)lastPowerState;
- (long long)noiseMeasurement;
- (BOOL)powerOn;
- (long long)rssiValue;
- (id)scanForNetworksWithName:(id)arg1 error:(out id*)arg2;
- (id)scanForNetworksWithSSID:(id)arg1 error:(out id*)arg2;
- (long long)security;
- (BOOL)serviceActive;
- (void)setCapabilities:(id)arg1;
- (void)setDevice:(void*)arg1;
- (void)setDeviceAttached:(BOOL)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setLastPowerState:(BOOL)arg1;
- (BOOL)setPairwiseMasterKey:(id)arg1 error:(out id*)arg2;
- (BOOL)setPower:(BOOL)arg1 error:(out id*)arg2;
- (BOOL)setWEPKey:(id)arg1 flags:(unsigned long long)arg2 index:(long long)arg3 error:(out id*)arg4;
- (BOOL)setWLANChannel:(id)arg1 error:(out id*)arg2;
- (id)ssid;
- (id)ssidData;
- (BOOL)startIBSSModeWithSSID:(id)arg1 security:(long long)arg2 channel:(unsigned long long)arg3 password:(id)arg4 error:(out id*)arg5;
- (id)supportedWLANChannels;
- (long long)transmitPower;
- (double)transmitRate;
- (id)wlanChannel;

// CWInterface (Private)

+ (id)supportedInterfaces;

- (unsigned long long)__mcsIndex;
- (id)__scanForLoginWindowModeEnterpriseNetworkWithEAPProfile:(struct __EAPOLClientProfile { }*)arg1 error:(out id*)arg2;
- (long long)__vhtMCSIndex;
- (id)__vhtMCSInfo;
- (void)acquireBluetoothPagingLockAndReply:(id)arg1;
- (BOOL)associateTo8021XNetwork:(id)arg1 error:(out id*)arg2;
- (BOOL)associateTo8021XNetwork:(id)arg1 remember:(BOOL)arg2 error:(out id*)arg3;
- (BOOL)associateToEnterpriseNetwork:(id)arg1 clientItemID:(struct __EAPOLClientItemID { }*)arg2 username:(id)arg3 password:(id)arg4 identity:(struct OpaqueSecIdentityRef { }*)arg5 error:(out id*)arg6;
- (BOOL)associateToEnterpriseNetwork:(id)arg1 clientItemID:(struct __EAPOLClientItemID { }*)arg2 username:(id)arg3 password:(id)arg4 identity:(struct OpaqueSecIdentityRef { }*)arg5 forceBSSID:(BOOL)arg6 remember:(BOOL)arg7 error:(out id*)arg8;
- (BOOL)associateToEnterpriseNetwork:(id)arg1 identity:(struct OpaqueSecIdentityRef { }*)arg2 username:(id)arg3 password:(id)arg4 forceBSSID:(BOOL)arg5 remember:(BOOL)arg6 error:(out id*)arg7;
- (BOOL)associateToLoginWindowModeEnterpriseNetworkWithEAPProfile:(struct __EAPOLClientProfile { }*)arg1 username:(id)arg2 password:(id)arg3 error:(out id*)arg4;
- (BOOL)associateToNetwork:(id)arg1 password:(id)arg2 forceBSSID:(BOOL)arg3 remember:(BOOL)arg4 error:(out id*)arg5;
- (BOOL)associateToPasspointNetwork:(id)arg1 usingDomainName:(id)arg2 error:(out id*)arg3;
- (BOOL)associateToSystemModeEnterpriseNetwork:(id)arg1 error:(out id*)arg2;
- (id)availableWLANChannels;
- (id)awdlOperatingMode;
- (id)bssidData;
- (BOOL)busy;
- (BOOL)busyUI;
- (BOOL)causedLastWake;
- (void)clearANQPCacheForNetwork:(id)arg1;
- (void)clearScanCache;
- (BOOL)connectToTetherDevice:(id)arg1 remember:(BOOL)arg2 error:(id*)arg3;
- (id)eapolClient;
- (id)hwSupportedWLANChannels;
- (id)initWithInterfaceName:(id)arg1 xpcConnection:(id)arg2 legacyEventMonitoring:(BOOL)arg3;
- (unsigned long long)interfaceCapabilities;
- (long long)interfaceControlState;
- (id)ipMonitor;
- (BOOL)isAWDLRealTimeModeInProgress;
- (BOOL)isAirPlayInProgress;
- (void)joinNetwork:(id)arg1 reply:(id)arg2;
- (id)lastNetworkJoined;
- (id)lastPreferredNetworkJoined;
- (id)lastTetherDeviceJoined;
- (unsigned long long)maximumLinkSpeed;
- (unsigned long long)mcsIndex;
- (BOOL)monitorMode;
- (id)name;
- (BOOL)networkInterfaceAvailable;
- (id)networkServiceIDs;
- (id)parentInterfaceName;
- (unsigned long long)physicalLayerMode;
- (id)queryANQPCacheWithElements:(unsigned long long)arg1 network:(id)arg2 maxAge:(double)arg3;
- (id)queryANQPElements:(unsigned long long)arg1 network:(id)arg2 maxAge:(double)arg3 waitForWiFi:(BOOL)arg4 waitForBluetooth:(BOOL)arg5 priority:(long long)arg6 error:(out id*)arg7;
- (id)queryScanCacheWithChannels:(id)arg1 ssidList:(id)arg2 maxAge:(double)arg3 maxMissCount:(long long)arg4 maxWakeCount:(long long)arg5 maxAutoJoinCount:(long long)arg6 error:(out id*)arg7;
- (void)relinquishBluetoothPagingLockAndReply:(id)arg1;
- (void)restoreJoinConfigurationWithUUID:(id)arg1 reply:(id)arg2;
- (void)saveJoinConfigurationAndReply:(id)arg1;
- (id)scanForNetworksWithChannels:(id)arg1 ssid:(id)arg2 bssid:(id)arg3 error:(out id*)arg4;
- (id)scanForNetworksWithChannels:(id)arg1 ssid:(id)arg2 bssid:(id)arg3 restTime:(unsigned long long)arg4 dwellTime:(unsigned long long)arg5 ssidList:(id)arg6 error:(out id*)arg7;
- (id)scanForNetworksWithChannels:(id)arg1 ssidList:(id)arg2 legacyScanSSID:(id)arg3 includeHiddenNetworks:(BOOL)arg4 mergedScanResults:(BOOL)arg5 maxAge:(double)arg6 maxMissCount:(long long)arg7 maxWakeCount:(long long)arg8 maxAutoJoinCount:(long long)arg9 waitForWiFi:(BOOL)arg10 waitForBluetooth:(BOOL)arg11 priority:(long long)arg12 error:(out id*)arg13;
- (unsigned long long)securityType;
- (BOOL)setCachedLocaleTimeout:(double)arg1 error:(out id*)arg2;
- (BOOL)setRangeable:(BOOL)arg1 peers:(id)arg2 error:(out id*)arg3;
- (BOOL)setWakeOnWirelessEnabled:(BOOL)arg1 error:(out id*)arg2;
- (BOOL)startAWDL:(id)arg1 error:(out id*)arg2;
- (BOOL)startHostAPMode:(out id*)arg1;
- (BOOL)startHostAPModeWithSSID:(id)arg1 securityType:(unsigned long long)arg2 channel:(id)arg3 password:(id)arg4 error:(out id*)arg5;
- (BOOL)startRanging:(id)arg1 timeout:(double)arg2 error:(out id*)arg3;
- (BOOL)startWPSForNetwork:(id)arg1 pin:(id)arg2 remember:(BOOL)arg3 error:(out id*)arg4;
- (id)stateInfo;
- (void)stopAWDL;
- (void)stopHostAPMode;
- (void)stopIBSSMode;
- (unsigned long long)supportedPhysicalLayerModes;
- (id)virtualInterfaceRole;
- (BOOL)wakeOnWirelessEnabled;

// CWInterface (PrivateDeprecated)

- (long long)aggregateNoise;
- (long long)aggregateRSSI;
- (BOOL)associateToNetwork:(id)arg1 parameters:(id)arg2 error:(out id*)arg3;
- (id)channel;
- (void)disableHostAPMode;
- (void)enableHostAPMode;
- (BOOL)enableIBSSWithParameters:(id)arg1 error:(out id*)arg2;
- (id)interfaceState;
- (id)noise;
- (id)opMode;
- (id)phyMode;
- (BOOL)power;
- (BOOL)powerSaveModeEnabled;
- (id)rssi;
- (id)scanForNetworksWithParameters:(id)arg1 error:(out id*)arg2;
- (id)securityMode;
- (id)supportedISMChannels;
- (BOOL)supportsShortGI40MHz;
- (id)txRate;

@end
