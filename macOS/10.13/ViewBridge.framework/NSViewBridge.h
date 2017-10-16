/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
 */

@interface NSViewBridge : NSObject {
    NSMutableDictionary * _dict;
    NSObject<NSViewBridgeKVOBuddy> * _kvoBuddy;
    NSMutableSet * _nonLocalChangesInProgress;
}

@property (atomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (atomic, readwrite) NSObject<NSViewBridgeKVOBuddy> *kvoBuddy;
@property (atomic, readonly) int processIdentifier;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)objectIsSuitable:(id)arg1;

- (id)_copyValueForEntitlement:(id)arg1;
- (BOOL)_hasTrueValueForEntitlement:(id)arg1;
- (id)allKeys;
- (struct { unsigned int x1[8]; })auditToken;
- (BOOL)changeOriginatesLocally;
- (BOOL)changeOriginatesLocally:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasKey:(id)arg1;
- (BOOL)hasObject:(id)arg1 forKey:(id)arg2;
- (BOOL)hasObjectForKey:(id)arg1;
- (BOOL)isKeyPath:(id)arg1;
- (long long)keyCount;
- (BOOL)keyIsRelevantToBuddy:(id)arg1;
- (id)kvoBuddy;
- (BOOL)nonLocalChangeInProgress;
- (void)nonLocalChangeInProgress:(id)arg1 block:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned char)ownerForKey:(id)arg1;
- (int)processIdentifier;
- (void)registerKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3;
- (void)setKvoBuddy:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 withKVO:(BOOL)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
