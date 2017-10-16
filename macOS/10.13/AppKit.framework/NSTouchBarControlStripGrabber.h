/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarControlStripGrabber : NSView <NSCollectionViewElement, NSGestureRecognizerDelegate> {
    SEL  _action;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    CALayer * _backgroundLayer;
    BOOL  _enabled;
    BOOL  _expanded;
    BOOL  _highlighted;
    CALayer * _lowerChevronLayer;
    id  _target;
    CALayer * _upperChevronLayer;
}

@property (atomic, readwrite) SEL action;
@property (atomic, readwrite) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (getter=isExpanded, atomic, readwrite) BOOL expanded;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isHighlighted, atomic, readwrite) BOOL highlighted;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) id target;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)keyPathsForValuesAffectingAlignmentRectInsets;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;
+ (id)keyPathsForValuesInvalidatingLayout;

- (void).cxx_destruct;
- (void)_commonInit;
- (BOOL)_shouldDoLayerPerformanceUpdates;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityIdentifierAttribute;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityRoleAttribute;
- (SEL)action;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)applyLayoutAttributes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isEnabled;
- (BOOL)isExpanded;
- (BOOL)isFlipped;
- (BOOL)isHighlighted;
- (void)layout;
- (void)layoutLayers;
- (void)prepareForReuse;
- (void)setAction:(SEL)arg1;
- (void)setAlignmentRectInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
