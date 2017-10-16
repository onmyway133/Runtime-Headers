/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCNPhoneNumbersDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)copyFromContact:(id)arg1 to:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)equivalentLabelSets;
- (id)init;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;

@end
