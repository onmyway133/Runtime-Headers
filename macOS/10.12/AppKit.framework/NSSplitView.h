/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSplitView : NSView <_NSTransientUIElement> {
    id  _variables;
}

@property (setter=_setAnimatesAutocollapses:, atomic, readwrite) BOOL _animatesAutocollapses;
@property (atomic, readonly) BOOL _canOverlayArrangedViews;
@property (setter=_setRegisteredTransientBehavior:, atomic, readwrite) long long _registeredTransientBehavior;
@property (setter=_setShowsOverlayMetrics:, atomic, readwrite) BOOL _showsOverlayMetrics;
@property (atomic, readonly) long long _transientBehavior;
@property (atomic, readonly, copy) NSArray *arrangedSubviews;
@property (atomic, readwrite) BOOL arrangesAllSubviews;
@property (atomic, readwrite, copy) NSString *autosaveName;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSSplitViewDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isDetached, atomic, readonly) BOOL detached;
@property (atomic, readonly, copy) NSColor *dividerColor;
@property (atomic, readwrite) long long dividerStyle;
@property (atomic, readonly) double dividerThickness;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isSpringLoaded, atomic, readwrite) BOOL springLoaded;
@property (atomic, readonly) Class superclass;
@property (getter=isVertical, atomic, readwrite) BOOL vertical;

+ (id)defaultAnimationForKey:(id)arg1;
+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;

