/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNLDAPPropertyDescription : NSObject {
    NSString * _LDAPKey;
    NSString * _contactKey;
    id  _valueTransform;
}

@property (atomic, readwrite, copy) NSString *LDAPKey;
@property (atomic, readwrite, copy) NSString *contactKey;
@property (atomic, readwrite, copy) id valueTransform;

+ (id)appleAIMPreferred;
+ (id)appleManager;
+ (id)cellPhone;
+ (id)company;
+ (id)department;
+ (id)descriptionWithLDAPKey:(id)arg1 contactKey:(id)arg2 valueTransform:(id)arg3;
+ (id)descriptions;
+ (id)emailAddress;
+ (id)facsimileTelephoneNumber;
+ (id)fax;
+ (id)givenName;
+ (id)homePhone;
+ (id)homeurl;
+ (id)mobile;
+ (id)organization;
+ (id)organizationUnit;
+ (id)pager;
+ (id)pagerPhone;
+ (id)personalTitle;
+ (id)phoneNumberDescriptionWithLDAPKey:(id)arg1 valueLabel:(id)arg2;
+ (id)photos;
+ (id)postalAddress;
+ (id)sharedDescriptions;
+ (id)surname;
+ (id)telephoneNumber;
+ (id)thumbnailPhotos;
+ (id)title;
+ (id)urlAddressDescriptionWithLDAPKey:(id)arg1 valueLabel:(id)arg2;
+ (id)workurl;

- (void).cxx_destruct;
- (id)LDAPKey;
- (id)contactKey;
- (void)setContactKey:(id)arg1;
- (void)setLDAPKey:(id)arg1;
- (void)setValueTransform:(id)arg1;
- (void)updateContact:(id)arg1 withLDAPValue:(id)arg2;
- (id)valueTransform;

@end
