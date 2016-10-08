/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorProfile : NSObject <NSCoding> {
    void * _dProfileRef;
    void * _header;
    NSURL * _location;
    void * _md5;
    NSString * _name;
    void * _profile;
    void * _reserved;
}

+ (id)availableProfiles;

- (id)ICCProfileData;
- (void*)MD5;
- (long long)_appropriateColorPanelSliderPane;
- (unsigned int)_colorSyncProfileClass;
- (unsigned int)_colorSyncProfileSpace;
- (long long)_isGenericProfile;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void*)colorSyncProfile;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorSyncInfo:(void*)arg1;
- (id)initWithColorSyncProfile:(void*)arg1;
- (id)initWithICCProfileData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedName;

@end