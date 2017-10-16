/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNSocialProfilesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)CNValueForContact:(id)arg1;
- (BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)dictionaryTransform;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)fromDictionaryTransform;
- (id)init;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (BOOL)isNonnull;
- (Class)labeledValueClass;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)summarizationKeys;

// CNSocialProfilesDescription (ABRemoteObjects)

- (void)copyValueFromContact:(id)arg1 toRemotePerson:(id)arg2;
- (void)copyValueFromRemotePerson:(id)arg1 toContact:(id)arg2;

// CNSocialProfilesDescription (ContactsPersistence)

- (void)copyFromCoreDataContact:(id)arg1 toContact:(id)arg2;
- (void)copyFromLabeledValue:(id)arg1 toOwnedObject:(id)arg2;
- (id)coreDataKey;
- (id)coreDataOwnedEntityName;
- (id)coreDataRelationshipKeyPathsToFetch;
- (id)ownedObjectToLabeledValueValueTransform;
- (id)subCoreDataPredicatePropertiesByKey;

@end
