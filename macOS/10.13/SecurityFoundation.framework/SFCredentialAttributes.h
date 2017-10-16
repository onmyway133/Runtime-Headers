/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFCredentialAttributes : NSObject <SFKeychainItemAttributes> {
    id  _credentialAttributesInternal;
}

@property (nonatomic, readwrite, retain) NSDate *creationDate;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) NSString *localizedDescription;
@property (nonatomic, readwrite, copy) NSString *localizedLabel;
@property (nonatomic, readwrite, retain) NSDate *modificationDate;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescription;
- (id)localizedLabel;
- (id)modificationDate;
- (void)setCreationDate:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;
- (void)setModificationDate:(id)arg1;

@end
