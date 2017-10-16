/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface __NSBundleTables : NSObject {
    NSMapTable * _bundleForClassMap;
    NSPointerArray * _immortalBundles;
    NSHashTable * _loadedBundles;
    NSHashTable * _loadedFrameworks;
    NSLock * _lock;
    NSMapTable * _resolvedPathToBundles;
    NSHashTable * _staticFrameworks;
}

+ (id)bundleTables;

- (id)addBundle:(id)arg1 forPath:(id)arg2 withType:(unsigned long long)arg3 forClass:(Class)arg4 isImmortal:(BOOL)arg5;
- (void)addStaticFrameworkBundles:(id)arg1;
- (id)allBundles;
- (id)allFrameworks;
- (id)bundleForClass:(Class)arg1;
- (id)bundleForPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)loadedBundles;
- (void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned long long)arg3;

@end
