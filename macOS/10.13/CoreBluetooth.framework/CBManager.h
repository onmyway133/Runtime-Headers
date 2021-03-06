/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
 */

@interface CBManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    NSData * _advertisingAddress;
    CBXpcConnection * _connection;
    CBPairingAgent * _pairingAgent;
    long long  _state;
}

@property (nonatomic, readwrite, copy) NSData *advertisingAddress;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) CBPairingAgent *sharedPairingAgent;
@property (nonatomic, readwrite) long long state;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)advertisingAddress;
- (void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2;
- (void)dealloc;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleStateUpdatedMsg:(id)arg1;
- (id)initInternal;
- (BOOL)isMsgAllowedAlways:(unsigned short)arg1;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)arg1;
- (id)peerWithInfo:(id)arg1;
- (BOOL)sendDebugMsg:(unsigned short)arg1 args:(id)arg2;
- (BOOL)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)setAdvertisingAddress:(id)arg1;
- (void)setConnectionTargetQueue:(id)arg1;
- (void)setState:(long long)arg1;
- (id)sharedPairingAgent;
- (void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3;
- (long long)state;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2;
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;

@end
