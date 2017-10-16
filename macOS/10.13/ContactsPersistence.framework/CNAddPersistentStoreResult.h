/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNAddPersistentStoreResult : NSObject {
    NSPersistentStoreCoordinator * _coordinator;
    BOOL  _didMigrate;
    BOOL  _pristineDatabase;
    BOOL  _shouldCache;
    NSPersistentStore * _store;
}

@property (atomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (atomic, readonly) BOOL didMigrate;
@property (getter=isPristineDatabase, atomic, readonly) BOOL pristineDatabase;
@property (atomic, readonly) BOOL shouldCache;
@property (atomic, readonly) NSPersistentStore *store;

- (id)coordinator;
- (void)dealloc;
- (id)description;
- (BOOL)didMigrate;
- (id)initWithCoordinator:(id)arg1 store:(id)arg2 pristineDatabase:(BOOL)arg3 shouldCache:(BOOL)arg4 didMigrate:(BOOL)arg5;
- (BOOL)isPristineDatabase;
- (BOOL)shouldCache;
- (id)store;

@end