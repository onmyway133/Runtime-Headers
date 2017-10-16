/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFDocumentView : NSView <PDFAccessibilityNodeParent, PDFDocumentPageChangeDelegate, PDFPageBackgroundManagerDelegate> {
    PDFDocumentViewPrivate * _private;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createPageView:(id)arg1;
- (void)_reAddPageOverlaysStartingAtIndex:(unsigned long long)arg1;
- (void)_removePageOverlaysStartingAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_renderedContentRect;
- (void)_shiftPagesAtIndex:(unsigned long long)arg1 downwards:(bool)arg2;
- (void)_updateVisibilityDelegateForVisiblePageView:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)accessibilityChildren;
- (id)accessibilityCustomRotors;
- (id)accessibilityDocumentController;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilitySubrole;
- (id)backgroundImageForPage:(id)arg1 withQuality:(int*)arg2;
- (void)changedBoundsForBoxNotification:(id)arg1;
- (id)createPageViewForPageAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRotatePageNotification:(id)arg1;
- (void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)document;
- (struct CGSize { double x1; double x2; })documentViewSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (id)initWithPDFView:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutDocumentView;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)pageViews;
- (void)previewRotateShiftPages:(double)arg1;
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;
- (void)removePageViewForPageAtIndex:(unsigned long long)arg1;
- (void)resetAccessibilityTree;
- (void)setAccessibilityFocused:(BOOL)arg1;
- (void)setDocument:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)updateVisibility;
- (void)willForceUpdate;
- (void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;

@end
