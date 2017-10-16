/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface StdMovieUITextItem : NSView {
    NSImage * _backgroundImage;
    NSMutableAttributedString * _titleAttributedString;
    NSMutableDictionary * _titleAttributes;
}

- (void)_loadBackgroundImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 resizable:(BOOL)arg2 centered:(BOOL)arg3;
- (id)initWithResizable:(BOOL)arg1 centered:(BOOL)arg2;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTitleString:(id)arg1;

@end
