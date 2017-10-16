/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCachedTableRowView : NSTableRowView {
    NSImage * _cachedImage;
}

@property (atomic, readwrite, retain) NSImage *cachedImage;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (Class)_animatorClass;
- (void)_cacheRowImageFromTableView;
- (void)_setTrackingAreasDirty:(int)arg1;
- (int)_trackingAreasDirty;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)cachedImage;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isOpaque;
- (void)setCachedImage:(id)arg1;
- (void)setEmphasized:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
