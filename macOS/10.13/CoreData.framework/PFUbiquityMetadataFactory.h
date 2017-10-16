/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFUbiquityMetadataFactory : NSObject {
    NSManagedObjectModel * _cachedModel;
    NSMutableDictionary * _rootLocationToPeerIDToEntry;
    NSRecursiveLock * _rootLocationToPeerIDToEntryLock;
}

+ (void)initialize;
+ (id)sharedFactory;

- (void)addModelingToolUserInfoToEntity:(id)arg1;
- (void)addModelingToolUserInfoToProperty:(id)arg1;
- (BOOL)cacheEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4;
- (id)createMetadataModel;
- (void)dealloc;
- (id)description;
- (id)entryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)init;
- (id)newAttributeNamed:(id)arg1 attributeType:(unsigned long long)arg2 isOptional:(BOOL)arg3 isTransient:(BOOL)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7;
- (id)newEntityForName:(id)arg1;
- (id)newMetadataEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4;
- (id)newMetadataManagedObjectModel;
- (id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(BOOL)arg4 isToMany:(BOOL)arg5 andDeleteRule:(unsigned long long)arg6;
- (id)newStackForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4;
- (void)removeAllCoordinatorsForRootLocation:(id)arg1;
- (void)removeCachedCoordinatorsForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;

@end
