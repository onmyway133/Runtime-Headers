/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox
 */

@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal { id x1; struct OpaqueFigSubtitleRenderer {} *x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct __CFAttributedString {} *x4; unsigned char x5; } * layerInternal;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)finalize;
- (struct __CFString { }*)getContentID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getSuggestedBounds:(unsigned char)arg1;
- (id)init;
- (unsigned char)isDirty;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setContent:(struct __CFAttributedString { }*)arg1;
- (void)setCuePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDefaultFontSize:(double)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer { }*)arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
