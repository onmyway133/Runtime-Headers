/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABLabelPopUpButton : NSPopUpButton {
    NSMenuItem * mCustomItem;
    double  mFontBaselineOffset;
    double  mFontLineHeight;
    NSDictionary * mLabelAttributes;
    NSPopUpButtonCell * mPopupButtonImageFactoryCell;
    NSMenuItem * mSpacerItem;
    NSColor * mTextColor;
    NSTextFieldCell * mTextFieldCellForDrawing;
}

@property (nonatomic, readwrite, retain) NSMenuItem *customItem;
@property (nonatomic, readwrite, retain) NSMenuItem *spacerItem;
@property (nonatomic, readwrite, retain) NSColor *textColor;

+ (double)rightOutset;

- (void)ABLabelPopUpButton_commonInit;
- (void)awakeFromNib;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcTextRectAndDraw:(BOOL)arg1;
- (id)customItem;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)includeCustomLabelItem:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomItem:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setSpacerItem:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)sizeToFit;
- (id)spacerItem;
- (id)textColor;

@end