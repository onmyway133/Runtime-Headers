/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTreeController : NSObjectController {
    id  _arrangedObjects;
    NSString * _childrenKeyPath;
    NSString * _countKeyPath;
    NSString * _leafKeyPath;
    NSArray * _modelObservingKeyPaths;
    id  _rootNode;
    NSArray * _selectedObjects;
    id  _selectionIndexPaths;
    NSArray * _sortDescriptors;
    struct __treeControllerFlags { 
        unsigned int _avoidsEmptySelection : 1; 
        unsigned int _preservesSelection : 1; 
        unsigned int _selectsInsertedObjects : 1; 
        unsigned int _explicitlyCannotInsert : 1; 
        unsigned int _explicitlyCannotInsertChild : 1; 
        unsigned int _explicitlyCannotAddChild : 1; 
        unsigned int _alwaysUsesMultipleValuesMarker : 1; 
        unsigned int _observingThroughArrangedObjects : 1; 
        unsigned int _mutatingNodes : 1; 
        unsigned int _performingFetch : 1; 
        unsigned int _skipSortingAfterFetch : 1; 
        unsigned int _usesIdenticalComparisonOfModelObjects : 1; 
        unsigned int _reservedTreeController : 20; 
    }  _treeControllerFlags;
    id  _treeControllerReserved1;
    id  _treeStructureObservers;
}

@property (atomic, readwrite) BOOL alwaysUsesMultipleValuesMarker;
@property (atomic, readonly) NSTreeNode *arrangedObjects;
@property (atomic, readwrite) BOOL avoidsEmptySelection;
@property (atomic, readonly) BOOL canAddChild;
@property (atomic, readonly) BOOL canInsert;
@property (atomic, readonly) BOOL canInsertChild;
@property (atomic, readwrite, copy) NSString *childrenKeyPath;
@property (atomic, readwrite, retain) id content;
@property (atomic, readwrite, copy) NSString *countKeyPath;
@property (atomic, readwrite, copy) NSString *leafKeyPath;
@property (atomic, readwrite) BOOL preservesSelection;
@property (atomic, readonly, copy) NSArray *selectedNodes;
@property (atomic, readonly, copy) NSArray *selectedObjects;
@property (atomic, readonly, copy) NSIndexPath *selectionIndexPath;
@property (atomic, readonly, copy) NSArray *selectionIndexPaths;
@property (atomic, readwrite) BOOL selectsInsertedObjects;
@property (atomic, readwrite, copy) NSArray *sortDescriptors;

+ (id)_keyValueBindingAccessPoints;
+ (id)_modelAndProxyKeys;
+ (Class)_modelObservingTrackerClass;
+ (id)_nonAutomaticObservingKeys;

