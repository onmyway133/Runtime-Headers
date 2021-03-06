/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSTouchBarCustomizationPreviewDebugCursorView : NSView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _cursorPoint;
}

@property (atomic, readwrite) struct CGPoint { double x1; double x2; } cursorPoint;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (BOOL)_shouldDoLayerPerformanceUpdates;
- (struct CGPoint { double x1; double x2; })cursorPoint;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)isFlipped;
- (void)setCursorPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
