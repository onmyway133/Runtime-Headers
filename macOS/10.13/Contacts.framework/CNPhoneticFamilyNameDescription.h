/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNPhoneticFamilyNameDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)CNValueForContact:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)init;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (BOOL)isNonnull;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;

// CNPhoneticFamilyNameDescription (ABRemoteObjects)

- (void)copyValueFromContact:(id)arg1 toRemotePerson:(id)arg2;
- (void)copyValueFromRemotePerson:(id)arg1 toContact:(id)arg2;

// CNPhoneticFamilyNameDescription (ContactsPersistence)

- (void)copyFromCoreDataContact:(id)arg1 toContact:(id)arg2;
- (id)coreDataKey;

@end
