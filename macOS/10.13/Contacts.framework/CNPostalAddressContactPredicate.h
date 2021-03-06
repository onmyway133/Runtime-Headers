/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNPostalAddressContactPredicate : CNPredicate <CNCDContactPredicate> {
    CNPostalAddress * _postalAddress;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CNPostalAddress *postalAddress;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (id)postalAddress;

// CNPostalAddressContactPredicate (CoreData)

+ (id)predicateForKey:(id)arg1 value:(id)arg2;
+ (id)predicatesForCity:(id)arg1;
+ (id)predicatesForCountry:(id)arg1;
+ (id)predicatesForISOCountryCode:(id)arg1;
+ (id)predicatesForPostalCode:(id)arg1;
+ (id)predicatesForState:(id)arg1;
+ (id)predicatesForStreet:(id)arg1;
+ (id)predicatesForSubAdministrativeArea:(id)arg1;
+ (id)predicatesForSubLocality:(id)arg1;

- (id)cn_coreDataPredicate;

@end
