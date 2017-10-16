/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIQRCodeDescriptor : CIBarcodeDescriptor {
    NSData * errorCorrectedPayload;
    long long  errorCorrectionLevel;
    unsigned char  maskPattern;
    long long  symbolVersion;
}

@property (atomic, readonly) NSData *errorCorrectedPayload;
@property (atomic, readonly) long long errorCorrectionLevel;
@property (atomic, readonly) unsigned char maskPattern;
@property (atomic, readonly) long long symbolVersion;

+ (id)descriptorWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCorrectedPayload;
- (long long)errorCorrectionLevel;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;
- (BOOL)isValid;
- (unsigned char)maskPattern;
- (long long)symbolVersion;

@end
