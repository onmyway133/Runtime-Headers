/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPropertyListPersistenceBackend : NSObject <ABAccountPersistenceBackend> {
    NSString * _path;
    NSString * _sourceClassName;
    NSString * _uid;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)acAccountIdentifier;
- (id)accountTypeIdentifier;
- (void)dealloc;
- (void)deletePersistentValuesWithAddressBook:(id)arg1;
- (id)description;
- (id)initWithUID:(id)arg1 path:(id)arg2 sourceClassName:(id)arg3;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (id)path;
- (id)plistPath;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1 postNotifications:(BOOL)arg2;

@end
