/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTitlebarAccessoryClipView : NSClipView {
    NSTitlebarAccessoryViewController * _accessoryViewController;
}

@property (atomic, readwrite) NSTitlebarAccessoryViewController *accessoryViewController;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_isKeyLoopGroup;
- (BOOL)_shouldFixupChildAutoresizingMaskOnResizeSubviewsOverride;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessoryViewController;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAccessoryViewController:(id)arg1;

@end
