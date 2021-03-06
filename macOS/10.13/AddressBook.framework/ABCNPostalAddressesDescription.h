/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCNPostalAddressesDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddress:(id)arg2;
- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddressUsingPostalCodeCompleteness:(id)arg2;
- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddressUsingStateNameCompleteness:(id)arg2;
- (void)copyFromContact:(id)arg1 to:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (unsigned long long)indexOfUSState:(id)arg1;
- (id)init;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (BOOL)isPostalCodeValue:(id)arg1 equivalentToValue:(id)arg2;
- (BOOL)isStateValue:(id)arg1 equivalentToValue:(id)arg2;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2 forKey:(id)arg3;
- (BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (BOOL)postalCodeIsMoreComplete:(id)arg1;
- (unsigned long long)preferenceScoreForAddress:(id)arg1;
- (unsigned long long)preferenceScoreForKey:(id)arg1;

@end
