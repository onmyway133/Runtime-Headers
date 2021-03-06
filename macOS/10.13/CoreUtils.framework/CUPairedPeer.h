/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUPairedPeer : NSObject <NSSecureCoding> {
    NSDictionary * _acl;
    NSData * _altIRK;
    NSUUID * _identifier;
    NSDictionary * _info;
    NSString * _label;
    NSString * _model;
    NSString * _name;
    NSData * _publicKey;
}

@property (nonatomic, readwrite, copy) NSDictionary *acl;
@property (nonatomic, readwrite, copy) NSData *altIRK;
@property (nonatomic, readwrite, copy) NSUUID *identifier;
@property (nonatomic, readwrite, copy) NSDictionary *info;
@property (nonatomic, readwrite, copy) NSString *label;
@property (nonatomic, readwrite, copy) NSString *model;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readwrite, copy) NSData *publicKey;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acl;
- (id)altIRK;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)model;
- (id)name;
- (id)publicKey;
- (void)setAcl:(id)arg1;
- (void)setAltIRK:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPublicKey:(id)arg1;

@end
