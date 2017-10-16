/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTabBarClipView : NSClipView {
    BOOL  _shouldChangeNextScrollFromVerticalToHorizontal;
}

@property (nonatomic, readwrite) BOOL shouldChangeNextScrollFromVerticalToHorizontal;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (BOOL)_scrollTo:(const struct CGPoint { double x1; double x2; }*)arg1 animateScroll:(long long)arg2 flashScrollerKnobs:(unsigned long long)arg3;
- (BOOL)_shouldDoLayerPerformanceUpdates;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (void)setShouldChangeNextScrollFromVerticalToHorizontal:(BOOL)arg1;
- (BOOL)shouldChangeNextScrollFromVerticalToHorizontal;

@end