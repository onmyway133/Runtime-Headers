/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCTimeLineView : QCZoomView {
    NSColor * _axisColor;
    NSColor * _backgroundColor;
    NSColor * _curveHullColor;
    NSColor * _disabledAreaColor;
    NSColor * _disabledAreaGridLineColor;
    long long  _dragIndex;
    long long  _dragTimeLineIndex;
    int  _dragType;
    BOOL  _drawDragBoundries;
    QCTimeLineEditorView * _editorView;
    NSMutableDictionary * _gridLabelAttributes;
    NSColor * _gridLineColor;
    NSColor * _gridRulerColor;
    QCKeyFrameEditor * _keyFrameEditor;
    NSMutableArray * _legendComponents;
    NSMutableDictionary * _mouseCoordsAttributes;
    NSNumberFormatter * _mouseCoordsXFormatter;
    NSNumberFormatter * _mouseCoordsYFormatter;
    long long  _newTimeLineIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionBounds;
    QCTimeLine * _timeLine;
    BOOL  _trackMouseCoordinates;
}

- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsNonSquareZooming;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)dealloc;
- (BOOL)drawDragBoundries;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 editorView:(id)arg2;
- (BOOL)isOpaque;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxBounds;
- (double)minX;
- (void)mouseDown:(id)arg1;
- (id)patch;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBounds;
- (void)setDrawDragBoundries:(BOOL)arg1;
- (void)setEditor:(id)arg1;
- (void)setPatch:(id)arg1;
- (void)setTrackMouseCoordinates:(BOOL)arg1;
- (BOOL)trackMouseCoordinates;

// QCTimeLineView (Private)

- (id)__deleteKeyFrame:(long long)arg1 timeLine:(long long)arg2 context:(void*)arg3;
- (id)__nudgeKeyFrame:(long long)arg1 timeLine:(long long)arg2 context:(void*)arg3;
- (id)__selectKeyFrame:(long long)arg1 timeLine:(long long)arg2 context:(void*)arg3;
- (id)__unionRect:(long long)arg1 timeLine:(long long)arg2 context:(void*)arg3;
- (void)__zoomToFitAll:(id)arg1;
- (void)__zoomToFitSelection:(id)arg1;
- (void)_activateTimeLineFromLegend:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsWithAllKeyFrames:(BOOL)arg1;
- (unsigned long long)_digitsForAxis:(int)arg1 gridStep:(double)arg2;
- (void)_drawBackground:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_drawDragBoundries;
- (void)_drawLegend;
- (void)_drawMouseCoordinates;
- (void)_drawRulers:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_drawSelectionArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_drawTimeLineAtIndex:(long long)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_gridStepForAxis:(int)arg1;
- (void)_handleMouseEvent:(id)arg1;
- (BOOL)_keyFramesSelected;
- (struct CGSize { double x1; double x2; })_maxLabelSizeForAxis:(int)arg1 gridStep:(double)arg2 digits:(long long)arg3 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (long long)_nearestKeyFrameAtX:(double)arg1 andY:(double)arg2 controlType:(int*)arg3 timeLineIndex:(long long*)arg4;
- (void)_offsetControlPointOfType:(int)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2 forKeyFrame:(long long)arg3 inTimeLine:(long long)arg4;
- (long long)_offsetSelectedKeyFramesByOffset:(struct CGPoint { double x1; double x2; })arg1 primaryKeyFrameIndex:(long long)arg2 primaryTimeLineIndex:(long long)arg3;
- (void)_patchStateChanged:(id)arg1;
- (void)_setKeyFrameEditor:(id)arg1;
- (void)_setTimelineColor:(id)arg1;
- (void)_setTimelineIdentifier:(id)arg1;
- (void)_setTimelineVisibility:(id)arg1;
- (void)createNewTimeLine:(id)arg1;
- (BOOL)curveHullsEnabled;
- (BOOL)legendVisible;
- (void)removeSelectedTimeLine:(id)arg1;
- (void)setCurveHullsEnabled:(BOOL)arg1;
- (void)setLegendVisible:(BOOL)arg1;

@end