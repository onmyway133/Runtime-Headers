/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding> {
    BOOL  _bluetoothCloudPaired;
    NSUUID * _bluetoothID;
    NSData * _hintToken;
    BOOL  _keyExists;
    long long  _majorOSVersion;
    NSString * _modelDescription;
    NSString * _modelName;
    BOOL  _placeholder;
    NSUUID * _proxyBluetoothID;
    NSDictionary * _results;
    BOOL  _supportsAlwaysDirect;
    BOOL  _supportsAuthPrompts;
    BOOL  _supportsEncryption;
    BOOL  _unlockEnabled;
}

@property (nonatomic, readwrite) BOOL bluetoothCloudPaired;
@property (nonatomic, readwrite, retain) NSUUID *bluetoothID;
@property (nonatomic, readwrite, retain) NSData *hintToken;
@property (nonatomic, readwrite) BOOL keyExists;
@property (nonatomic, readwrite) long long majorOSVersion;
@property (nonatomic, readwrite, copy) NSString *modelDescription;
@property (nonatomic, readwrite, retain) NSString *modelName;
@property (nonatomic, readwrite) BOOL placeholder;
@property (nonatomic, readwrite, copy) NSUUID *proxyBluetoothID;
@property (nonatomic, readwrite, retain) NSDictionary *results;
@property (nonatomic, readwrite) BOOL supportsAlwaysDirect;
@property (nonatomic, readwrite) BOOL supportsAuthPrompts;
@property (nonatomic, readwrite) BOOL supportsEncryption;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readwrite) BOOL unlockEnabled;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)bluetoothCloudPaired;
- (id)bluetoothID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hintToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)keyExists;
- (long long)majorOSVersion;
- (id)modelDescription;
- (id)modelName;
- (BOOL)placeholder;
- (id)proxyBluetoothID;
- (id)results;
- (void)setBluetoothCloudPaired:(BOOL)arg1;
- (void)setBluetoothID:(id)arg1;
- (void)setHintToken:(id)arg1;
- (void)setKeyExists:(BOOL)arg1;
- (void)setMajorOSVersion:(long long)arg1;
- (void)setModelDescription:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setPlaceholder:(BOOL)arg1;
- (void)setProxyBluetoothID:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSupportsAlwaysDirect:(BOOL)arg1;
- (void)setSupportsAuthPrompts:(BOOL)arg1;
- (void)setSupportsEncryption:(BOOL)arg1;
- (void)setUnlockEnabled:(BOOL)arg1;
- (BOOL)supportsAlwaysDirect;
- (BOOL)supportsAuthPrompts;
- (BOOL)supportsEncryption;
- (long long)type;
- (BOOL)unlockEnabled;

@end
