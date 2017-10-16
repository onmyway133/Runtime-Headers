/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSLevelIndicatorCell : NSActionCell <CALayerDelegate> {
    id  _aux;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cellFrame;
    id  _core;
    double  _criticalValue;
    struct { 
        unsigned int indicatorStyle : 4; 
        unsigned int tickMarkPosition : 1; 
        unsigned int selectable : 1; 
        unsigned int placeholderVisibility : 2; 
        unsigned int tieredCapacity : 1; 
        unsigned int inTableView : 1; 
        unsigned int reserved : 22; 
    }  _liFlags;
    double  _maxValue;
    double  _minValue;
    int  _numberOfMajorTickMarks;
    int  _numberOfTickMarks;
    int  _reserved1;
    int  _reserved2;
    double  _value;
    double  _warningValue;
}

@property (atomic, readwrite, retain) <_NSLevelIndicatorCore> *core;
@property (atomic, readwrite) double criticalValue;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) unsigned long long levelIndicatorStyle;
@property (atomic, readwrite) double maxValue;
@property (atomic, readwrite) double minValue;
@property (atomic, readwrite) long long numberOfMajorTickMarks;
@property (atomic, readwrite) long long numberOfTickMarks;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) unsigned long long tickMarkPosition;
@property (atomic, readwrite) double warningValue;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)coreForLevelIndicatorStyle:(unsigned long long)arg1;
+ (void)initialize;
+ (BOOL)prefersTrackingUntilMouseUp;

- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_alignmentRectInsetsInView:(id)arg1;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (void)_clearLevelIndicatorAux;
- (id)_coreUIDrawOptionsForMajorTickMark;
- (id)_coreUIDrawOptionsForMinorTickMark;
- (id)_defaultCriticalFillColor;
- (id)_defaultFillColor;
- (id)_defaultWarningFillColor;
- (void)_drawTickMarksWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)_effectiveDrawRatingPlaceholder;
- (BOOL)_hasDarkBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorAlignmentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_indicatorAlignmentRectInsetsInView:(id)arg1;
- (id)_indicatorLayerInView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })_indicatorStateInView:(id)arg1;
- (BOOL)_isMajorTickMarkAtIndex:(long long)arg1;
- (id)_levelIndicatorAuxCreatingIfNeeded:(BOOL)arg1;
- (void)_majorTickMarkMetricsInAppearance:(id)arg1 outSize:(struct CGSize { double x1; double x2; }*)arg2 outAlignmentInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3;
- (void)_metricsForDrawOptions:(id)arg1 inAppearance:(id)arg2 outSize:(struct CGSize { double x1; double x2; }*)arg3 outAlignmentInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; }*)arg4;
- (void)_minorTickMarkMetricsInAppearance:(id)arg1 outSize:(struct CGSize { double x1; double x2; }*)arg2 outAlignmentInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3;
- (struct CGSize { double x1; double x2; })_rankIndicatorSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectOfTickMarkAtIndex:(long long)arg1 minorTickSize:(struct CGSize { double x1; double x2; })arg2 minorTickAlignmentInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg3 majorTickSize:(struct CGSize { double x1; double x2; })arg4 majorTickAlignmentInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
- (BOOL)_shouldDrawFocus;
- (BOOL)_shouldDrawRTL;
- (BOOL)_subclassOverridesDrawingMethods;
- (double)_tickMarksHeight;
- (id)_tickMarksLayerInView:(id)arg1;
- (void)_updateInTableViewForControlView:(id)arg1;
- (void)_updateTrackingValueForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;

// NSLevelIndicatorCell (NSProKitOverrides)

- (double)_dotFadeAlpha;
- (id)_starColorOnDark:(BOOL)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)acceptsFirstResponder;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAllowedValuesAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityCriticalValueAttribute;
- (BOOL)accessibilityIsAllowedValuesAttributeSettable;
- (BOOL)accessibilityIsChildrenValueAttributeSettable;
- (BOOL)accessibilityIsCriticalValueAttributeSettable;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (BOOL)accessibilityIsWarningValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (id)accessibilityMinValueAttribute;
- (id)accessibilityOrientationAttribute;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityValueAttribute;
- (id)accessibilityWarningValueAttribute;
- (BOOL)alwaysDrawRatingPlaceholder;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)continueTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)core;
- (id)criticalFillColor;
- (double)criticalValue;
- (id)customCriticalFillColor;
- (id)customFillColor;
- (id)customWarningFillColor;
- (double)doubleValue;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)drawsTieredCapacityLevels;
- (void)encodeWithCoder:(id)arg1;
- (id)fillColor;
- (float)floatValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusRingMaskBoundsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (id)init;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLevelIndicatorStyle:(unsigned long long)arg1;
- (int)intValue;
- (long long)integerValue;
- (BOOL)isOpaque;
- (BOOL)isSelectable;
- (BOOL)keyDown:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (void)layoutLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (unsigned long long)levelIndicatorStyle;
- (double)maxValue;
- (double)minValue;
- (long long)numberOfMajorTickMarks;
- (long long)numberOfTickMarks;
- (id)objectValue;
- (long long)placeholderVisibility;
- (id)ratingImage;
- (id)ratingPlaceholderImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfTickMarkAtIndex:(long long)arg1;
- (void)setAlwaysDrawRatingPlaceholder:(BOOL)arg1;
- (void)setControlView:(id)arg1;
- (void)setCore:(id)arg1;
- (void)setCriticalFillColor:(id)arg1;
- (void)setCriticalValue:(double)arg1;
- (void)setCustomCriticalFillColor:(id)arg1;
- (void)setCustomFillColor:(id)arg1;
- (void)setCustomWarningFillColor:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setDrawsTieredCapacityLevels:(BOOL)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setImage:(id)arg1;
- (void)setIntValue:(int)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setLevelIndicatorStyle:(unsigned long long)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setNumberOfMajorTickMarks:(long long)arg1;
- (void)setNumberOfTickMarks:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setPlaceholderVisibility:(long long)arg1;
- (void)setRatingImage:(id)arg1;
- (void)setRatingPlaceholderImage:(id)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTickMarkPosition:(unsigned long long)arg1;
- (void)setWarningFillColor:(id)arg1;
- (void)setWarningValue:(double)arg1;
- (BOOL)startTrackingAt:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)stopTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (id)stringValue;
- (unsigned long long)tickMarkPosition;
- (double)tickMarkValueAtIndex:(long long)arg1;
- (void)touchBeganAt:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)updateLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)wantsUpdateLayerInView:(id)arg1;
- (id)warningFillColor;
- (double)warningValue;

@end
