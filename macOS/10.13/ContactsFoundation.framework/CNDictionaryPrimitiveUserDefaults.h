/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {
    NSMutableDictionary * _preferences;
    unsigned long long  _setupAutosyncCount;
    unsigned long long  _synchronizeCount;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) unsigned long long setupAutosyncCount;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) unsigned long long synchronizeCount;

- (void).cxx_destruct;
- (id)init;
- (BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (void)setupAutosync;
- (unsigned long long)setupAutosyncCount;
- (BOOL)synchronize;
- (unsigned long long)synchronizeCount;

@end
