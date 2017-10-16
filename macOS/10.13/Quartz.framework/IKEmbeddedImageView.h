/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKEmbeddedImageView : NSView {
    void * _privateData;
}

- (BOOL)acceptsFirstResponder;
- (void)addToolbar;
- (void)crop:(id)arg1;
- (void)dealloc;
- (void)doCancelCrop:(id)arg1;
- (void)doCrop:(id)arg1;
- (void)effects:(id)arg1;
- (void)finalize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeToolbar;
- (void)rotate90ccw:(id)arg1;
- (void)rotate90cw:(id)arg1;
- (void)selectionRectAdded;
- (void)selectionRectRemoved;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(unsigned long long)arg1;
- (void)setImageFrameStyle:(unsigned long long)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)updateTextView;
- (void)viewDidMoveToWindow;
- (void)windowWillClose:(id)arg1;

@end
