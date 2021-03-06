/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSForm : NSMatrix

+ (void)initialize;

- (double)_maxWidth;
- (void)_resetTitleWidths;
- (id)addEntry:(id)arg1;
- (void)calcSize;
- (id)cellAtIndex:(long long)arg1;
- (void)drawCellAtIndex:(long long)arg1;
- (id)font;
- (long long)indexOfCellWithTag:(long long)arg1;
- (long long)indexOfSelectedItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)insertEntry:(id)arg1 atIndex:(long long)arg2;
- (double)preferredTextFieldWidth;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)selectTextAtIndex:(long long)arg1;
- (void)setBezeled:(BOOL)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)setEntryWidth:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInterlineSpacing:(double)arg1;
- (void)setPreferredTextFieldWidth:(double)arg1;
- (void)setTextAlignment:(unsigned long long)arg1;
- (void)setTextBaseWritingDirection:(long long)arg1;
- (void)setTextFont:(id)arg1;
- (void)setTitleAlignment:(unsigned long long)arg1;
- (void)setTitleBaseWritingDirection:(long long)arg1;
- (void)setTitleFont:(id)arg1;
- (void)sizeToFit;

// NSForm (NSFormAccessibility)

- (id)accessibilityAttributeNames;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityRoleAttribute;

@end
