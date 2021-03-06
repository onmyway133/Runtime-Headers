/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFUbiquityStoreExportContext : NSObject {
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
    NSString * _localPeerID;
    NSSQLCore * _store;
    NSString * _storeName;
    NSMutableSet * _transactionEntries;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (nonatomic, readwrite, retain) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readwrite, retain) NSSQLCore *store;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) NSSet *transactionEntries;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;

- (id)addTransactionEntryForGlobalID:(id)arg1 andTransactionType:(int)arg2;
- (id)cacheWrapper;
- (void)dealloc;
- (id)description;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3;
- (id)localPeerID;
- (void)setCacheWrapper:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)storeName;
- (id)transactionEntries;
- (id)ubiquityRootLocation;

@end
