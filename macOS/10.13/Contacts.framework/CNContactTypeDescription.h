/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNContactTypeDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)CNValueForContact:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)init;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (BOOL)isValidValue:(id)arg1 error:(id*)arg2;
- (id)nilValue;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (Class)valueClass;

// CNContactTypeDescription (ContactsPersistence)

- (long long)coreDataBitMask;
- (id)coreDataBitMaskedValuesMap;
- (id)coreDataKey;
- (id)displayStyleFromFlags:(id)arg1;
- (id)flagsWithFlags:(id)arg1 displayStyle:(id)arg2;
- (void)setValue:(id)arg1 onCoreDataContact:(id)arg2;
- (id)valueFromCoreDataContact:(id)arg1;

@end
