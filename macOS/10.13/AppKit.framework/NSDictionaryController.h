/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDictionaryController : NSArrayController {
    id  _contentDictionary;
    struct __dictionaryControllerFlags { 
        unsigned int _deepCopiesValues : 1; 
        unsigned int _suppressBuildingDictionary : 1; 
        unsigned int _reservedDictionaryController : 30; 
    }  _dictionaryControllerFlags;
    NSArray * _excludedKeys;
    NSArray * _includedKeys;
    NSString * _initialKey;
    id  _initialValue;
    NSDictionary * _keyForLocalizedKeyDictionary;
    NSDictionary * _localizedKeyForKeyDictionary;
    NSString * _localizedKeyStringsFileName;
    unsigned long long  _minimumInsertionKeyIndex;
    void * _reserved5;
    void * _reserved6;
    void * _reserved7;
}

@property (atomic, readwrite, copy) NSArray *excludedKeys;
@property (atomic, readwrite, copy) NSArray *includedKeys;
@property (atomic, readwrite, copy) NSString *initialKey;
@property (atomic, readwrite, retain) id initialValue;
@property (atomic, readwrite, copy) NSDictionary *localizedKeyDictionary;
@property (atomic, readwrite, copy) NSString *localizedKeyTable;

+ (Class)_defaultObjectClass;
+ (id)_nonAutomaticObservingKeys;

- (id)_arrayContent;
- (void)_buildAndAssignNewContentDictionary;
- (void)_dealloc;
- (id)_dictionaryForKeyValuePairArray:(id)arg1 pullExcludedKeysFromDictionary:(id)arg2;
- (void)_init;
- (void)_insertObject:(id)arg1 atArrangedObjectIndex:(unsigned long long)arg2 objectHandler:(id)arg3;
- (void)_insertObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2 objectHandler:(id)arg3;
- (id)_insertionKeyForDictionary:(id)arg1 minimumIndex:(unsigned long long*)arg2;
- (void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3;
- (id)_keyForLocalizedKey:(id)arg1;
- (id)_keyForLocalizedKeyDictionary;
- (id)_keyValuePairArrayForDictionary:(id)arg1 reuseKeyValuePairsFromArray:(id)arg2;
- (id)_localizedKeyForKey:(id)arg1;
- (id)_newObject;
- (void)_noteKeyValuePairChangedKey:(id)arg1;
- (void)_noteKeyValuePairChangedValue:(id)arg1;
- (void)_prepareContentWithNewObject:(id)arg1;
- (void)_recomputeLocalizedKeys;
- (void)_removeObjectAtArrangedObjectIndex:(unsigned long long)arg1 objectHandler:(id)arg2;
- (void)_removeObjects:(id)arg1 objectHandler:(id)arg2;
- (void)_removeObjectsAtArrangedObjectIndexes:(id)arg1 contentIndexes:(id)arg2 objectHandler:(id)arg3;
- (BOOL)_sendsContentChangeNotifications;
- (void)_setArrayContentInBackground:(id)arg1;
- (void)_setContentInBackground:(id)arg1;
- (void)_setSingleValue:(id)arg1 forKey:(id)arg2;
- (void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2;
- (id)_transformationForString:(id)arg1 dictionary:(id)arg2;
- (void)_updateLocalizedDictionaryForNewLocalizedKeyTable;
- (BOOL)canRemove;
- (id)content;
- (BOOL)deepCopiesValues;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedKeys;
- (id)includedKeys;
- (id)initWithCoder:(id)arg1;
- (id)initialKey;
- (id)initialValue;
- (id)localizedKeyDictionary;
- (id)localizedKeyTable;
- (id)newObject;
- (void)setContent:(id)arg1;
- (void)setDeepCopiesValues:(BOOL)arg1;
- (void)setExcludedKeys:(id)arg1;
- (void)setIncludedKeys:(id)arg1;
- (void)setInitialKey:(id)arg1;
- (void)setInitialValue:(id)arg1;
- (void)setLocalizedKeyDictionary:(id)arg1;
- (void)setLocalizedKeyTable:(id)arg1;

// NSDictionaryController (NSManagedController)

- (id)_managedProxy;
- (void)setEntityName:(id)arg1;
- (void)setFetchPredicate:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;

@end
