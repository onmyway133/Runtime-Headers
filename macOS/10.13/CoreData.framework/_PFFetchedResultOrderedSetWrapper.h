/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {
    int  _cd_rc;
    NSArray * _underlyingArray;
    _PFWeakReference * _weakmoc;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)allObjects;
- (id)array;
- (id)arrayFromObjectIDs;
- (Class)classForArchiver;
- (Class)classForCoder;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)initWithArray:(id)arg1 andContext:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectEnumerator;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id)arg2;
- (void)willRead;

@end
