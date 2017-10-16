/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface _SFSignedData : NSObject <NSCopying, NSSecureCoding> {
    id  _signedDataInternal;
}

@property (atomic, readonly) NSData *data;
@property (atomic, readonly) NSData *signature;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 signature:(id)arg2;
- (id)signature;

@end
