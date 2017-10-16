/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKGradientImageButtonCell : NSButtonCell {
    int  _borderSides;
    BOOL  _drawBackground;
    BOOL  _enableGradientStylBorderSuppression;
    int  _gradientStyle;
    int  _highlightSides;
    NSShadow * _imageShadow;
    BOOL  _showsState;
    BOOL  _suppressLeftBorderForTabStyles;
    BOOL  _useButtonImageCenteringHack;
    BOOL  _usedAsRadioButton;
}

@property (atomic, readwrite) int borderSides;
@property (atomic, readwrite) BOOL drawBackground;
@property (atomic, readwrite) BOOL enableGradientStylBorderSuppression;
@property (nonatomic, readwrite) int gradientStyle;
@property (atomic, readwrite) int highlightSides;
@property (atomic, readwrite, copy) NSShadow *imageShadow;
@property (nonatomic, readwrite) BOOL showsState;
@property (atomic, readwrite) BOOL suppressLeftBorderForTabStyles;
@property (atomic, readwrite) BOOL useButtonImageCenteringHack;
@property (atomic, readwrite) BOOL usedAsRadioButton;

- (void)IK_commonInitWithGradientStyle:(int)arg1 borderSides:(int)arg2;
- (void)_setGradientStyle:(int)arg1;
- (int)borderSides;
- (BOOL)drawBackground;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)enableGradientStylBorderSuppression;
- (int)gradientStyle;
- (int)highlightSides;
- (id)imageShadow;
- (id)init;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGradientStyle:(int)arg1 borderSides:(int)arg2;
- (void)setBorderSides:(int)arg1;
- (void)setDrawBackground:(BOOL)arg1;
- (void)setEnableGradientStylBorderSuppression:(BOOL)arg1;
- (void)setGradientStyle:(int)arg1;
- (void)setHighlightSides:(int)arg1;
- (void)setImageShadow:(id)arg1;
- (void)setShowsState:(BOOL)arg1;
- (void)setSuppressLeftBorderForTabStyles:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseButtonImageCenteringHack:(BOOL)arg1;
- (void)setUsedAsRadioButton:(BOOL)arg1;
- (BOOL)showsState;
- (BOOL)suppressLeftBorderForTabStyles;
- (BOOL)useButtonImageCenteringHack;
- (BOOL)usedAsRadioButton;

@end
