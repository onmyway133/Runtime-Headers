/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/SharedFrameworks/DebugHierarchyFoundation.framework/Versions/A/DebugHierarchyFoundation
 */

@interface DBGTargetHub : NSObject {
    NSMapTable * _identifierToCrawledDebugHierarchyObjectMap;
}

@property (nonatomic, readwrite, retain) NSMapTable *identifierToCrawledDebugHierarchyObjectMap;

+ (id)sharedHub;
+ (unsigned long long)version;

- (void).cxx_destruct;
- (BOOL)_classImplementsRequiredEntryPointMethods:(Class)arg1;
- (id)_classesConformingTo:(id)arg1;
- (void)_crawlPropertiesOfObject:(id)arg1 forRequestStore:(id)arg2;
- (void)_executeRequestWithBackingStore:(id)arg1 forDebugHierarchyObject:(id)arg2;
- (void)_fetchTypeInformationIfNecessaryForRequestWithBackingStore:(id)arg1;
- (BOOL)_objectImplementsRequiredAdditionalGroupMethods:(id)arg1;
- (BOOL)_objectImplementsRequiredChildGroupMethods:(id)arg1;
- (void)_performDebugHierarchyObjectSpecificRequestWithBackingStore:(id)arg1;
- (void)_performEntryPointRequestWithBackingStore:(id)arg1;
- (id)_performanceMetricsDictionaryForTypeInfoDuration:(double)arg1 objectProcessingDuration:(double)arg2;
- (id)_responseDataForException:(id)arg1 caughtDuringRequest:(id)arg2 withMethodSignature:(const char *)arg3;
- (BOOL)_shouldCrawlDebugHierarchyObject:(id)arg1 forRequestStore:(id)arg2;
- (BOOL)_shouldFetchEnumsForProviderClass:(Class)arg1 withPredicate:(id)arg2;
- (BOOL)_shouldFetchOptionsForProviderClass:(Class)arg1 withPredicate:(id)arg2;
- (BOOL)_shouldFetchPropertyWithDescription:(id)arg1 ofObject:(id)arg2 forRequestStore:(id)arg3;
- (id)_valueForPropertyWithName:(id)arg1 onObject:(id)arg2 forRequestStore:(id)arg3;
- (void)clearAllRequestsAndData;
- (void)crawlDebugHierarchyObject:(id)arg1 inGroupWithID:(id)arg2 asDirectChild:(BOOL)arg3 belowParent:(id)arg4 withParentDefinedVisibility:(long long)arg5 forRequestStore:(id)arg6;
- (void)enumerateDebugHierarchyObjects:(id)arg1 inGroupWithID:(id)arg2 options:(id)arg3 asDirectChildren:(BOOL)arg4 belowParent:(id)arg5 forRequestStore:(id)arg6;
- (id)identifierToCrawledDebugHierarchyObjectMap;
- (id)init;
- (id)performRequest:(id)arg1;
- (id)performRequestWithRequestInBase64:(id)arg1;
- (void)setIdentifierToCrawledDebugHierarchyObjectMap:(id)arg1;

@end