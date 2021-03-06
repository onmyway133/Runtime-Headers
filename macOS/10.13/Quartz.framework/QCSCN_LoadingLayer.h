/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSCN_LoadingLayer : CALayer {
    QCSCN_LoadingProgressIndicatorLayer * _progressIndicatorLayer;
    CAKeyframeAnimation * _rotation;
    BOOL  _showText;
    CATextLayer * _textLayer;
}

@property (atomic, readwrite, copy) NSString *loadingString;
@property (atomic, readwrite) BOOL whiteProgressIndicator;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)didHide;
- (id)init;
- (void)layoutSublayers;
- (id)loadingString;
- (void)setLoadingString:(id)arg1;
- (void)setWhiteProgressIndicator:(BOOL)arg1;
- (BOOL)whiteProgressIndicator;
- (void)willShow;

@end