- (id)_additionIndexPathAppendChildIndex:(BOOL)arg1;
- (void)_changeEditable:(BOOL)arg1;
- (void)_commonRemoveObserverCleanupForKeyPath:(id)arg1;
- (id)_controllerKeys;
- (id)_copySelectedObjectLineages;
- (void)_dealloc;
- (void)_didChangeValuesForArrangedKeys:(BOOL)arg1 objectKeys:(BOOL)arg2 indexPathKeys:(BOOL)arg3;
- (void)_executeAdd:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)_executeAddChild:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)_executeInsert:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)_executeInsertChild:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (BOOL)_explicitlyCannotAddChild;
- (BOOL)_explicitlyCannotInsert;
- (BOOL)_explicitlyCannotInsertChild;
- (void)_init;
- (void)_insertChildOrSibling:(BOOL)arg1;
- (void)_insertObject:(id)arg1 atArrangedObjectIndexPath:(id)arg2 objectHandler:(id)arg3;
- (id)_insertionIndexPathAppendChildIndex:(BOOL)arg1;
- (void)_invokeMultipleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 atIndexPath:(id)arg4;
- (void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3;
- (id)_modelObservingKeyPaths;
- (id)_multipleMutableArrayValueForKey:(id)arg1 atIndexPath:(id)arg2;
- (id)_multipleMutableArrayValueForKeyPath:(id)arg1 atIndexPath:(id)arg2;
- (id)_multipleValueForKey:(id)arg1 atIndexPath:(id)arg2;
- (id)_multipleValueForKeyPath:(id)arg1 atIndexPath:(id)arg2;
- (id)_multipleValuesObjectAtIndexPath:(id)arg1;
- (BOOL)_mutatingNodes;
- (void)_prepareContentWithNewObject:(id)arg1;
- (void)_prepareControllerTree;
- (BOOL)_registerObservingForAllModelObjects;
- (void)_removeObjectsAtArrangedObjectIndexPaths:(id)arg1 objectHandler:(id)arg2;
- (void)_removeSelectionIndexPathsBelowNode:(id)arg1;
- (unsigned long long)_rootContentCount;
- (id)_rootNode;
- (BOOL)_selectObjectsAtIndexPaths:(id)arg1 avoidsEmptySelection:(BOOL)arg2 sendObserverNotifications:(BOOL)arg3;
- (BOOL)_selectObjectsAtIndexPathsNoCopy:(id)arg1 avoidsEmptySelection:(BOOL)arg2 sendObserverNotifications:(BOOL)arg3;
- (void)_setContentInBackground:(id)arg1;
- (void)_setExplicitlyCannotAdd:(BOOL)arg1 insert:(BOOL)arg2 remove:(BOOL)arg3;
- (void)_setMultipleValue:(id)arg1 forKey:(id)arg2 atIndexPath:(id)arg3;
- (void)_setMultipleValue:(id)arg1 forKeyPath:(id)arg2 atIndexPath:(id)arg3;
- (void)_setSingleValue:(id)arg1 forKey:(id)arg2;
- (void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2;
- (id)_singleMutableArrayValueForKey:(id)arg1;
- (id)_singleMutableArrayValueForKeyPath:(id)arg1;
- (id)_singleValueForKey:(id)arg1;
- (id)_singleValueForKeyPath:(id)arg1;
- (id)_singleValueForKeyPath:(id)arg1 operationType:(long long)arg2;
- (BOOL)_skipSorting;
- (void)_startObservingSelectionIfNecessary;
- (void)_stopObservingNodeIfNecessary:(id)arg1;
- (void)_stopObservingSelectionIfNecessary;
- (BOOL)_validateMultipleValue:(id*)arg1 forKeyPath:(id)arg2 atIndexPath:(id)arg3 error:(id*)arg4;
- (BOOL)_validateSingleValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)_validateSingleValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (void)_willChangeValuesForArrangedKeys:(BOOL)arg1 objectKeys:(BOOL)arg2 indexPathKeys:(BOOL)arg3;
- (void)add:(id)arg1;
- (void)addChild:(id)arg1;
- (void)addChildObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (BOOL)addSelectionIndexPaths:(id)arg1;
- (BOOL)alwaysUsesMultipleValuesMarker;
- (id)arrangedObjects;
- (BOOL)avoidsEmptySelection;
- (void)awakeFromNib;
- (BOOL)canAdd;
- (BOOL)canAddChild;
- (BOOL)canInsert;
- (BOOL)canInsertChild;
- (BOOL)canRemove;
- (id)childrenKeyPath;
- (id)childrenKeyPathForNode:(id)arg1;
- (id)content;
- (id)countKeyPath;
- (id)countKeyPathForNode:(id)arg1;
- (id)createChildNodeForRepresentedObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)insert:(id)arg1;
- (void)insertChild:(id)arg1;
- (void)insertObject:(id)arg1 atArrangedObjectIndexPath:(id)arg2;
- (void)insertObjects:(id)arg1 atArrangedObjectIndexPaths:(id)arg2;
- (id)leafKeyPath;
- (id)leafKeyPathForNode:(id)arg1;
- (void)moveNode:(id)arg1 toIndexPath:(id)arg2;
- (void)moveNodes:(id)arg1 toIndexPath:(id)arg2;
- (void)moveNodes:(id)arg1 toIndexPaths:(id)arg2;
- (id)newChildObject;
- (id)newObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)preservesSelection;
- (void)rearrangeObjects;
- (void)remove:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtArrangedObjectIndexPath:(id)arg1;
- (void)removeObjectsAtArrangedObjectIndexPaths:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (BOOL)removeSelectionIndexPaths:(id)arg1;
- (id)selectedNodes;
- (id)selectedObjects;
- (id)selectionIndexPath;
- (id)selectionIndexPaths;
- (BOOL)selectsInsertedObjects;
- (void)setAlwaysUsesMultipleValuesMarker:(BOOL)arg1;
- (void)setAvoidsEmptySelection:(BOOL)arg1;
- (void)setChildrenKeyPath:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setCountKeyPath:(id)arg1;
- (void)setLeafKeyPath:(id)arg1;
- (void)setPreservesSelection:(BOOL)arg1;
- (BOOL)setSelectionIndexPath:(id)arg1;
- (BOOL)setSelectionIndexPaths:(id)arg1;
- (void)setSelectsInsertedObjects:(BOOL)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setUsesIdenticalComparisonOfModelObjects:(BOOL)arg1;
- (id)sortDescriptors;
- (BOOL)usesIdenticalComparisonOfModelObjects;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// NSTreeController (NSManagedController)

- (BOOL)_performFetchWithRequest:(id)arg1 merge:(BOOL)arg2 error:(id*)arg3;
- (void)_reactToMatchingInsertions:(id)arg1 deletions:(id)arg2 refreshed:(id)arg3;
- (id)_relationshipKeyPathsForPrefetching;
- (id)defaultFetchRequest;
- (void)setManagedObjectContext:(id)arg1;
- (void)setUsesLazyFetching:(BOOL)arg1;

@end
