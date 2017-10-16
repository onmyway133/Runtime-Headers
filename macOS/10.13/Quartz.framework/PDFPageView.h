/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFPageView : NSView <PDFPageLayerInterface> {
    PDFPageViewPrivate * _private;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPDFAnnotation:(id)arg1;
- (void)_addPDFAnnotationButtonWidget:(id)arg1;
- (void)_addPDFAnnotationChoiceWidget:(id)arg1;
- (void)_addPDFAnnotationMarkup:(id)arg1;
- (void)_addPDFAnnotationStampSignature:(id)arg1;
- (void)_addPDFAnnotationTextWidget:(id)arg1;
- (bool)_allowsFormFieldEntry;
- (void)_formChanged:(id)arg1;
- (void)_removeToolTip:(id)arg1;
- (void)_removeToolTipNow:(id)arg1;
- (void)_renderingPropertyUpdate:(id)arg1;
- (void)_resetWidgetsForFields:(id)arg1 fieldsIncludedAreCleared:(BOOL)arg2;
- (id)_scaleFont:(id)arg1 forString:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_setAttributedStringForAnnotation:(id)arg1 stringValue:(id)arg2 textField:(id)arg3;
- (void)_setupBookmarkLayer;
- (void)_setuppageAnnotationEffects;
- (BOOL)_shouldReplaceStringOnAnnotation:(id)arg1 withTextField:(id)arg2;
- (void)_updateToolTip:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (void)addAnnotation:(id)arg1;
- (void)addBookmark;
- (id)addPageLayerEffect:(id)arg1;
- (void)addSearchSelection:(id)arg1;
- (void)addWidgetAnnotation:(id)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (id)backgroundImage;
- (int)backgroundImageQuality;
- (void)buttonWidgetChanged:(id)arg1;
- (void)choiceWidgetChanged:(id)arg1;
- (void)clearTiles;
- (void)colorWidgetBackgrounds:(BOOL)arg1;
- (struct CGPoint { double x1; double x2; })convertPointToPageView:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToPageView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (long long)displayBox;
- (void)drawAccessibilityTags:(bool)arg1;
- (bool)enablesTileUpdates;
- (void)forceTileUpdate;
- (id)getPDFPageLayerEffectForAnnotation:(id)arg1;
- (id)getPageLayerEffectByUUID:(id)arg1;
- (bool)hasBackgroundImage;
- (void)hideTileLayer:(bool)arg1;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
- (bool)isDetachedView;
- (bool)isVisible;
- (id)menuForEvent:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)page;
- (id)pageLayer;
- (id)pageLayerEffects;
- (void)previewRotatePage:(double)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeBookmark;
- (void)removePageLayerEffect:(id)arg1;
- (void)removePageLayerEffectByUUID:(id)arg1;
- (void)removeWidgetAnnotation:(id)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (id)selection;
- (void)setAnnotation:(id)arg1 isSelected:(bool)arg2;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (void)setDetachedView:(bool)arg1;
- (void)setEnableSelectionDrawing:(bool)arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsTilesUpdate;
- (void)setSearchSelection:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2 withButton:(id)arg3;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withPopupButton:(id)arg3;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTableView:(id)arg3;
- (void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextField:(id)arg3;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)textWidgetChangedTextField:(id)arg1;
- (void)textWidgetChangedTextView:(id)arg1;
- (void)textWidgetDidBeginEditingTextField:(id)arg1;
- (void)textWidgetDidEndEditingTextField:(id)arg1;
- (void)updateAccessibility;
- (void)updateAnnotation:(id)arg1;
- (void)updateBookmark;
- (void)updatePageLayerEffect:(id)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint { double x1; double x2; })arg3 userData:(void*)arg4;
- (unsigned long long)visibilityDelegateIndex;

@end
