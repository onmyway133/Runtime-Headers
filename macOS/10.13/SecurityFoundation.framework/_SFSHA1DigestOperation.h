/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface _SFSHA1DigestOperation : NSObject <SFDigestOperation, SFDigestOperationInternal> {
    id  _sha1DigestOperationInternal;
}

@property (getter=_ccDigestInfo, nonatomic, readonly) const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*ccDigestInfo;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSData *hashValue;
@property (getter=_secKeyECDSAAlgorithm, nonatomic, readonly) const struct __CFString { }*secKeyECDSAAlgorithm;
@property (atomic, readonly) Class superclass;

+ (long long)blockSize;
+ (id)digest:(id)arg1;
+ (long long)outputSize;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (const struct __CFString { }*)_secKeyECDSAAlgorithm;
- (void)addData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hashValue;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
