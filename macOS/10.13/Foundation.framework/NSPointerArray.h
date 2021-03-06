/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSPointerArray : NSObject <NSCoding, NSCopying, NSFastEnumeration>

@property (atomic, readwrite) unsigned long long count;
@property (atomic, readonly, copy) NSPointerFunctions *pointerFunctions;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;

- (void)addPointer:(void*)arg1;
- (void)compact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2;
- (void*)pointerAtIndex:(unsigned long long)arg1;
- (id)pointerFunctions;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2;
- (void)setCount:(unsigned long long)arg1;

// NSPointerArray (NSArrayConveniences)

+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithWeakObjects;
+ (id)strongObjectsPointerArray;
+ (id)weakObjectsPointerArray;

- (id)allObjects;
- (id)mutableArray;

// Image: /Applications/Xcode.app/Contents/SharedFrameworks/DebugHierarchyFoundation.framework/Versions/A/DebugHierarchyFoundation

// NSPointerArray (DBGAdditions)

- (void)dbg_addObject:(id)arg1;
- (unsigned long long)dbg_indexOfObjectIdenticalTo:(id)arg1;
- (void)dbg_insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)dbg_objectAtIndex:(unsigned long long)arg1;
- (void)dbg_replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
