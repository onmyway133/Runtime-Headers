/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSArrayController : NSObjectController {
    NSArray * _arrangedObjects;
    struct __arrayControllerFlags { 
        unsigned int _avoidsEmptySelection : 1; 
        unsigned int _preservesSelection : 1; 
        unsigned int _selectsInsertedObjects : 1; 
        unsigned int _alwaysUsesMultipleValuesMarker : 1; 
        unsigned int _refreshesAllModelObjects : 1; 
        unsigned int _filterRestrictsInsertion : 1; 
        unsigned int _overridesArrangeObjects : 1; 
        unsigned int _overridesDidChangeArrangementCriteria : 1; 
        unsigned int _explicitlyCannotInsert : 1; 
        unsigned int _generatedEmptyArray : 1; 
        unsigned int _isObservingKeyPathsThroughArrangedObjects : 1; 
        unsigned int _arrangedObjectsIsMutable : 1; 
        unsigned int _clearsFilterPredicateOnInsertion : 1; 
        unsigned int _skipSortingAfterFetch : 1; 
        unsigned int _automaticallyRearrangesObjects : 1; 
        unsigned int _reservedArrayController : 17; 
    }  _arrayControllerFlags;
    NSIndexSet * _cachedSelectedIndexes;
    NSArray * _cachedSelectedObjects;
    NSMutableArray * _objects;
    unsigned long long  _observedIndexHint;
    id  _rearrangementExtensions;
    NSMutableIndexSet * _selectionIndexes;
    NSMutableArray * _temporaryWorkObjects;
}

@property (atomic, readwrite) BOOL alwaysUsesMultipleValuesMarker;
@property (atomic, readonly) id arrangedObjects;
@property (atomic, readonly, copy) NSArray *automaticRearrangementKeyPaths;
@property (atomic, readwrite) BOOL automaticallyRearrangesObjects;
@property (atomic, readwrite) BOOL avoidsEmptySelection;
@property (atomic, readonly) BOOL canInsert;
@property (atomic, readonly) BOOL canSelectNext;
@property (atomic, readonly) BOOL canSelectPrevious;
@property (atomic, readwrite) BOOL clearsFilterPredicateOnInsertion;
@property (atomic, readwrite, retain) NSPredicate *filterPredicate;
@property (atomic, readwrite) BOOL preservesSelection;
@property (atomic, readonly, copy) NSArray *selectedObjects;
@property (atomic, readonly) unsigned long long selectionIndex;
@property (atomic, readonly, copy) NSIndexSet *selectionIndexes;
@property (atomic, readwrite) BOOL selectsInsertedObjects;
@property (atomic, readwrite, copy) NSArray *sortDescriptors;

+ (id)_keyValueBindingAccessPoints;
+ (id)_modelAndProxyKeys;
+ (id)_nonAutomaticObservingKeys;
+ (void)initialize;

