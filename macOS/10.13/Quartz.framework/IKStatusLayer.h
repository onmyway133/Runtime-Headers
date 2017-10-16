/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKStatusLayer : IKCenteredLayer {
    IKNCustomLayer * _cancelButtonLayer;
    double  _offset;
    double  _progress;
    IKNProgressLayer * _progressLayer;
    BOOL  _showCancelButton;
    NSString * _statusText;
    CATextLayer * _statusTextLayer;
    double  _textSize;
    NSView * _view;
    double  _yPosition;
}

@property (nonatomic, readwrite) double progress;
@property (nonatomic, readwrite) BOOL showCancelButton;
@property (nonatomic, readwrite, copy) NSString *statusText;
@property (atomic, readwrite) double yPosition;

- (void)debugLayerTree:(id)arg1;
- (double)defaultTextSize;
- (void)dumpLayer:(id)arg1 prefix:(id)arg2;
- (void)hideProgress;
- (void)hideStatusLayer;
- (BOOL)mouseDownInCancelButton:(struct CGPoint { double x1; double x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)progress;
- (void)resizeStatusLayer;
- (void)setProgress:(double)arg1;
- (void)setShowCancelButton:(BOOL)arg1;
- (void)setStatusText:(id)arg1;
- (void)setYPosition:(double)arg1;
- (void)setup:(id)arg1;
- (BOOL)showCancelButton;
- (void)showProgress;
- (void)showStatusLayer;
- (id)statusText;
- (id)updateStatusTextLayer;
- (double)yPosition;

@end
