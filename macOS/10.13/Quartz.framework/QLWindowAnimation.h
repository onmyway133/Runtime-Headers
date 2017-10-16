/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLWindowAnimation : NSAnimation {
    QLAnimationWindowEffect * _windowEffect;
}

@property (atomic, readonly) QLAnimationWindowEffect *windowEffect;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)currentValue;
- (void)discardWindowEffect;
- (void)setCurrentProgress:(float)arg1;
- (id)windowEffect;

@end
