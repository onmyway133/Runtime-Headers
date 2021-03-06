/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface PHXSource : NSObject <ABAccountPersistenceDelegate, ABWorkQueueDelegate, NSCopying> {
    ABAddressBook * _addressBook;
    BOOL  _addressBookWasSetManually;
    NSString * _allocationBacktrace;
    BOOL  _busy;
    BOOL  _canCreateGroups;
    BOOL  _canCreatePeople;
    ABAccountStatus * _currentStatus;
    BOOL  _isSetupComplete;
    NSDate * _lastRefreshDate;
    BOOL  _meCardHasChanged;
    NSString * _path;
    ABAccountPersistence * _persistence;
    NSArray * _personConstraints;
    BOOL  _shouldSendStatusChangeNotifications;
    ABSimilarRecordMerger * _similarRecordMerger;
    NSString * _subname;
    BOOL  _supportsDistributionLists;
    NSString * _uid;
    BOOL  _unloaded;
    ABWorkQueue * _workQueue;
    NSView * configurationView;
    NSSecureTextField * passwordField;
}

@property (nonatomic, readwrite, retain) ABAddressBook *addressBook;
@property (atomic, readwrite) BOOL canCreateGroups;
@property (atomic, readwrite) BOOL canCreatePeople;
@property (atomic, readonly) BOOL canDeletePeople;
@property (atomic, readonly) NSView *configurationView;
@property (atomic, readwrite, retain) ABAccountStatus *currentStatus;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) NSString *displayName;
@property (atomic, readwrite) BOOL enabled;
@property (atomic, readwrite) BOOL hasChanges;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) BOOL isDeletable;
@property (atomic, readwrite, retain) NSDate *lastPushSubscription;
@property (atomic, readwrite, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *path;
@property (atomic, readwrite) double periodicRefreshInterval;
@property (atomic, readwrite, retain) NSArray *personConstraints;
@property (atomic, readwrite) BOOL primitiveEnabled;
@property (atomic, readwrite) double pushRefreshInterval;
@property (atomic, readonly) int searchMethod;
@property (atomic, readwrite) BOOL shouldMergeServerContactsAtNextSync;
@property (atomic, readwrite, retain) ABSimilarRecordMerger *similarRecordMerger;
@property (atomic, readwrite, copy) NSString *subname;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) BOOL supportsDataMigration;
@property (atomic, readonly, copy) NSString *uid;
@property (getter=isUnloaded, atomic, readwrite) BOOL unloaded;
@property (atomic, readonly) ABWorkQueue *workQueue;

+ (BOOL)_userCanConfigure;
+ (BOOL)accountExistsForMailWithRootFolderId:(id)arg1 userName:(id)arg2 serverAddress:(id)arg3;
+ (BOOL)accountExistsForiCalWithRootFolderId:(id)arg1 userName:(id)arg2 serverAddress:(id)arg3;
+ (Class)accountPersistenceClass;
+ (int)addKeychainItemForPassword:(id)arg1 user:(id)arg2 service:(id)arg3 access:(struct OpaqueSecAccessRef { }*)arg4;
+ (id)addressBookInitOptions;
+ (id)autodiscoverSettings:(id)arg1;
+ (id)autodiscoveryFutureWithSettings:(id)arg1;
+ (int)backingStoreType;
+ (void)cancelAutodiscovery;
+ (void)cancelTestConnection;
+ (id)customizationPolicy;
+ (id)defaultPersonConstraints;
+ (Class)defaultPersonConstraintsClass;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)makeSearchPolicyWithAccount:(id)arg1;
+ (id)passwordForConfiguration:(id)arg1;
+ (id)passwordForUser:(id)arg1 server:(id)arg2 port:(unsigned short)arg3 protocol:(void*)arg4 error:(id*)arg5;
+ (id)passwordForUser:(id)arg1 service:(id)arg2 error:(id*)arg3;
+ (id)persistenceBackendWithAccountComponents:(id)arg1;
+ (id)persistenceWithAccountComponents:(id)arg1;
+ (id)persistenceWithUID:(id)arg1 account:(id)arg2;
+ (id)persistentPathForUID:(id)arg1;
+ (void)postAccountDidChangeNotificationsWithUID:(id)arg1;
+ (BOOL)removePasswordForUser:(id)arg1 server:(id)arg2 port:(unsigned short)arg3 protocol:(void*)arg4 error:(id*)arg5;
+ (BOOL)removePasswordForUser:(id)arg1 service:(id)arg2 error:(id*)arg3;
+ (Class)searchOperationClass;
+ (BOOL)setPassword:(id)arg1 forConfiguration:(id)arg2;
+ (BOOL)setPassword:(id)arg1 forUser:(id)arg2 server:(id)arg3 port:(unsigned short)arg4 protocol:(void*)arg5 access:(struct OpaqueSecAccessRef { }*)arg6 error:(id*)arg7;
+ (BOOL)setPassword:(id)arg1 forUser:(id)arg2 service:(id)arg3 access:(struct OpaqueSecAccessRef { }*)arg4 error:(id*)arg5;
+ (BOOL)setPassword:(id)arg1 forUser:(id)arg2 service:(id)arg3 error:(id*)arg4;
+ (id)sourceForContact:(id)arg1;
+ (id)sourceForObject:(id)arg1;
+ (id)sourcesForManagedObjects:(id)arg1;
+ (id)testConnection:(id)arg1;
+ (id)testConnectionFuture:(id)arg1;
+ (int)updateKeychainItemForPassword:(id)arg1 user:(id)arg2 service:(id)arg3;

