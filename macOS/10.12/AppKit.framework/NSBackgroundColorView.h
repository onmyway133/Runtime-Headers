/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSBackgroundColorView : NSView {
    NSColor * _backgroundColor;
}

@property (atomic, readwrite, copy) NSColor *backgroundColor;

- (void)_setTrackingAreasDirty:(int)arg1;
- (int)_trackingAreasDirty;
- (id)backgroundColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end