- (void)_addSubview:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_additionalEffectiveFrameOfDividerAtIndex:(long long)arg1;
- (void)_adjustArrangedViewsIfNecessary;
- (BOOL)_allSubviewsAreOpaque;
- (BOOL)_arrangedViewsOrDividersHaveChangedSinceAdjustment;
- (double)_automaticMaximumSizeForArrangedView:(id)arg1;
- (BOOL)_canAutocollapseArrangedView:(id)arg1;
- (BOOL)_canCollapseArrangedView:(id)arg1;
- (BOOL)_canLiveCollapseArrangedView:(id)arg1;
- (BOOL)_canLiveCollapseArrangedViews;
- (BOOL)_canMakePropertyChange;
- (void)_cancelResetUserPreferredThicknessAfterUserResizeWithDelay;
- (BOOL)_checkForAutoUncollapsedViews;
- (BOOL)_checkForEarlyCollapseArrangedViews;
- (void)_collapseArrangedView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_compatibility_seemsToBeVertical;
- (double)_constantFromDividerPosition:(double)arg1 toAnchorView:(id)arg2;
- (id)_constraintsForLeadingView:(id)arg1 identifierIndex:(long long)arg2 spacing:(double)arg3 canLiveCollapse:(BOOL)arg4 forOverlay:(BOOL)arg5;
- (id)_constraintsForPerpendicularAxisForView:(id)arg1 identifierIndex:(long long)arg2 divider:(BOOL)arg3;
- (id)_constraintsForStacking:(id)arg1 toView:(id)arg2 previousIndex:(long long)arg3 identifierIndex:(long long)arg4 spacing:(double)arg5 canLiveCollapse:(BOOL)arg6 forDivider:(BOOL)arg7;
- (id)_constraintsForTrailingView:(id)arg1 identifierIndex:(long long)arg2 spacing:(double)arg3 canLiveCollapse:(BOOL)arg4 forOverlay:(BOOL)arg5;
- (id)_constraintsFreezingFrameForView:(id)arg1 identifierIndex:(long long)arg2;
- (struct __CFString { }*)_currentDividerDimpleVariant;
- (struct __CFString { }*)_currentStateKey;
- (struct __CFString { }*)_currentVerticalKey;
- (id)_cursorOfDividerAtIndex:(unsigned long long)arg1 position:(double)arg2 dragLimits:(struct { double x1; double x2; double x3; double x4; BOOL x5; BOOL x6; })arg3;
- (BOOL)_delegateImplementsAutolayoutIncompatibleMethods;
- (void)_didMeasureMinSizeForFullscreen;
- (double)_distanceFromTrailingEdgeOfView:(id)arg1 toAnchor:(id)arg2;
- (id)_dividerDraggingAnchor;
- (id)_dividerFrames;
- (BOOL)_dividerIsHiddenAtLogicalIndex:(long long)arg1;
- (id)_dividerLayers;
- (double)_doConstraintBasedPresentDividerDragResult:(struct { BOOL x1; BOOL x2; double x3; })arg1 withParams:(id)arg2;
- (void)_doLayerBackedLayout;
- (struct { double x1; double x2; double x3; double x4; BOOL x5; BOOL x6; })_dragLimitsOfDividerAtLogicalIndex:(unsigned long long)arg1;
- (id)_dragParamsOfDividerAtVisualIndex:(unsigned long long)arg1;
- (void)_drawDividerDimpleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 indicatorOnly:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveFrameForDrawnFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofDividerAtIndex:(long long)arg2;
- (long long)_effectiveUserInterfaceLayoutDirection;
- (BOOL)_explicitAutocollapseThicknessDisabled;
- (void)_finishedMakingConnections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOrAlignmentRectOfArrangedView:(id)arg1;
- (BOOL)_hasBehaviorForLinkedOnOrAfter:(long long)arg1;
- (BOOL)_hasHidableDividerAtLogicalIndex:(long long)arg1;
- (id)_hitTestToBlockWindowResizing:(struct CGPoint { double x1; double x2; })arg1 forResizeDirection:(long long)arg2;
- (BOOL)_inDividerLiveResize;
- (BOOL)_inWindowLiveResize;
- (long long)_indexOfDividerForLocation:(struct CGPoint { double x1; double x2; })arg1 andReturnFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)_initVariables;
- (void)_invalidateCursorRectsAndDragRegion;
- (void)_invalidateSizeConstraints;
- (void)_invalidateStackAndSizeConstraints;
- (void)_invalidateStackConstraints;
- (BOOL)_isArrangedViewAnimating:(id)arg1;
- (BOOL)_isInTexturedWindow;
- (BOOL)_isSubclassThatOverridesDrawingMethods;
- (double)_leadingDistanceFromSelf:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_leadingViewForLogicalSeparatorIndex:(long long)arg1;
- (BOOL)_liveCollapseIsCanned;
- (long long)_logicalDividerIndexForVisualIndex:(long long)arg1;
- (id)_makeDividerLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_makeShadowView;
- (double)_minimumSizeForInlineSidebars;
- (BOOL)_needsLayoutEngine;
- (BOOL)_needsUpdateConstraintsForProportionalResizing;
- (void)_nsib_setSplitViewAlwaysLaysOutAccordingToAlignmentRects:(BOOL)arg1;
- (void)_nsib_setSplitViewIntegralizesInUserSpace:(BOOL)arg1;
- (BOOL)_nsib_splitViewAlwaysLaysOutAccordingToAlignmentRects;
- (BOOL)_nsib_splitViewIntegralizesInUserSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_opaqueRectForWindowMoveWhenInTitlebar;
- (double)_presentDividerDragResult:(struct { BOOL x1; BOOL x2; double x3; })arg1 withParams:(id)arg2;
- (id)_priorityGroups;
- (struct CGSRegionObject { }*)_regionForOpaqueDescendants:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forMove:(BOOL)arg2;
- (void)_removeDividerLayers;
- (void)_removeStackConstraints;
- (void)_removeSubview:(id)arg1;
- (void)_resetUserPreferredThicknessAfterUserResizeWithDelay;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_resizeViewsForOffset:(long long)arg1 coordinate:(double)arg2;
- (struct { BOOL x1; BOOL x2; double x3; })_resultOfDividerDragToLeadingPosition:(double)arg1 withParams:(id)arg2;
- (double)_scaledDividerThickness;
- (void)_setArrangedView:(id)arg1 isCollapsed:(BOOL)arg2;
- (void)_setArrangedViewsAreAdjusted:(BOOL)arg1;
- (void)_setDividerLayers:(id)arg1;
- (void)_setExplicitAutocollapseThicknessDisabled:(BOOL)arg1;
- (void)_setFrameOrAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofArrangedView:(id)arg2;
- (void)_setLayoutEngine:(id)arg1;
- (void)_setMinimumSizeForInlineSidebars:(double)arg1;
- (void)_setSplitViewControllerAllowsPropertyChange:(BOOL)arg1;
- (BOOL)_shouldAdjustSizeOfArrangedView:(id)arg1;
- (BOOL)_shouldDrawDivider;
- (BOOL)_shouldMirrorForRTL;
- (void)_sortSubviews;
- (BOOL)_splitViewControllerAllowsPropertyChange;
- (BOOL)_splitViewOwnedBySplitViewController;
- (BOOL)_splitViewUseConstraintBasedLayout;
- (void)_startObservingView:(id)arg1;
- (void)_startObservingViews:(id)arg1;
- (void)_stopObservingView:(id)arg1;
- (void)_stopObservingViews:(id)arg1;
- (double)_trailingDistanceFromSelf:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_trailingViewForLogicalSeparatorIndex:(long long)arg1;
- (void)_uncollapseArrangedView:(id)arg1;
- (void)_uncollapseArrangedView:(id)arg1 animated:(BOOL)arg2;
- (void)_uncollapseWithOverlayArrangedView:(id)arg1 animated:(BOOL)arg2;
- (double)_unscaledDividerThickness;
- (void)_updateConstraintsForMinMaxMeasure;
- (void)_updateConstraintsForProportionalResizing;
- (void)_updateDividerLayer:(id)arg1;
- (void)_updateLayerDividersIfNeeded;
- (void)_updateSizeConstraints;
- (void)_updateStackConstraints;
- (BOOL)_usesAlternateDrag;
- (BOOL)_usesExplicitSizeForAutoCollapse;
- (BOOL)_validateArrangedViewFrames;
- (long long)_visualDividerIndexForLogicalIndex:(long long)arg1;
- (long long)_visualIndexOfDividerForLocation:(struct CGPoint { double x1; double x2; })arg1 andReturnFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)_willMeasureMinSizeForFullscreen;
- (void)_windowChangedKeyState;
- (void)_windowDidEndLiveResize:(id)arg1;
- (void)_windowWillExitFullScreen:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)adjustSubviews;
- (id)autosaveName;
- (void)dealloc;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (id)dividerColor;
- (long long)dividerStyle;
- (double)dividerThickness;
- (void)drawDividerInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (float)holdingPriorityForSubviewAtIndex:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (BOOL)isPaneSplitter;
- (BOOL)isSubviewCollapsed:(id)arg1;
- (BOOL)isVertical;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)layout;
- (double)maxPossiblePositionOfDividerAtIndex:(long long)arg1;
- (double)minPossiblePositionOfDividerAtIndex:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)orientation;
- (BOOL)preservesContentDuringLiveResize;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)resetCursorRects;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (void)setAutosaveName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDividerColor:(id)arg1;
- (void)setDividerStyle:(long long)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHoldingPriority:(float)arg1 forSubviewAtIndex:(long long)arg2;
- (void)setIsPaneSplitter:(BOOL)arg1;
- (void)setLayer:(id)arg1;
- (void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2;
- (void)setStayPutPriority:(float)arg1 forSubviewAtIndex:(long long)arg2;
- (void)setSubviews:(id)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)setVertical:(BOOL)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)sortSubviewsUsingFunction:(int (*)arg1 context:(void*)arg2;
- (float)stayPutPriorityForSubviewAtIndex:(long long)arg1;
- (void)updateConstraints;
- (void)updateLayer;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillStartLiveResize;
- (BOOL)wantsUpdateLayer;
- (void)willRemoveSubview:(id)arg1;

// NSSplitView (NSSplitViewAccessibility)

- (id)_accessibilitySplitterAtIndex:(unsigned long long)arg1;
- (id)_accessibilitySplitterRects;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsSplittersAttributeSettable;
- (id)accessibilityPositionOfChild:(id)arg1;
- (void)accessibilityResetChildrenAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilitySplittersAttribute;

// NSSplitView (NSSplitViewArrangedSubviews)

- (void)_didAddArrangedSubview:(id)arg1;
- (void)_didRemoveArrangedSubview:(id)arg1;
- (void)_willAddArrangedSubview:(id)arg1;
- (void)_willRemoveArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (id)arrangedSubviews;
- (BOOL)arrangesAllSubviews;
- (void)insertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)removeArrangedSubview:(id)arg1;
- (void)setArrangesAllSubviews:(BOOL)arg1;