- (void)_exportSummaryOfDatabaseContents;
- (void)_firstMergeCompleted;
- (BOOL)_isMigrating;
- (id)_localRecordsForMergingInAddressBook:(id)arg1;
- (id)_mergeSimilarRecords:(id)arg1;
- (void)_persistValues;
- (void)_persistValuesAndPostDidChangeNotifcation:(BOOL)arg1;
- (id)_persistentStoreURL;
- (void)_preheatGroups:(id)arg1;
- (void)_prepareRecordMergerForSyncWithAddressBook:(id)arg1;
- (BOOL)_shouldCreateWorkQueue;
- (void)_sourceShouldRefresh;
- (void)_sourceShouldRefreshImmediately:(BOOL)arg1;
- (BOOL)_userCanConfigure;
- (void)abWorkQueue:(id)arg1 operationCountDidChange:(unsigned long long)arg2;
- (id)acAccountTypeIdentifier;
- (id)acParentAccountTypeIdentifier;
- (id)accountType;
- (id)addressBook;
- (void)addressBook:(id)arg1 didDeleteRecords:(id)arg2;
- (void)addressBook:(id)arg1 didInsertRecords:(id)arg2;
- (void)addressBook:(id)arg1 didUpdateRecords:(id)arg2;
- (void)addressBook:(id)arg1 willDeleteRecords:(id)arg2;
- (void)addressBook:(id)arg1 willInsertRecords:(id)arg2;
- (void)addressBook:(id)arg1 willRemoveRecordsWithUniqueIDs:(id)arg2;
- (void)addressBook:(id)arg1 willUpdateRecords:(id)arg2;
- (void)addressBookSaved:(id)arg1;
- (void)anAddressBookDidSave:(id)arg1;
- (void)anAddressBookWillSave:(id)arg1;
- (void)applyChanges:(id)arg1;
- (void)applyChangesAndRefresh:(BOOL)arg1;
- (void)assertIsUnloaded;
- (void)awakeFromInsert;
- (void)awakeFromLoad;
- (void)beginPhotoUpdatesForPeople:(id)arg1 completionHandler:(id)arg2;
- (BOOL)canCreateGroups;
- (BOOL)canCreatePeople;
- (BOOL)canDeletePeople;
- (BOOL)canEditGroup:(id)arg1;
- (BOOL)canEditPerson:(id)arg1;
- (BOOL)canRemoveGroup:(id)arg1;
- (BOOL)canRenameGroup:(id)arg1;
- (id)children;
- (long long)compare:(id)arg1;
- (id)configurationView;
- (id)constraintsForRecordClass:(Class)arg1;
- (int)containmentPersonality;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentStatus;
- (id)databaseChangeNotificationName;
- (void)dealloc;
- (void)deletePersistentValues;
- (id)description;
- (void)didImportPeople:(id)arg1 intoGroup:(id)arg2;
- (id)displayName;
- (void)displayNameChanged;
- (BOOL)enabled;
- (void)finalizeAccountSetup;
- (void)finalizeAccountSetupWithDictionary:(id)arg1;
- (void)generateMetadataWithChangedObjectsInContext:(id)arg1;
- (void)handlePushNotification:(id)arg1;
- (BOOL)hasChanges;
- (id)imagesFolderURL;
- (BOOL)includeSubscribedGroupsInChildItems;
- (id)initWithUID:(id)arg1 path:(id)arg2 persistence:(id)arg3;
- (id)initWithUID:(id)arg1 persistence:(id)arg2;
- (BOOL)isBusy;
- (BOOL)isDeletable;
- (BOOL)isSearchable;
- (BOOL)isUnloaded;
- (id)labelsConstraint;
- (id)lastPushSubscription;
- (void)loadConfigurationView;
- (id)makeAddressBookAtPath;
- (id)managedAddressBooks;
- (void)meDidChange:(id)arg1;
- (void)migrationLog:(id)arg1;
- (double)minimumIntervalBetweenRefreshes;
- (void)mocDidSave:(id)arg1;
- (void)mocWillSave:(id)arg1;
- (void)myDatabaseChangedExternally:(id)arg1;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)openInternetAccountsPreferences;
- (id)password;
- (id)path;
- (double)periodicRefreshInterval;
- (id)persistence;
- (id)persistentRepresentation;
- (id)persistentStoreURL;
- (id)personConstraints;
- (BOOL)primitiveEnabled;
- (double)pushRefreshInterval;
- (BOOL)record:(id)arg1 validateValue:(id*)arg2 forProperty:(id)arg3 error:(id*)arg4;
- (id)recordIDsThatBelongToMe:(id)arg1;
- (void)releaseTopLevelObjects;
- (void)removeGroup:(id)arg1;
- (void)renewPushSubscriptionAtURL:(id)arg1;
- (void)sanityCheckNotificationRecords:(id)arg1 notification:(id)arg2;
- (void)searchForTerms:(id)arg1 delegate:(id)arg2;
- (int)searchMethod;
- (id)searchOperationWithString:(id)arg1 delegate:(id)arg2;
- (id)searchOperationWithTerms:(id)arg1 delegate:(id)arg2;
- (id)secureServiceName;
- (id)secureUserName;
- (void)sendStatusDidChangeNotification;
- (void)setAddressBook:(id)arg1;
- (void)setBusy:(BOOL)arg1;
- (void)setCanCreateGroups:(BOOL)arg1;
- (void)setCanCreatePeople:(BOOL)arg1;
- (void)setCurrentStatus:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHasChanges:(BOOL)arg1;
- (void)setLastPushSubscription:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPeriodicRefreshInterval:(double)arg1;
- (void)setPersonConstraints:(id)arg1;
- (void)setPrimitiveEnabled:(BOOL)arg1;
- (void)setPushRefreshInterval:(double)arg1;
- (void)setSearchable:(BOOL)arg1;
- (void)setShouldMergeServerContactsAtNextSync:(BOOL)arg1;
- (void)setShowProgressIndicator:(BOOL)arg1;
- (void)setSimilarRecordMerger:(id)arg1;
- (void)setSubname:(id)arg1;
- (void)setUnloaded:(BOOL)arg1;
- (BOOL)shouldMergeServerContactsAtNextSync;
- (BOOL)shouldOfferRemoveContacts:(id)arg1 fromGroup:(id)arg2;
- (BOOL)shouldSendStatusDidChangeNotifications;
- (BOOL)shouldUnload;
- (id)similarRecordMerger;
- (long long)sortOrderForGroup:(id)arg1;
- (void)sourceDidSelect:(id)arg1;
- (id)sourceIcon;
- (void)sourceShouldRefresh:(id)arg1;
- (int)sourceType;
- (void)startObservingAddressBookSaveNotifications;
- (void)stopObservingAddressBookSaveNotifications;
- (id)subname;
- (BOOL)supportsDataMigration;
- (BOOL)supportsDistributionLists;
- (id)uid;
- (void)unload;
- (void)updateProgressIndicatorsForOperationCount:(unsigned long long)arg1;
- (void)updateStatus:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willDeleteRecordsWithUniqueIDs:(id)arg1;
- (void)willUnload;
- (id)workQueue;
- (void)workQueueOperationCountDidChange:(unsigned long long)arg1;