- (void)_addKeyPathsFromPredicate:(id)arg1 toSet:(id)arg2;
- (void)_addNumberOfIndexes:(unsigned long long)arg1 toSelectionIndexesAtIndex:(unsigned long long)arg2 sendObserverNotifications:(BOOL)arg3;
- (void)_arrangeObjectsWithSelectedObjects:(id)arg1 avoidsEmptySelection:(BOOL)arg2 operationsMask:(unsigned long long)arg3 useBasis:(id)arg4;
- (id)_arrayContent;
- (void)_assertFilterRestrictsInsertionOfObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2;
- (void)_cacheSelectedObjectsIfNecessary;
- (void)_changeEditable:(BOOL)arg1;
- (id)_controllerKeys;
- (void)_dealloc;
- (void)_didChangeArrangementCriteriaWithOperationsMask:(unsigned long long)arg1 useBasis:(id)arg2;
- (void)_ensureObjectsAreMutable;
- (void)_ensureSelectionAfterRemoveWithPreferredIndex:(unsigned long long)arg1 sendObserverNotifications:(BOOL)arg2;
- (void)_executeAdd:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)_executeInsert:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)_executeSelectNext:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)_executeSelectPrevious:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (BOOL)_explicitlyCannotInsert;
- (id)_filterObjects:(id)arg1;
- (BOOL)_filterRestrictsInsertion;
- (void)_init;
- (void)_insertObject:(id)arg1 atArrangedObjectIndex:(unsigned long long)arg2 objectHandler:(id)arg3;
- (void)_insertObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2 objectHandler:(id)arg3;
- (void)_invokeMultipleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3;
- (BOOL)_modifySelectedObjects:(id)arg1 useExistingIndexesAsStartingPoint:(BOOL)arg2 avoidsEmptySelection:(BOOL)arg3 addOrRemove:(BOOL)arg4 sendObserverNotifications:(BOOL)arg5 forceUpdate:(BOOL)arg6;
- (void)_modifySelectionIndexes:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 addOrRemove:(BOOL)arg3 sendObserverNotifications:(BOOL)arg4;
- (id)_multipleMutableArrayValueForKey:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_multipleMutableArrayValueForKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_multipleValueForKey:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_multipleValueForKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_multipleValuesObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)_multipleValuesObjectCount;
- (id)_multipleValuesObjectsAtIndexes:(id)arg1;
- (void)_prepareContentWithNewObject:(id)arg1;
- (id)_rearrangementExtensions:(BOOL)arg1;
- (BOOL)_refreshesAllModelObjects;
- (BOOL)_registerObservingForAllModelObjects;
- (void)_removeNumberOfIndexes:(unsigned long long)arg1 fromSelectionIndexesAtIndex:(unsigned long long)arg2 sendObserverNotifications:(BOOL)arg3;
- (void)_removeObjectAtArrangedObjectIndex:(unsigned long long)arg1 objectHandler:(id)arg2;
- (void)_removeObjects:(id)arg1 objectHandler:(id)arg2;
- (void)_removeObjectsAtArrangedObjectIndexes:(id)arg1 contentIndexes:(id)arg2 objectHandler:(id)arg3;
- (BOOL)_selectObjectsAtIndexes:(id)arg1 avoidsEmptySelection:(BOOL)arg2 sendObserverNotifications:(BOOL)arg3 forceUpdate:(BOOL)arg4;
- (BOOL)_selectObjectsAtIndexesNoCopy:(id)arg1 avoidsEmptySelection:(BOOL)arg2 sendObserverNotifications:(BOOL)arg3 forceUpdate:(BOOL)arg4;
- (unsigned long long)_selectionIndexesCount;
- (BOOL)_sendsContentChangeNotifications;
- (void)_setContentInBackground:(id)arg1;
- (void)_setExplicitlyCannotAdd:(BOOL)arg1 insert:(BOOL)arg2 remove:(BOOL)arg3;
- (void)_setFilterRestrictsInsertion:(BOOL)arg1;
- (void)_setMultipleValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setMultipleValue:(id)arg1 forKeyPath:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setObjects:(id)arg1;
- (void)_setRefreshesAllModelObjects:(BOOL)arg1;
- (void)_setSingleValue:(id)arg1 forKey:(id)arg2;
- (void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2;
- (void)_setUpAutomaticRearrangingOfObjects;
- (BOOL)_shouldSendObserverNotificationForModelOrProxyKey:(id)arg1 keyPath:(id)arg2 ofObject:(id)arg3;
- (id)_singleMutableArrayValueForKey:(id)arg1;
- (id)_singleMutableArrayValueForKeyPath:(id)arg1;
- (id)_singleValueForKey:(id)arg1;
- (id)_singleValueForKeyPath:(id)arg1;
- (id)_singleValueForKeyPath:(id)arg1 operationType:(long long)arg2;
- (id)_sortObjects:(id)arg1;
- (void)_startObservingSelectionIfNecessary;
- (void)_stopObservingSelectionIfNecessary;
- (void)_updateAutomaticRearrangementKeysPaths;
- (void)_updateObservingForAutomaticallyRearrangingObjects;
- (BOOL)_validateMultipleValue:(id*)arg1 forKeyPath:(id)arg2 atIndex:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)_validateSingleValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)_validateSingleValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (void)add:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (BOOL)addSelectedObjects:(id)arg1;
- (BOOL)addSelectionIndexes:(id)arg1;
- (BOOL)alwaysUsesMultipleValuesMarker;
- (id)arrangeObjects:(id)arg1;
- (id)arrangedObjects;
- (id)automaticRearrangementKeyPaths;
- (BOOL)automaticallyRearrangesObjects;
- (BOOL)avoidsEmptySelection;
- (BOOL)canAdd;
- (BOOL)canInsert;
- (BOOL)canRemove;
- (BOOL)canSelectNext;
- (BOOL)canSelectPrevious;
- (BOOL)clearsFilterPredicateOnInsertion;
- (id)content;
- (id)description;
- (void)didChangeArrangementCriteria;
- (void)didChangeValuesForArrangedKeys:(BOOL)arg1 objectKeys:(BOOL)arg2 indexKeys:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)filterPredicate;
- (id)initWithCoder:(id)arg1;
- (void)insert:(id)arg1;
- (void)insertObject:(id)arg1 atArrangedObjectIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)preservesSelection;
- (void)rearrangeObjects;
- (void)remove:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtArrangedObjectIndex:(unsigned long long)arg1;
- (void)removeObjects:(id)arg1;
- (void)removeObjectsAtArrangedObjectIndexes:(id)arg1;
- (BOOL)removeSelectedObjects:(id)arg1;
- (BOOL)removeSelectionIndexes:(id)arg1;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (id)selectedObjects;
- (unsigned long long)selectionIndex;
- (id)selectionIndexes;
- (BOOL)selectsInsertedObjects;
- (void)setAlwaysUsesMultipleValuesMarker:(BOOL)arg1;
- (void)setAutomaticallyRearrangesObjects:(BOOL)arg1;
- (void)setAvoidsEmptySelection:(BOOL)arg1;
- (void)setClearsFilterPredicateOnInsertion:(BOOL)arg1;
- (void)setContent:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setPreservesSelection:(BOOL)arg1;
- (BOOL)setSelectedObjects:(id)arg1;
- (BOOL)setSelectionIndex:(unsigned long long)arg1;
- (BOOL)setSelectionIndexes:(id)arg1;
- (void)setSelectsInsertedObjects:(BOOL)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setUsesLazyFetching:(BOOL)arg1;
- (id)sortDescriptors;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)willChangeValuesForArrangedKeys:(BOOL)arg1 objectKeys:(BOOL)arg2 indexKeys:(BOOL)arg3;

// NSArrayController (NSManagedController)

- (BOOL)_performFetchWithRequest:(id)arg1 merge:(BOOL)arg2 error:(id*)arg3;
- (void)_reactToMatchingInsertions:(id)arg1 deletions:(id)arg2 refreshed:(id)arg3;
- (void)addRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)defaultFetchRequest;
- (void)setManagedObjectContext:(id)arg1;

@end
