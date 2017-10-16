/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVTrimSelectionView : NSView {
    NSImage * _selectionImage;
    unsigned long long  _trimViewStyle;
}

@property (atomic, readwrite) unsigned long long trimViewStyle;

- (void).cxx_destruct;
- (void)_updateSelectionImage;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrimViewStyle:(unsigned long long)arg1;
- (unsigned long long)trimViewStyle;

@end
