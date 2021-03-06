/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSToolbarFullScreenWindow : NSWindow {
    long long  _childWindowOrderingPriority;
    BOOL  _forcingToolbarVisible;
    BOOL  _hotKeyNavigationForcingToolbarAndAuxViewVisible;
    long long  _menubarAutohidingCount;
}

- (BOOL)_allowsExteriorResizing;
- (BOOL)_allowsSnapping;
- (BOOL)_attachToParentBeforeOrderingWindow;
- (float)_backdropBleedAmount;
- (BOOL)_canBeSnappingTarget;
- (BOOL)_canMiniaturize;
- (long long)_childWindowOrderingPriority;
- (id)_currentDividerResizeDirections;
- (id)_cursorForResizeDirection:(long long)arg1;
- (void)_disableFullScreenMenubarAutohiding;
- (void)_enableFullScreenMenubarAutohiding;
- (id)_findKeyLoopGroupingViewFollowingKeyLoopGroupingView:(id)arg1 direction:(unsigned long long)arg2;
- (void)_getResizeEdgeAndCornerThicknesses:(double)arg1;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)_hostsLayersInWindowServer;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_isRunningADocModalAttachedSheet;
- (BOOL)_keyViewLoopsMayCrossWindows;
- (BOOL)_newFirstResponderIsInToolbar:(id)arg1;
- (id)_orderedDrawerAndWindowKeyLoopGroupingViews;
- (id)_originalWindow;
- (id)_parentWindowForAddingToMovementGroupWithProposedParent:(id)arg1;
- (BOOL)_performDividerDragWithEvent:(id)arg1 forResizeDirection:(long long)arg2;
- (BOOL)_resetSublevelOnChildWindowAddition;
- (void)_setChildWindowOrderingPriority:(long long)arg1;
- (void)_setCursorForMouseLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setWindowTag;
- (BOOL)_shouldAutoDecSubLevel;
- (BOOL)_shouldAutoIncSubLevel;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (BOOL)_shouldSnapWindowsClientSide;
- (BOOL)_shouldStartWindowDragForEvent:(id)arg1;
- (BOOL)_shouldUseTexturedAppearanceForSegmentedCellInView:(id)arg1;
- (void)_startClientSideMove;
- (void)_stopClientSideMove;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tileFrameForFullScreen;
- (void)_updateManagedDisplay;
- (BOOL)_wantsFullScreenTileDropTargets;
- (id)_windowForToolbar;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityParameterizedAttributeNames;
- (void)becomeKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)canHide;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toScreen:(id)arg2;
- (id)description;
- (BOOL)hasKeyAppearanceIncludingSheets:(BOOL)arg1;
- (BOOL)isMainWindow;
- (BOOL)isMovable;
- (void)performWindowDragWithEvent:(id)arg1;
- (void)resignKeyWindow;
- (void)setAppearance:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startRectForSheet:(id)arg1;
- (void)updateForceToolbarVisible;

@end
