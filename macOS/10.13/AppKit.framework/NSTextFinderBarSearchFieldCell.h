/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextFinderBarSearchFieldCell : NSSearchFieldCell {
    NSArray * recentAttributedSearchStrings;
    NSTextFieldCell * statusCell;
}

@property (atomic, readwrite, copy) NSArray *recentAttributedSearchStrings;
@property (atomic, readwrite, copy) NSString *statusString;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)_commonTextFinderInit;
- (void)_searchFieldClearRecents:(id)arg1;
- (void)_searchFieldDoRecentPattern:(id)arg1;
- (void)_updateSearchMenu;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityChildrenAttribute;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recentAttributedSearchStrings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRecentAttributedSearchStrings:(id)arg1;
- (void)setStatusString:(id)arg1;
- (id)statusString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusStringFieldRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
