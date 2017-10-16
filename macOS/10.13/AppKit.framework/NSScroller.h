/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScroller : NSControl <DebugHierarchyObject, NSScrollerImpDelegate> {
    double  _curValue;
    double  _knobSize;
    double  _percent;
    id  _reserved;
    SEL  _reserved2;
    struct __sFlags2 { 
        unsigned int hitPart : 4; 
        unsigned int controlSize : 2; 
        unsigned int inMaxEnd : 1; 
        unsigned int setFloatValueOverridden : 1; 
        unsigned int setFloatValueKnobProportionOverridden : 1; 
        unsigned int style : 1; 
        unsigned int styleCompatibility : 1; 
        unsigned int overlayScrollerState : 2; 
        unsigned int knobStyle : 2; 
        unsigned int sbPaused : 1; 
        unsigned int isAnimatingKnob : 1; 
        unsigned int isTrackingMouse : 1; 
        unsigned int reserved : 14; 
    }  _sFlags2;
    struct _sFlags { 
        unsigned int isHoriz : 1; 
        unsigned int arrowsLoc : 2; 
        unsigned int partsUsable : 2; 
        unsigned int fine : 1; 
        unsigned int needsEnableFlush : 1; 
        unsigned int thumbing : 1; 
        unsigned int slotDrawn : 1; 
        unsigned int knobDrawn : 1; 
        unsigned int lit : 1; 
        unsigned int knobLit : 1; 
        unsigned int reserved : 1; 
        unsigned int controlTint : 3; 
        unsigned int repeatCount : 16; 
    }  sFlags;
}

@property (atomic, readwrite) unsigned long long arrowsPosition;
@property (atomic, readwrite) unsigned long long controlSize;
@property (atomic, readwrite) unsigned long long controlTint;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) unsigned long long hitPart;
@property (atomic, readwrite) double knobProportion;
@property (atomic, readwrite) long long knobStyle;
@property (atomic, readwrite) long long scrollerStyle;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) unsigned long long usableParts;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)_aquaScrollerBehaviorChanged:(id)arg1;
+ (void)_aquaScrollerVariantChanged:(id)arg1;
+ (int)_arrowsConfig;
+ (void)_drawEndCapInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)_setArrowsConfig:(int)arg1;
+ (void)initialize;
+ (BOOL)isCompatibleWithOverlayScrollers;
+ (long long)preferredScrollerStyle;
+ (double)scrollerWidth;
+ (double)scrollerWidthForControlSize:(unsigned long long)arg1;
+ (double)scrollerWidthForControlSize:(unsigned long long)arg1 scrollerStyle:(long long)arg2;

