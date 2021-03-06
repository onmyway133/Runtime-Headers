/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNPersistentStoreBuilder : NSObject {
    bool  _addAsReadOnly;
    BOOL  _cachePsc;
    NSPersistentStoreCoordinator * _coordinator;
    NSURL * _databaseURL;
    BOOL  _didMigrate;
    CNPersistentStoreBuilderEnvironment * _environment;
    NSError * _error;
    BOOL  _pristineDatabase;
    bool  _readOnly;
    NSPersistentStore * _store;
    CNPersistentStoreDescription * _storeDescription;
    NSDictionary * _storeOptions;
    NSDictionary * _storeOptionsWithoutMigration;
}

@property (atomic, readonly, retain) NSPersistentStoreCoordinator *coordinator;
@property (atomic, readwrite, retain) CNPersistentStoreBuilderEnvironment *environment;
@property (atomic, readwrite, copy) NSError *error;
@property (atomic, readwrite, retain) NSPersistentStore *store;

+ (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2;
+ (id)proxyLockStoreOptionsForDatabaseAtUrl:(id)arg1 isReadOnly:(BOOL)arg2;
+ (id)readOnlyStoreOptionsWithBoolValue:(BOOL)arg1;
+ (id)tracerMessageWithMessage:(id)arg1 error:(id)arg2;

- (void)addInMemoryPersistentStore;
- (id)addPersistentStoreAtURL:(id)arg1;
- (void)addSqlitePersistentStoreWithUrl:(id)arg1;
- (id)coordinator;
- (void)createFolderIfNeeded;
- (BOOL)databaseFileIsEmpty;
- (BOOL)databaseFileIsMissing;
- (BOOL)databaseMigrationNeeded;
- (void)dealloc;
- (BOOL)didAddStore;
- (void)doInitialImportsIfNeeded;
- (void)emptySaveIfNeeded;
- (id)environment;
- (id)error;
- (id)extraOptionsForStoreAtUrl:(id)arg1;
- (void)fallBackToInMemory;
- (void)fallBackToInMemoryIfNeeded;
- (id)initWithStoreDescription:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithStoreDescription:(id)arg1 readOnly:(BOOL)arg2 coordinator:(id)arg3;
- (id)initWithStoreDescription:(id)arg1 readOnly:(BOOL)arg2 coordinator:(id)arg3 environment:(id)arg4;
- (void)logFailureMessage;
- (void)logPersistentStoreTracerFailureWithMessage:(id)arg1 error:(id)arg2;
- (void)migrateContactIndex;
- (void)migrateLabels;
- (void)migrateMailRecentsToInMemory;
- (void)migrateMailRecentsToInMemoryIfNeeded;
- (void)migrateOrphanProperties;
- (void)migratePhoneNumbers;
- (void)moveAsideDatabase;
- (void)moveAsideDatabaseAtURL:(id)arg1 reason:(id)arg2;
- (void)moveAsideDatabaseIfNeeded;
- (id)optionsWithMigrationForStoreAtUrl:(id)arg1;
- (id)optionsWithoutMigrationForStoreAtUrl:(id)arg1;
- (void)preflightDatabaseFile;
- (void)removeDotNewPathForDatabasePath;
- (void)removePersistentStoreAtURL:(id)arg1;
- (void)setDatabaseURL:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setError:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setupInitialStateWithDatabaseURL:(id)arg1;
- (BOOL)shouldUpdateMetadata;
- (id)store;
- (void)tryToAddPersistentStore;
- (void)updateMetdata;
- (void)updateMetdataIfNeeded;
- (id)urlByCopyingToTemporaryUrl:(id)arg1;

@end
