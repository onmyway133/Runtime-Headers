/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLOverlayProgressButtonLayer : QLOverlayButtonLayer {
    NSObject<OS_dispatch_source> * _collapseTimer;
    BOOL  _expanded;
    BOOL  _ignoreNextProgressChange;
    QLOverlayProgressLayer * _progressLayer;
}

@property (atomic, readwrite) BOOL expanded;
@property (atomic, readwrite) float progress;

+ (double)_shadowBlur;
+ (double)_shadowWidth;
+ (struct CGSize { double x1; double x2; })buttonSize;

- (void)_updateExpandedLook;
- (BOOL)expanded;
- (id)init;
- (float)progress;
- (void)setContentsScale:(double)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setProgress:(float)arg1;

@end
