/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate> {
    CNContact * _contact;
    NSString * _contactIdentifier;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;

@end
