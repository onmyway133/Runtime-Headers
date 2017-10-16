/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrubberFlowLayoutSupport : NSObject {
    NSMutableIndexSet * _dirtyIndexes;
    BOOL  _dynamicSizes;
    long long  _frameCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _frames;
    id  _layout;
}

@property (atomic, readonly) double contentWidth;
@property (atomic, readwrite) BOOL dynamicSizes;
@property (nonatomic, readwrite) NSScrubberFlowLayout *scrubberLayout;

- (void).cxx_destruct;
- (long long)_indexOfItemAtLocation:(double)arg1;
- (double)contentWidth;
- (void)dealloc;
- (BOOL)dynamicSizes;
- (void)ensureValidLayout;
- (void)enumerateFramesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(long long)arg1;
- (id)init;
- (void)invalidateEverything;
- (void)invalidateItemsAtIndexes:(id)arg1;
- (id)scrubberLayout;
- (void)setDynamicSizes:(BOOL)arg1;
- (void)setScrubberLayout:(id)arg1;

@end
