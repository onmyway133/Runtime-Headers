/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLOverlayProgressDeterminateLayer : CALayer <CALayerDelegate> {
    CALayer * _contentLayer;
    QLOverlayProgressHalfCircleLayer * _fixedRightHalfCircleLayer;
    CALayer * _intermediateLayer;
    CALayer * _maskLayer;
    QLOverlayProgressHalfCircleLayer * _movingHalfCircleLayer;
    double  _progress;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) double progress;
@property (atomic, readonly) Class superclass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (double)progress;
- (void)setContentsScale:(double)arg1;
- (void)setProgress:(double)arg1;

@end
