/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GraphVisualizer.framework/Versions/A/GraphVisualizer
 */

@interface GVRank : NSObject {
    GVRank * next;
    NSMutableArray * nodes;
    GVRank * prev;
    double  separation;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readwrite) GVRank *next;
@property (nonatomic, readwrite) GVRank *prev;
@property (nonatomic, readonly) double width;

- (void)addNode:(id)arg1;
- (void)buildNodeIterators;
- (void)centerNode:(id)arg1 at:(double)arg2;
- (void)centerNodesWithRespectoTo:(id)arg1;
- (void)dealloc;
- (void)exchangeNodeAtIndex:(unsigned long long)arg1 withNodeAtIndex:(unsigned long long)arg2;
- (double)height;
- (unsigned long long)inCrossings;
- (id)initWithSeparation:(struct CGSize { double x1; double x2; })arg1;
- (id)neighborsOfNode:(id)arg1;
- (id)next;
- (id)nodes;
- (unsigned long long)outCrossings;
- (id)prev;
- (void)removeNode:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setPrev:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForDummy;
- (void)sortByIndex;
- (double)width;

@end
