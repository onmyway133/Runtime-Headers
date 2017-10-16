/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNContactRelation : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    NSString * _name;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readonly) Class superclass;

+ (id)contactRelationWithName:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
