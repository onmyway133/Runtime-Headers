/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSCloudKitMirroringDelegate : NSObject <NSPersistentStoreMirroringDelegate> {
    NSString * _ckDatabaseName;
    NSObject<OS_dispatch_queue> * _cloudKitQueue;
    NSObject<OS_dispatch_semaphore> * _cloudKitQueueSemaphore;
    CKContainer * _container;
    CKDatabase * _database;
    BOOL  _hadObservedStore;
    NSError * _lastInitializationError;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSSQLCore * _observedStore;
    NSCloudKitMirroringDelegateOptions * _options;
    BOOL  _successfullyInitialized;
    CKRecordZone * _zone;
    CKRecordZoneSubscription * _zoneSubscription;
}

@property (nonatomic, readonly) NSString *ckDatabaseName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudKitQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hadObservedStore;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSPersistentStore *observedStore;
@property (nonatomic, readonly, copy) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) BOOL successfullyInitialized;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) CKRecordZone *zone;
@property (nonatomic, readonly) CKRecordZoneSubscription *zoneSubscription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_beginWatchingForChanges;
- (void)_openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(id)arg2;
- (void)_performExportWithRequest:(id)arg1;
- (void)_performImportWithRequest:(id)arg1;
- (void)_performResetZoneRequest:(id)arg1;
- (void)_requestAbortedNotInitialized:(id)arg1;
- (void)_requestEncounteredUnrecoverableError:(id)arg1 withResult:(id)arg2;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2;
- (void)_setUpCloudKitIntegration;
- (void)checkForNewChanges;
- (void)ckAccountChanged:(id)arg1;
- (id)ckDatabaseName;
- (void)ckIdentityChanged:(id)arg1;
- (id)cloudKitQueue;
- (id)cloudKitQueueSemaphore;
- (id)container;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (id)database;
- (void)dealloc;
- (id)executeMirroringRequest:(id)arg1 error:(id*)arg2;
- (void)fetchChangesAndUpdateObservedStore;
- (BOOL)hadObservedStore;
- (id)initWithOptions:(id)arg1;
- (BOOL)isPrivateContextSave:(id)arg1;
- (id)lastInitializationError;
- (void)logMessage:(id)arg1;
- (void)observeChangesForStore:(id)arg1 inPersistentStoreCoordinator:(id)arg2;
- (id)observedCoordinator;
- (id)observedStore;
- (id)options;
- (void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3;
- (void)postDidResetNotificationForError:(id)arg1;
- (void)postWillResetNotificationForError:(id)arg1;
- (BOOL)pruneExternalAssetFileAtURL:(id)arg1 error:(id*)arg2;
- (BOOL)recoverFromError:(id)arg1;
- (void)resetAfterError:(id)arg1;
- (void)resetAfterError:(id)arg1 andKeepContainer:(BOOL)arg2;
- (id)resetNotificationUserInfoForError:(id)arg1;
- (void)storesDidChange:(id)arg1;
- (BOOL)successfullyInitialized;
- (void)tearDown;
- (BOOL)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id*)arg3;
- (BOOL)wipeAllCloudDataAndPurgeHistoryToken:(BOOL)arg1 error:(id*)arg2;
- (BOOL)wipeCachedIdentityInformationFromStore:(id)arg1 error:(id*)arg2;
- (BOOL)wipeCachedZoneMetadataFromStore:(id)arg1 error:(id*)arg2;
- (BOOL)wipeCloudMetadataFromMirroredObjects:(id*)arg1;
- (id)zone;
- (id)zoneSubscription;

@end
