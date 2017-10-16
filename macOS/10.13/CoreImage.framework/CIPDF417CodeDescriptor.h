/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor {
    long long  columnCount;
    NSData * errorCorrectedPayload;
    BOOL  isCompact;
    long long  rowCount;
}

@property (atomic, readonly) long long columnCount;
@property (atomic, readonly) NSData *errorCorrectedPayload;
@property (atomic, readonly) BOOL isCompact;
@property (atomic, readonly) long long rowCount;

+ (id)descriptorWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
+ (BOOL)supportsSecureCoding;

- (long long)columnCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCorrectedPayload;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
- (BOOL)isCompact;
- (BOOL)isValid;
- (long long)rowCount;

@end
