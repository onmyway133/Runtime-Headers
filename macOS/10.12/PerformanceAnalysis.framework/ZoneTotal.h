/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface ZoneTotal : MallocDataCategorySummary {
    NSMutableDictionary * allocationTotals;
}

@property (atomic, readwrite, retain) NSMutableDictionary *allocationTotals;

- (void)addAllocation:(id)arg1;
- (id)allocationTotals;
- (void)dealloc;
- (id)initWithAllocation:(id)arg1;
- (BOOL)printData:(id)arg1;
- (void)setAllocationTotals:(id)arg1;

@end