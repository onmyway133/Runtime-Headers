/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface LSApplicationWorkspace : NSObject {
    NSXPCConnection * _connection;
    NSMutableDictionary * _createdInstallProgresses;
    LSInstallProgressDelegate * _delegateProxy;
    LSInstallProgressList * _observedInstallProgresses;
    LSApplicationWorkspaceRemoteObserver * _remoteObserver;
}

@property (atomic, readonly) NSXPCConnection *connection;
@property (atomic, readonly) NSMutableDictionary *createdInstallProgresses;
@property (atomic, readonly) LSInstallProgressDelegate *delegateProxy;
@property (atomic, readonly) LSInstallProgressList *observedInstallProgresses;
@property (atomic, readonly) LSApplicationWorkspaceRemoteObserver *remoteObserver;

+ (id)activeManagedConfigurationRestrictionUUIDs;
+ (id)callbackQueue;
+ (id)defaultWorkspace;

- (void)_LSClearSchemaCaches;
- (void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2;
- (BOOL)_LSPrivateDatabaseNeedsRebuild;
- (BOOL)_LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3;
- (void)_LSPrivateSyncWithMobileInstallation;
- (void)addObserver:(id)arg1;
- (id)applicationForUserActivityDomainName:(id)arg1;
- (id)applicationForUserActivityType:(id)arg1;
- (BOOL)applicationIsInstalled:(id)arg1;
- (id)applicationProxiesWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (id)applicationsWithVPNPlugins;
- (id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id*)arg2;
- (void)clearAdvertisingIdentifier;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (id)connection;
- (id)createdInstallProgresses;
- (void)dealloc;
- (id)delegateProxy;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (id)directionsApplications;
- (BOOL)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)enumerateApplicationsForSiriWithBlock:(id)arg1;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 block:(id)arg2;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 legacySPI:(BOOL)arg2 block:(id)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 block:(id)arg2;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 legacySPI:(BOOL)arg2 block:(id)arg3;
- (void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(id)arg2;
- (BOOL)establishConnection;
- (BOOL)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2;
- (unsigned long long)getInstallTypeForOptions:(id)arg1 andApp:(id)arg2;
- (void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id)arg4;
- (id)installBundle:(id)arg1 withOptions:(id)arg2 usingBlock:(id)arg3 forApp:(id)arg4 withError:(id*)arg5 outInstallProgress:(id*)arg6;
- (BOOL)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)installedPlugins;
- (BOOL)invalidateIconCache:(id)arg1;
- (id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (id)observedInstallProgresses;
- (BOOL)openApplicationWithBundleID:(id)arg1;
- (BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (BOOL)openURL:(id)arg1;
- (BOOL)openURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)openURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(id)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)pluginsMatchingQuery:(id)arg1 applyFilter:(id)arg2;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(id)arg4;
- (BOOL)registerApplication:(id)arg1;
- (BOOL)registerApplicationDictionary:(id)arg1;
- (BOOL)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2;
- (BOOL)registerBundleWithInfo:(id)arg1 options:(id)arg2 type:(unsigned long long)arg3 progress:(id)arg4;
- (BOOL)registerPlugin:(id)arg1;
- (id)remoteObserver;
- (void)removeInstallProgressForBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)removedSystemApplications;
- (BOOL)restoreSystemApplication:(id)arg1;
- (void)sendInstallNotificationForApp:(id)arg1 withPlugins:(id)arg2;
- (void)sendUninstallNotificationForApp:(id)arg1 withPlugins:(id)arg2;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id)arg4;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id)arg3;
- (BOOL)uninstallSystemApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id)arg3;
- (BOOL)unregisterApplication:(id)arg1;
- (BOOL)unregisterPlugin:(id)arg1;
- (BOOL)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;

// LSApplicationWorkspace (DeprecatedEnumeration)

- (id)allApplications;
- (id)allInstalledApplications;
- (id)applicationsOfType:(unsigned long long)arg1;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)legacyApplicationProxiesListWithType:(unsigned long long)arg1;
- (id)placeholderApplications;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(id)arg4;
- (id)unrestrictedApplications;

// LSApplicationWorkspace (DeprecatedURLQueries)

- (id)applicationForOpeningResource:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;

// LSApplicationWorkspace (URLQueries)

- (id)URLOverrideForURL:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(BOOL)arg2;
- (BOOL)isApplicationAvailableToOpenURL:(id)arg1 error:(id*)arg2;
- (BOOL)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(BOOL)arg2 error:(id*)arg3;
- (BOOL)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(BOOL)arg2 error:(id*)arg3;

@end