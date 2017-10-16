/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFWirelessSettingsController : NSObject {
    BOOL  _bluetoothEnabled;
    id  _delegate;
    BOOL  _deviceSupportsWAPI;
    BOOL  _firstCallbackCompleted;
    struct __SFOperation { } * _information;
    BOOL  _wifiEnabled;
    BOOL  _wirelessAccessPointEnabled;
    BOOL  _wirelessCarPlayEnabled;
}

@property (getter=isBluetoothEnabled, atomic, readwrite) BOOL bluetoothEnabled;
@property (atomic, readwrite) <SFWirelessSettingsControllerDelegate> *delegate;
@property (atomic, readonly) BOOL deviceSupportsWAPI;
@property (getter=isWifiEnabled, atomic, readwrite) BOOL wifiEnabled;
@property (getter=isWirelessAccessPointEnabled, atomic, readonly) BOOL wirelessAccessPointEnabled;
@property (getter=isWirelessCarPlayEnabled, atomic, readonly) BOOL wirelessCarPlayEnabled;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (BOOL)deviceSupportsWAPI;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;
- (void)invalidate;
- (BOOL)isBluetoothEnabled;
- (BOOL)isWifiEnabled;
- (BOOL)isWirelessAccessPointEnabled;
- (BOOL)isWirelessCarPlayEnabled;
- (void)setBluetoothEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWifiEnabled:(BOOL)arg1;

@end
