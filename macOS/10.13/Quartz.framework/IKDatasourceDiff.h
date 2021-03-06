/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKDatasourceDiff : NSObject

+ (struct __CFDictionary { }*)_buildUIDtoIndexCache:(id)arg1;
+ (void)applyDiff:(id)arg1 toOldArray:(id)arg2 withDataSource:(id)arg3 allocator:(id)arg4 allocatorSelector:(SEL)arg5;
+ (id)diffItemsArray:(id)arg1 withDataSource:(id)arg2;
+ (BOOL)indexDataSourceArray:(id)arg1;
+ (BOOL)indexItemsArray:(id)arg1;
+ (unsigned long long)indexOfItemContainingDataSource:(id)arg1 inArray:(id)arg2 arrayIsIndexed:(BOOL)arg3 newIndexIs:(int)arg4 uidToIndexCache:(struct __CFDictionary { }*)arg5;

@end
