/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWTetherDevice : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _batteryLife;
    NSString * _deviceIdentifier;
    NSString * _deviceName;
    unsigned char  _networkType;
    NSNumber * _signalStrength;
}

@property (atomic, readwrite, copy) NSNumber *batteryLife;
@property (atomic, readwrite, copy) NSString *deviceIdentifier;
@property (atomic, readwrite, copy) NSString *deviceName;
@property (atomic, readwrite) unsigned char networkType;
@property (atomic, readwrite, copy) NSNumber *signalStrength;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (id)batteryLife;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHotspotDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTetherDevice:(id)arg1;
- (unsigned char)networkType;
- (void)setBatteryLife:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setNetworkType:(unsigned char)arg1;
- (void)setSignalStrength:(id)arg1;
- (id)signalStrength;

@end