// PHXSource (DataSourceClient)

+ (id)allSources;
+ (BOOL)autocompletionProvidedForClassName:(id)arg1;
+ (id)autocompletionSources;
+ (BOOL)autodiscoverySupportedForClassName:(id)arg1;
+ (id)availablePluginClasses;
+ (id)defaultSource;
+ (id)displayNameForClassName:(id)arg1;
+ (id)exchangeSourcesWithRootFolderId:(id)arg1;
+ (id)exchangeSourcesWithUsername:(id)arg1 host:(id)arg2;
+ (id)infoForClassName:(id)arg1;
+ (id)localSource;
+ (Class)localSourceClass;
+ (id)localSourcePersistence;
+ (id)recordForUniqueId:(id)arg1;
+ (id)recordsMatchingSearchElement:(id)arg1;
+ (id)searchForString:(id)arg1 delegate:(id)arg2 callback:(SEL)arg3;
+ (id)serverAddressPlaceholderForClassName:(id)arg1;
+ (BOOL)setupAssistantCreationAllowedForClassName:(id)arg1;
+ (id)sourceAtPath:(id)arg1;
+ (Class)sourceClassForClassName:(id)arg1;
+ (id)sources;
+ (id)sourcesOfType:(id)arg1;
+ (BOOL)testConnectionSupportedForClassName:(id)arg1;

// PHXSource (DataSourceClientInternal)

+ (id)uncachedSourceForClassName:(id)arg1 uid:(id)arg2 account:(id)arg3;

// PHXSource (DataSourceClientPrivate)

+ (id)contactsBySource:(id)arg1;
+ (id)existingSourceWithUID:(id)arg1;

@end
