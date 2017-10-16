/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABMailRecent : ABRecord

+ (id)builtInProperties;
+ (void)globalAPILockForAddressBook:(id)arg1 inFile:(const char *)arg2 line:(unsigned long long)arg3;
+ (void)globalAPIUnlockForAddressBook:(id)arg1 inFile:(const char *)arg2 line:(unsigned long long)arg3;
+ (id)managedObjectContextForAddressBook:(id)arg1;

- (BOOL)_shouldAssignNewDatabaseImplToPrimaryStore;
- (id)_table;
- (id)account;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(id)arg2;
- (BOOL)isSubscribed;
- (void)lock;
- (id)parentGroups;
- (id)parentGroupsIncludingSubscriptions;
- (id)remoteLocation;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 error:(id*)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 error:(id*)arg3 account:(id)arg4;
- (void)unlock;
- (id)valueForProperty:(id)arg1;

@end
