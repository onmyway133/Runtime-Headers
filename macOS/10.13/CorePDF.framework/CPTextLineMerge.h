/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
 */

@interface CPTextLineMerge : NSObject {
    NSMutableArray * avail;
}

- (void)addInterval:(id)arg1 to:(id)arg2;
- (double)averageHeight:(id)arg1;
- (unsigned int)countOverlapsOfLineAtIndex:(unsigned int)arg1 in:(id)arg2;
- (void)detachDropCaps:(id)arg1 to:(id)arg2;
- (void)dropCaps:(id)arg1 to:(id)arg2;
- (void)eliminate:(id)arg1;
- (id)findLineFor:(id)arg1 in:(id)arg2;
- (BOOL)fits:(id)arg1 into:(id)arg2;
- (BOOL)hasOverlappingLines;
- (void)makeOverlappingLinesTo:(id)arg1;
- (void)mergeByColumn:(id)arg1;
- (void)mergeColumn:(id)arg1;
- (void)mergeLinesIn:(id)arg1;
- (void)mergeLinesInInterval:(id)arg1 from:(id)arg2;
- (void)removeOverlapping:(id)arg1;

@end