- (unsigned int)_CAViewFlags;
- (void)_compositeScrollerPart:(unsigned long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withAlpha:(double)arg3 drawHandler:(id)arg4;
- (struct __CFDictionary { }*)_copyCompositeCoreUIDrawOptions;
- (BOOL)_desiredLayerSizeMeritsTiledBackingLayer:(struct CGSize { double x1; double x2; })arg1;
- (void)_old_drawArrow:(unsigned long long)arg1 highlightPart:(unsigned long long)arg2;
- (void)_old_drawKnob;
- (void)_old_drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlight:(BOOL)arg2;
- (void)_postScrollerDidBeginTrackingNotification;
- (void)_postScrollerDidEndTrackingNotification;
- (unsigned long long)_realControlTint;
- (void)_really_setLionScrollerStyle:(long long)arg1;
- (double)_repeatTime;
- (BOOL)_routeAroundScrollerStyleAccessors;
- (BOOL)_scrollerWantsLayer;
- (void)_setWindow:(id)arg1;
- (unsigned long long)_testPartUsingDestinationFloatValue:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateWantsLayer;
- (BOOL)_useTigerMetrics;
- (id)_vibrancyFilter;
- (void)_windowChangedKeyState;
- (BOOL)_windowResizeMouseLocationIsInVisibleScrollerThumb:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;

// NSScroller (NSInternal2)

+ (id)defaultAnimationForKey:(id)arg1;

- (BOOL)_avoidingOtherScrollerThumb;
- (double)_expansionTransitionProgress;
- (BOOL)_fixScrollerImpForSwizzlers;
- (BOOL)_isTrackingInKnob;
- (long long)_lionScrollerStyle;
- (BOOL)_needsMasksToBounds;
- (long long)_orientation;
- (void)_replaceScrollerImp;
- (void)_setAvoidingOtherScrollerThumb:(BOOL)arg1;
- (void)_setIsHorizontal:(BOOL)arg1;
- (void)_setLionScrollerStyle:(long long)arg1;
- (void)_setNeedsDisplayIfNotLayerBackedOverlayCompatible;
- (void)_setNeedsDisplayIfNotLayerBackedOverlayCompatibleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setOverlayScrollerState:(unsigned long long)arg1 forceImmediately:(BOOL)arg2;
- (void)_setTrackingInKnob:(BOOL)arg1;
- (double)_uiStateTransitionProgress;

// NSScroller (NSScrollerAccessibility)

+ (BOOL)accessibilityIsSingleCelled;

- (BOOL)_accessibilityIsSupportedPartCode:(unsigned long long)arg1;
- (id)_accessibilityScrollView;
- (const unsigned long long*)_accessibilitySupportedPartCodes;
- (id)_accessibilityUIElementForPartCode:(unsigned long long)arg1;

// NSScroller (NSScrollerPrivate)

+ (BOOL)scrollerSubclassIsCompatibleWithOverlayScrollers;

- (void)_decrementLine:(id)arg1;
- (void)_decrementPage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawingRectForPart:(unsigned long long)arg1;
- (void)_incrementLine:(id)arg1;
- (void)_incrementPage:(id)arg1;
- (unsigned long long)_overlayScrollerState;
- (void)_scrollByDelta:(double)arg1;
- (void)_setThumbingDoubleValue:(double)arg1;
- (void)_setThumbingKnobProportion:(double)arg1;
- (double)_thumbingDoubleValue;
- (double)_thumbingKnobProportion;

// NSScroller (NSScroller_Performance)

- (void)_automateLiveScroll;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSScroller (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHiddenAttribute;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsHiddenAttributeSettable;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetHiddenAttribute:(id)arg1;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityValueAttribute;
- (BOOL)allowsVibrancy;
- (unsigned long long)arrowsPosition;
- (void)checkSpaceForParts;
- (unsigned long long)controlSize;
- (unsigned long long)controlTint;
- (double)doubleValue;
- (void)drawArrow:(unsigned long long)arg1 highlight:(BOOL)arg2;
- (void)drawArrow:(unsigned long long)arg1 highlightPart:(unsigned long long)arg2;
- (void)drawKnob;
- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlight:(BOOL)arg2;
- (void)drawParts;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (void)highlight:(BOOL)arg1;
- (unsigned long long)hitPart;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (double)knobProportion;
- (long long)knobStyle;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)mouseDown:(id)arg1;
- (struct CGPoint { double x1; double x2; })mouseLocationInScrollerForScrollerImp:(id)arg1;
- (double)overlayScrollerKnobAlpha;
- (double)overlayScrollerTrackAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPart:(unsigned long long)arg1;
- (void)resetCursorRects;
- (id)scrollerImp;
- (void)scrollerImp:(id)arg1 animateExpansionTransitionWithDuration:(double)arg2;
- (void)scrollerImp:(id)arg1 animateKnobAlphaTo:(double)arg2 duration:(double)arg3;
- (void)scrollerImp:(id)arg1 animateTrackAlphaTo:(double)arg2 duration:(double)arg3;
- (void)scrollerImp:(id)arg1 animateUIStateTransitionWithDuration:(double)arg2;
- (void)scrollerImp:(id)arg1 overlayScrollerStateChangedTo:(unsigned long long)arg2;
- (long long)scrollerStyle;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)setAction:(SEL)arg1;
- (void)setArrowsPosition:(unsigned long long)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setControlTint:(unsigned long long)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setExpansionTransitionProgress:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setFloatValue:(float)arg1 knobProportion:(double)arg2;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setKnobProportion:(double)arg1;
- (void)setKnobStyle:(long long)arg1;
- (void)setLayer:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverlayScrollerKnobAlpha:(double)arg1;
- (void)setOverlayScrollerTrackAlpha:(double)arg1;
- (void)setPresentationValue:(double)arg1;
- (void)setScrollerStyle:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setUiStateTransitionProgress:(double)arg1;
- (void)setUsePresentationValue:(BOOL)arg1;
- (BOOL)shouldUseLayerPerPartForScrollerImp:(id)arg1;
- (unsigned long long)testPart:(struct CGPoint { double x1; double x2; })arg1;
- (void)trackKnob:(id)arg1;
- (void)trackPagingArea:(id)arg1;
- (void)trackScrollButtons:(id)arg1;
- (void)updateLayer;
- (void)updateTrackingAreas;
- (unsigned long long)usableParts;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit

// NSScroller (IKImageBrowserAdditions)

- (float)IKAccelerationCoefiscient;

@end
