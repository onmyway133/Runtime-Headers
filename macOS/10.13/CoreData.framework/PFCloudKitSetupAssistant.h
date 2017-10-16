/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFCloudKitSetupAssistant : NSObject {
    NSObject<OS_dispatch_semaphore> * _cloudKitSemaphore;
    CKContainer * _container;
    CKDatabase * _database;
    NSURL * _largeBlobDirectoryURL;
    NSCloudKitMirroringDelegateMetadata * _metadata;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSPersistentStore * _observedStore;
    CKRecordZone * _zone;
    CKRecordZoneSubscription * _zoneSubscription;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitSemaphore;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) NSURL *largeBlobDirectoryURL;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateMetadata *metadata;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSPersistentStore *observedStore;
@property (nonatomic, readonly) CKRecordZone *zone;
@property (nonatomic, readonly) CKRecordZoneSubscription *zoneSubscription;

+ (id)containerWithIdentifier:(id)arg1 andOptions:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_checkAccountStatus:(id*)arg1;
- (BOOL)_checkAndInitializeUserDefaults:(id*)arg1;
- (BOOL)_checkUserIdentity:(id*)arg1;
- (BOOL)_createSchema:(id*)arg1;
- (BOOL)_createSchemaIfNecessary:(id*)arg1;
- (BOOL)_createZoneIfNecessary:(id*)arg1;
- (BOOL)_deleteZone:(id)arg1 error:(id*)arg2;
- (BOOL)_initializeAssetStorageURLError:(id*)arg1;
- (BOOL)_initializeCloudKitForObservedStore:(id*)arg1;
- (BOOL)_saveUserDefaults:(id*)arg1;
- (BOOL)_saveZone:(id)arg1 error:(id*)arg2;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (BOOL)_setupZoneSubscriptionIfNecessary:(id*)arg1;
- (BOOL)_shouldAttemptRecoveryForZone:(id)arg1 afterError:(id)arg2;
- (id)cloudKitSemaphore;
- (id)container;
- (id)database;
- (void)dealloc;
- (id)init;
- (id)initWithMirroringOptions:(id)arg1 observedStore:(id)arg2 zone:(id)arg3 zoneSubscription:(id)arg4;
- (id)largeBlobDirectoryURL;
- (id)metadata;
- (id)mirroringOptions;
- (id)observedCoordinator;
- (id)observedStore;
- (id)zone;
- (id)zoneSubscription;

@end
