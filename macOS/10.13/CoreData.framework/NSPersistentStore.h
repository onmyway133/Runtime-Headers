/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSPersistentStore : NSObject {
    int  _activeRequests;
    NSString * _configurationName;
    NSPersistentStoreCoordinator * _coordinator;
    id  _coreSpotlightDelegate;
    id  _defaultFaultHandler;
    struct _objectStoreFlags { 
        unsigned int isReadOnly : 1; 
        unsigned int cleanOnRemove : 1; 
        unsigned int isMDDirty : 1; 
        unsigned int _RESERVED : 29; 
    }  _flags;
    id * _oidFactories;
    NSDictionary * _options;
    int  _reserved32;
    void * _temporaryIDClass;
    NSURL * _url;
}

@property (atomic, readwrite, retain) NSURL *URL;
@property (atomic, readonly, copy) NSString *configurationName;
@property (nonatomic, readonly) NSCoreDataCoreSpotlightDelegate *coreSpotlightExporter;
@property (atomic, readwrite, copy) NSString *identifier;
@property (nonatomic, readwrite, retain) NSDictionary *metadata;
@property (atomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (getter=isReadOnly, atomic, readwrite) BOOL readOnly;
@property (atomic, readonly, copy) NSString *type;

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (Class)migrationManagerClass;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)URL;
- (id)_rawMetadata__;
- (id)configurationName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightExporter;
- (void)dealloc;
- (id)description;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (BOOL)isReadOnly;
- (BOOL)loadMetadata:(id*)arg1;
- (id)metadata;
- (id)options;
- (id)persistentStoreCoordinator;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (id)type;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

// NSPersistentStore (_NSInternalMethods)

+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 readOnly:(BOOL*)arg3 error:(id*)arg4 options:(id)arg5;
+ (Class)rowCacheClass;

- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (id)_defaultMetadata;
- (void)_didLoadMetadata;
- (BOOL)_isMetadataDirty;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (Class)_objectIDClass;
- (void)_preflightCrossCheck;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)_resetObjectIDFactoriesForStoreUUIDChange;
- (void)_setMetadataDirty:(BOOL)arg1;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (BOOL)_unload:(id*)arg1;
- (void)_updateAncillaryVersionHashesInMetadata:(id)arg1;
- (void)_updateMetadata;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (id)ancillaryModels;
- (id)currentChangeToken;
- (id)currentQueryGeneration;
- (void)decrementInUseCounter;
- (void)doFilesystemCleanupOnRemove:(BOOL)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)externalRecordsPath;
- (id)faultHandler;
- (Class)faultHandlerClass;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (void)incrementInUseCounter;
- (BOOL)load:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (Class)objectIDClassForEntity:(id)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (BOOL)supportsConcurrentRequestHandling;
- (BOOL)supportsGenerationalQuerying;

@end
