/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSToolbarConfigPanel : NSPanel {
    NSTextField * _defaultItemsText;
    _NSToolbarImageRepView * _defaultToolbarImageRep;
    long long  _desiredSheetWidth;
    NSTextField * _displayModeLabel;
    NSPopUpButton * _displayModePopUp;
    NSSegmentedControl * _displayModeSegmentedControl;
    NSToolbar * _editedToolbar;
    NSScrollView * _individualItemsScrollView;
    NSTextField * _individualItemsText;
    NSToolbar * _individualItemsToolbar;
    NSToolbarView * _individualItemsToolbarView;
    double  _maxIndividualItemViewHeight;
    NSButton * _useSmallIconsCheckBox;
    double  _widthOfWidgets;
}

+ (id)_nibName;
+ (id)toolbarConfigPanelForToolbar:(id)arg1 withWidth:(long long)arg2;

- (BOOL)_addCursorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cursor:(id)arg2 forView:(id)arg3;
- (void)_computeMaxItemViewHeight;
- (id)_createOffscreenDefaultImageRepSetWindow;
- (double)_deltaForResizingImageRepView:(id)arg1;
- (double)_deltaForResizingTextField:(id)arg1;
- (void)_finishInitialization;
- (void)_layoutForData;
- (void)_loadData;
- (void)_loadDefaultSetImageRep;
- (void)_orderFrontRelativeToWindow:(id)arg1;
- (double)_resizeTextFieldToFit:(id)arg1;
- (double)_resizeToolbarImageRepViewToFit:(id)arg1;
- (double)_resizeToolbarViewToFit:(id)arg1;
- (double)_resizeViewToFit:(id)arg1;
- (int)_setBackingStoreResolution:(double)arg1;
- (void)_setDefaultToolbarItemSetFromMenuItem:(id)arg1;
- (void)_setUpTextField:(id)arg1;
- (BOOL)_shouldSuppressRolloversForSegmentedCellInView:(id)arg1;
- (BOOL)_shouldUseTexturedAppearanceForSegmentedCellInView:(id)arg1;
- (void)_touchBarDisplayModeChanged:(id)arg1;
- (void)_updateTouchBarWithToolbarDisplayMode:(unsigned long long)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)editedToolbar;
- (id)makeTouchBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)ok:(id)arg1;
- (BOOL)preventsApplicationTerminationWhenModal;

@end