// NSSplitView (NSSplitViewArrangedSubviews_Private)

- (BOOL)isArrangedViewCollapsed:(id)arg1;

// NSSplitView (NSSplitViewAutocollapses)

- (void)_animatedAutoCollapseArrangedView:(id)arg1;
- (BOOL)_animatesAutocollapses;
- (void)_autoCollapseArrangedView:(id)arg1;
- (void)_autoCollapseArrangedView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_isArrangedViewAutoCollapsed:(id)arg1;
- (void)_setAnimatesAutocollapses:(BOOL)arg1;
- (void)_setArrangedView:(id)arg1 isAutocollapsed:(BOOL)arg2;

// NSSplitView (NSSplitViewAutosaving)

+ (id)_autosaveDefaultsKeyForName:(id)arg1;

- (id)_arrangedViewLayoutDescriptions;
- (void)_autosaveArrangedViewLayoutIfNecessary;
- (void)_autosaveSubviewLayoutIfNecessary;
- (void)_scheduleAutosaveArrangedViewLayoutIfNecessary;
- (BOOL)_walkLayoutDescriptionArray:(id)arg1 withFrameHandler:(id)arg2;

// NSSplitView (NSSplitViewDebugDescription)

- (id)_debugDividerType;
- (id)_debugLayoutType;
- (id)debugDescription;
- (id)debugReasonForLayoutMode;

