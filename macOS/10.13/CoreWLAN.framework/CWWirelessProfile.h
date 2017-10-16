/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWWirelessProfile : NSObject <NSCoding, NSCopying> {
    NSNumber * _securityMode;
    NSString * _ssid;
}

@property (atomic, readwrite, copy) NSString *passphrase;
@property (atomic, readwrite, retain) NSNumber *securityMode;
@property (atomic, readwrite, copy) NSString *ssid;
@property (atomic, readwrite, retain) CW8021XProfile *user8021XProfile;

+ (id)profile;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToProfile:(id)arg1;
- (id)passphrase;
- (id)securityMode;
- (void)setPassphrase:(id)arg1;
- (void)setSecurityMode:(id)arg1;
- (void)setSsid:(id)arg1;
- (void)setUser8021XProfile:(id)arg1;
- (id)ssid;
- (id)user8021XProfile;

@end