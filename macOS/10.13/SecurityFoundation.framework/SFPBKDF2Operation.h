/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFPBKDF2Operation : NSObject <SFKeyDerivingOperation> {
    id  _pbkdf2OperationInternal;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) long long iterationCount;
@property (nonatomic, readwrite, copy) <SFPseudoRandomFunction> *pseudoRandomFunction;
@property (nonatomic, readwrite, copy) NSData *salt;
@property (atomic, readonly) Class superclass;

+ (id)_randomSalt;
+ (long long)keySource;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPseudoRandomFunction:(id)arg1 iterationCount:(long long)arg2 salt:(id)arg3;
- (long long)iterationCount;
- (id)pseudoRandomFunction;
- (id)salt;
- (void)setIterationCount:(long long)arg1;
- (void)setPseudoRandomFunction:(id)arg1;
- (void)setSalt:(id)arg1;

@end
