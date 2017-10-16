/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSplitViewSplitter : NSAccessibilityElement {
    long long  _index;
}

+ (id)splitterWithIndex:(long long)arg1 parent:(id)arg2;

- (unsigned long long)hash;
- (long long)index;
- (id)initWithIndex:(long long)arg1 parent:(id)arg2;
- (BOOL)isEqual:(id)arg1;

// NSSplitViewSplitter (NSSplitViewSplitterAccessibility)

- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (double)_accessibilityMinValueWithoutCollapsing;
- (id)_accessibilityNextContentView;
- (double)_accessibilityNextSplitterMinCoordinate;
- (id)_accessibilityPreviousContentView;
- (double)_accessibilityPreviousSplitterMaxCoordinate;
- (double)_accessibilitySplitterMinCoordinate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHelp;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (id)accessibilityNextContents;
- (long long)accessibilityOrientation;
- (id)accessibilityPreviousContents;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)arg1;

@end