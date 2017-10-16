/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScreen : NSObject {
    id  _auxiliaryStorage;
    int  _depth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    int  _screenNumber;
}

@property (atomic, readonly) double backingScaleFactor;
@property (atomic, readonly) NSColorSpace *colorSpace;
@property (atomic, readonly) int depth;
@property (atomic, readonly, copy) NSDictionary *deviceDescription;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (atomic, readonly) const int*supportedWindowDepths;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (double)_backingScaleFactorForScreen:(id)arg1;
+ (struct CGPoint { double x1; double x2; })_cgScreenPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)_screenAtPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)_screenForScreenNumber:(long long)arg1;
+ (id)_screenForUUIDString:(id)arg1;
+ (BOOL)_spacePerDisplay;
+ (id)_zeroScreen;
+ (double)_zeroScreenHeight;
+ (BOOL)_zeroScreenIsNew;
+ (id)deepestScreen;
+ (id)mainScreen;
+ (id)screens;
+ (BOOL)screensHaveSeparateSpaces;

- (id)_UUIDString;
- (unsigned long long)_currentSpace;
- (int)_displayID;
- (BOOL)_dockHidden;
- (unsigned int)_dockOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dockRect;
- (id)_initWithDisplay:(id)arg1 sharedInfo:(id)arg2;
- (BOOL)_isActiveScreen;
- (BOOL)_isZeroScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutFrame;
- (double)_menuBarHeight;
- (struct CGSize { double x1; double x2; })_resolution;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_safeVisibleFrame;
- (long long)_screenNumber;
- (id)_snapshot;
- (void)_updateWithDisplay:(id)arg1 sharedInfo:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backingAlignedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;
- (double)backingScaleFactor;
- (BOOL)canRepresentDisplayGamut:(long long)arg1;
- (id)colorSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromBacking:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToBacking:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (int)depth;
- (id)deviceDescription;
- (struct CGSize { double x1; double x2; })devicePixelCounts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (id)imageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 underWindow:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (double)maximumExtendedDynamicRangeColorComponentValue;
- (const int*)supportedWindowDepths;
- (double)userSpaceScaleFactor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

// NSScreen (NSDisplayLink1)

- (id)displayLinkWithHandler:(id)arg1;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;

// NSScreen (NSScreenUpdate)

- (void)addUpdateHandler:(id)arg1;

// NSScreen (_NSFullScreenSupport)

+ (BOOL)_captureAllScreens:(id*)arg1;
+ (BOOL)_releaseAllCapturedScreens:(id*)arg1;
+ (int)_shieldingWindowLevel;

- (id)_availableSettings;
- (id)_bestSettingSimilarToSetting:(id)arg1 exactMatch:(BOOL*)arg2;
- (id)_bestSettingWithBitsPerPixel:(int)arg1 width:(int)arg2 height:(int)arg3 exactMatch:(BOOL*)arg4;
- (id)_bestSettingWithBitsPerPixel:(int)arg1 width:(int)arg2 height:(int)arg3 refreshRate:(double)arg4 exactMatch:(BOOL*)arg5;
- (BOOL)_capture:(id*)arg1;
- (id)_currentSetting;
- (BOOL)_isCaptured;
- (BOOL)_releaseCapture:(id*)arg1;
- (BOOL)_switchToSetting:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI

// NSScreen (QuickLookAdditions)

+ (id)quickLook_screenContainingPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
