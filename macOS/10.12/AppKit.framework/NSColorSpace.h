/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorSpace : NSObject <NSSecureCoding> {
    void * __cgColorSpace;
    void * __cgColorTransform;
    struct { 
        unsigned int colorSpaceID : 8; 
        unsigned int storageType : 3; 
        unsigned int replacedDuringUnarchiving : 1; 
        unsigned int  : 20; 
        unsigned int  : 32; 
    }  _flags;
    id  _profile;
    void * _reserved;
}

@property (atomic, readonly) struct CGColorSpace { }*CGColorSpace;
@property (atomic, readonly) NSData *ICCProfileData;
@property (atomic, readonly) NSColorGamut *colorGamut;
@property (atomic, readonly) long long colorSpaceModel;
@property (atomic, readonly) void*colorSyncProfile;
@property (atomic, readonly, copy) NSString *localizedName;
@property (atomic, readonly) long long numberOfColorComponents;

+ (id)DCIP3ColorSpace;
+ (id)_invertedDeviceGrayColorSpace;
+ (id)_invertedGenericGrayColorSpace;
+ (id)adobeRGB1998ColorSpace;
+ (id)availableColorSpacesWithModel:(long long)arg1;
+ (id)colorSpaceForColorSpaceName:(id)arg1;
+ (id)deviceCMYKColorSpace;
+ (id)deviceGrayColorSpace;
+ (id)deviceRGBColorSpace;
+ (id)displayP3ColorSpace;
+ (id)extendedGenericGamma22GrayColorSpace;
+ (id)extendedLinearSRGBColorSpace;
+ (id)extendedSRGBColorSpace;
+ (id)genericCMYKColorSpace;
+ (id)genericGamma22GrayColorSpace;
+ (id)genericGrayColorSpace;
+ (id)genericRGBColorSpace;
+ (id)linearSRGBColorSpace;
+ (id)sRGBColorSpace;
+ (id)specialColorSpaceWithID:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (struct CGColorSpace { }*)CGColorSpace;
- (id)ICCProfileData;
- (void)_createProfileFor:(struct __CFString { }*)arg1;
- (id)_initWithCGColorSpaceNoCache:(struct CGColorSpace { }*)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_isDeviceColorSpace;
- (struct CGColor { }*)_newCGColorByConvertingCGColor:(struct CGColor { }*)arg1;
- (BOOL)_tryRetain;
- (BOOL)allowsExtendedRange;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)colorProfile;
- (long long)colorSpaceModel;
- (id)colorSpaceName;
- (void*)colorSyncProfile;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCGColorSpace:(struct CGColorSpace { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorProfile:(id)arg1;
- (id)initWithColorSyncProfile:(void*)arg1;
- (id)initWithICCProfileData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isWideGamut;
- (id)localizedName;
- (long long)numberOfColorComponents;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

// NSColorSpace (NSColorGamut)

- (id)colorGamut;

@end