/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFHUDLayerController : NSObject {
    PDFHUDLayerControllerPrivate * _private;
}

- (void).cxx_destruct;
- (id)_controlForEvent:(id)arg1;
- (id)_getImageForControlName:(id)arg1 active:(bool)arg2;
- (id)_layerForEvent:(id)arg1;
- (void)_performActionForControl:(id)arg1;
- (void)_setLayerColor:(double)arg1;
- (void)_setupLayer:(id)arg1;
- (void)dealloc;
- (id)initInLayer:(id)arg1 withControlArray:(id)arg2;
- (bool)isVisible;
- (void)mouseDown:(id)arg1;
- (bool)mouseIsInController:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisible:(bool)arg1;

@end
