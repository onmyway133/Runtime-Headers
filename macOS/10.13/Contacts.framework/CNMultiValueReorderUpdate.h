/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate {
    NSOrderedSet * _values;
}

@property (nonatomic, readonly, copy) NSOrderedSet *values;

- (void).cxx_destruct;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;
- (id)description;
- (id)initWithValues:(id)arg1;
- (id)values;

// CNMultiValueReorderUpdate (ContactsPersistence)

- (void)applyToABCDContact:(id)arg1 orderedABCDOwnedObjects:(id)arg2 propertyDescription:(id)arg3;

@end
