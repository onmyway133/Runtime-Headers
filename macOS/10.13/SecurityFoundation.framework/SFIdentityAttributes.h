/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes> {
    id  _identityAttributesInternal;
    struct NSString { Class x1; } * _privateKeyDomain;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasCertificate;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) NSString *identityName;
@property (nonatomic, readonly, copy) _SFAsymmetricKeySpecifier *keySpecifier;
@property (nonatomic, readwrite, copy) NSString *localizedDescription;
@property (nonatomic, readwrite, copy) NSString *localizedLabel;
@property (nonatomic, readonly, copy) NSString *privateKeyDomain;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCertificate;
- (id)identityName;
- (id)initWithCoder:(id)arg1;
- (id)keySpecifier;
- (id)localizedDescription;
- (id)localizedLabel;
- (struct NSString { Class x1; }*)privateKeyDomain;
- (void)setIdentityName:(id)arg1;
- (void)setKeySpecifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;

@end