// NSSplitView (NSSplitViewDividerViews)

- (id)_appearanceForDividerAtIndex:(unsigned long long)arg1;
- (long long)_blendingModeForDividerAtIndex:(unsigned long long)arg1;
- (BOOL)_canUseDividerViewsAsSubviews;
- (id)_customDividerColor;
- (id)_customThickness;
- (BOOL)_dividerShouldBeVibrantAtIndex:(unsigned long long)arg1;
- (void)_updateDividerViews;

// NSSplitView (NSSplitViewOverlayMetrics)

- (void)_setShowsOverlayMetrics:(BOOL)arg1;
- (BOOL)_showsOverlayMetrics;

// NSSplitView (NSSplitViewOverlays)

- (BOOL)_canOverlayArrangedViews;
- (void)_didRemoveOverlay:(id)arg1;
- (void)_fakeCollapse:(BOOL)arg1 arrangedView:(id)arg2 canOverlay:(BOOL)arg3 withHandler:(id)arg4;
- (BOOL)_isArrangedViewOverlaid:(id)arg1;
- (void)_overlayArrangedView:(id)arg1;
- (BOOL)_testingForOverlays;
- (void)_uncollapseAndOverlayArrangedView:(id)arg1;
- (BOOL)_uncollapseArrangedView:(id)arg1 overlayIfNecessary:(BOOL)arg2;
- (void)_willAddOverlayView:(id)arg1;

// NSSplitView (NSSplitViewSizeTrackingOverlayView)

- (void)_addTrackingOverlayView:(id)arg1;
- (void)_removeTrackingOverlayView:(id)arg1;

// NSSplitView (NSSplitViewSpringLoading)

- (BOOL)_inTransientSpringLoad;
- (void)_setInTransientSpringLoad:(BOOL)arg1;
- (BOOL)isSpringLoaded;
- (void)setSpringLoaded:(BOOL)arg1;

// NSSplitView (NSSplitViewUserPreferredSizes)

- (void)_removeUserPreferredThicknessForArrangedSubview:(id)arg1;
- (void)_resetUserPreferredThicknessFromLayoutAlignmentFrameForArrangedSubview:(id)arg1;
- (void)_resetUserPreferredThicknessFromSetAlignmentFrameForAllArrangedSubviews;
- (void)_resetUserPreferredThicknessFromSetAlignmentFrameForArrangedSubview:(id)arg1;
- (void)_setUserPreferredThickness:(double)arg1 forArrangedSubview:(id)arg2;
- (double)_userPreferredThicknessForArrangedSubview:(id)arg1;

// NSSplitView (NSTransientUIElement)

- (void)_closeForKeyDownEvent:(id)arg1;
- (void)_closeForNonDragOrResizeClickWithEvent:(id)arg1;
- (void)_closeForSheetPresentingOnWindow:(id)arg1;
- (void)_closeForToolbarPresentingOnWindow:(id)arg1;
- (BOOL)_isAffectedByEventsInWindow:(id)arg1;
- (long long)_registeredTransientBehavior;
- (void)_setRegisteredTransientBehavior:(long long)arg1;
- (long long)_transientBehavior;

@end
