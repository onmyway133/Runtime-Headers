/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFAccessibilityEffectLayer : CALayer {
    PDFAccessibilityEffectLayerPrivate * _private;
}

- (void).cxx_destruct;
- (void)_addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withColor:(id)arg2 ofThickness:(double)arg3 withString:(id)arg4;
- (void)_iterateCGPDFNode:(struct CGPDFNode { }*)arg1 fromLayout:(struct CGPDFLayout { }*)arg2;
- (id)initWithPage:(id)arg1;
- (void)setDisplayBox:(long long)arg1;
- (void)setup;
- (void)updateVisibleLayers;

@end
