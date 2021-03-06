/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAMemoryCategoryOrganizer : NSObject <NSCoding> {
    NSMutableDictionary * _categories;
    NSMutableSet * _memObjects;
    PAProcess * process;
    long long  totalCleanSize;
    long long  totalDirtySize;
    long long  totalReclaimableSize;
    long long  totalSwappedSize;
}

@property (atomic, readonly) NSDictionary *categories;
@property (atomic, readonly) NSSet *memObjects;
@property (atomic, readonly) PAProcess *process;
@property (atomic, readonly) long long totalCleanSize;
@property (atomic, readonly) long long totalDirtySize;
@property (atomic, readonly) long long totalReclaimableSize;
@property (atomic, readonly) long long totalSwappedSize;

+ (int)_categoryFromRegion:(id)arg1;
+ (id)_categoryStringForMemRegion:(id)arg1;
+ (id)_stringFromMemRegionCategory:(int)arg1;

- (id)_sortedNonZeroCategoriesForFlavor:(int)arg1;
- (void)addMemoryObject:(id)arg1;
- (id)categories;
- (void)dealloc;
- (id)detailStringForFlavor:(int)arg1 andCallOutSwapped:(BOOL)arg2 andShowCategories:(BOOL)arg3 andShowRegions:(BOOL)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initForProcess:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)memObjects;
- (id)process;
- (long long)totalCleanSize;
- (long long)totalDirtySize;
- (long long)totalReclaimableSize;
- (long long)totalSwappedSize;

@end
