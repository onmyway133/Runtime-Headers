/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTableHeaderCell : NSTextFieldCell

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)_adjustFontSize;
- (BOOL)_alignFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 withWithDataCellForView:(id)arg2;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (BOOL)_canSupportTallerHeight;
- (void)_convertToText:(id)arg1;
- (struct __CFDictionary { }*)_coreUIBezelDrawOptionsWithView:(id)arg1 highlighted:(BOOL)arg2 nextColumnAfterOneBeingDrawnIsSelected:(BOOL)arg3;
- (struct __CFDictionary { }*)_coreUISortIndicatorDrawOptionsWithView:(id)arg1 ascending:(BOOL)arg2;
- (struct __CFString { }*)_coreUIState;
- (id)_currentFont;
- (id)_currentSortIndicatorImage;
- (void)_drawBezelWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlighted:(BOOL)arg2 inView:(id)arg3;
- (void)_drawGroupViewBackgroundWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlighted:(BOOL)arg2 inView:(id)arg3;
- (void)_drawSortIndicatorIfNecessaryWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_drawThemeContents:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlighted:(BOOL)arg2 inView:(id)arg3;
- (id)_indicatorImage;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)_setIndicatorImage:(id)arg1;
- (void)_setSortable:(BOOL)arg1;
- (void)_setSortable:(BOOL)arg1 showSortIndicator:(BOOL)arg2 ascending:(BOOL)arg3 priority:(long long)arg4 highlightForSort:(BOOL)arg5;
- (BOOL)_shouldDrawRightSeparatorInView:(id)arg1;
- (BOOL)_shouldLeaveSpaceForSortIndicator;
- (BOOL)_shouldShowHighlightForSort;
- (BOOL)_textDimsWhenDisabled;
- (void)_updateFont;
- (BOOL)_useRTL;
- (id)_vibrancyFilterForControlView:(id)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityElementWithParent:(id)arg1;
- (BOOL)accessibilityIsSortButton;
- (BOOL)accessibilityIsSortDirectionAttributeSettable;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySortDirectionAttribute;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityTitleAttribute;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawSortIndicatorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 ascending:(BOOL)arg3 priority:(long long)arg4;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (id)init;
- (BOOL)isOpaque;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sortIndicatorRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
