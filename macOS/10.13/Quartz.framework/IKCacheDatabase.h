/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKCacheDatabase : NSObject {
    NSMutableIndexSet * _freeIndexes;
    IKIconDatabase * _iconCache;
    NSMutableArray * _indexedObjects;
    NSMutableDictionary * _uids;
}

- (void)_releaseIndex:(unsigned long long)arg1;
- (void)_removeEntryAtIndex:(unsigned long long)arg1;
- (void)_retainIndex:(unsigned long long)arg1;
- (void)addReference:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)addUID:(id)arg1;
- (void)associateUID:(id)arg1 withIndex:(unsigned long long)arg2;
- (unsigned long long)cacheVersionForUID:(id)arg1;
- (void)dealloc;
- (id)entries;
- (id)entryAtIndex:(unsigned long long)arg1;
- (BOOL)entryAtUIDIsValid:(id)arg1;
- (id)freeIndexes;
- (id)iconCache;
- (id)imageWithUID:(id)arg1;
- (unsigned long long)indexForUID:(id)arg1;
- (id)init;
- (void)invalidateEntryAtUID:(id)arg1;
- (unsigned long long)lastIndex;
- (unsigned long long)nextFreeIndex;
- (id)nodeAtIndex:(unsigned long long)arg1 withSize:(int)arg2;
- (long long)referenceCountAtIndex:(unsigned long long)arg1;
- (void)releaseIndex:(unsigned long long)arg1;
- (void)removeReference:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)resetInternalCacheVersionForUID:(id)arg1;
- (void)retainIndex:(unsigned long long)arg1;
- (void)setCacheVersion:(unsigned long long)arg1 forUID:(id)arg2;
- (void)setImage:(id)arg1 withUID:(id)arg2;
- (unsigned long long)unshareUID:(id)arg1;
- (void)validateEntryAtUID:(id)arg1;

@end
