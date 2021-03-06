/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCNContactDiff : NSObject {
    NSArray * _updates;
}

@property (atomic, readonly, copy) NSArray *updates;

- (void)applyToABCDContact:(id)arg1 inAddressBook:(id)arg2;
- (void)applyToABPerson:(id)arg1 inAddressBook:(id)arg2;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2;
- (id)contactByApplyingUpdatesToContact:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithUpdates:(id)arg1;
- (id)updates;

@end
