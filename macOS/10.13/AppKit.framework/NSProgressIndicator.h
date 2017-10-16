/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSProgressIndicator : NSView <DebugHierarchyObject, NSAccessibilityProgressIndicator> {
    id  _NSProgressIndicatorReserved1;
    double  _animationDelay;
    unsigned int  _animationIndex;
    double  _drawingWidth;
    BOOL  _isBezeled;
    BOOL  _isIndeterminate;
    double  _maximum;
    double  _minimum;
    struct __progressIndicatorFlags { 
        unsigned int isSpinning : 1; 
        unsigned int isVector : 1; 
        unsigned int isLocked : 1; 
        unsigned int controlTint : 3; 
        unsigned int controlSize : 2; 
        unsigned int style : 1; 
        unsigned int _delayedStartup : 1; 
        unsigned int hideWhenStopped : 1; 
        unsigned int revive : 1; 
        unsigned int _temporarilyBlockHeartBeating : 1; 
        unsigned int _isHidden : 1; 
        unsigned int _isHeartBeatInstalled : 1; 
        unsigned int _customRenderer : 1; 
        unsigned int _lastFrame : 8; 
        unsigned int _isDetaching : 1; 
        unsigned int RESERVED : 7; 
    }  _progressIndicatorFlags;
    id  _reserved;
    id  _roundColor;
    BOOL  _threadedAnimation;
    id  _timer;
    double  _value;
}

@property (getter=isBezeled, atomic, readwrite) BOOL bezeled;
@property (atomic, readwrite) unsigned long long controlSize;
@property (atomic, readwrite) unsigned long long controlTint;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isDisplayedWhenStopped, atomic, readwrite) BOOL displayedWhenStopped;
@property (atomic, readwrite) double doubleValue;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isIndeterminate, atomic, readwrite) BOOL indeterminate;
@property (atomic, readwrite) double maxValue;
@property (atomic, readwrite) double minValue;
@property (atomic, readwrite) unsigned long long style;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) BOOL usesThreadedAnimation;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)_barberImage:(double)arg1;
+ (void)_controlTintChanged:(id)arg1;
+ (id)_createImage:(id)arg1 :(id)arg2 :(double)arg3;
+ (id)_gaugeImage:(double)arg1;
+ (void)initialize;

- (BOOL)_allowsCoreUI;
- (void)_animationIdler:(id)arg1;
- (void)_captureCompositingImageForThreadedDrawingInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_clipViewAncestorDidScroll:(id)arg1;
- (void)_commonInit;
- (id)_compositingImage;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_drawAnimationStep;
- (void)_drawBar:(BOOL)arg1;
- (void)_drawDeterminateSpinningIndicator:(id)arg1;
- (void)_drawFrame;
- (void)_drawProgressArea;
- (void)_drawRemainderArea;
- (void)_drawThemeBackground;
- (void)_drawThemeProgressArea:(BOOL)arg1;
- (void)_drawWindowsGaugeRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_fillGrayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 with:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getGaugeFrame;
- (double)_getPosition:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getProgressFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getRemainderFrame;
- (void)_installHeartBeat:(BOOL)arg1;
- (BOOL)_isThreadedAnimationLooping;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (BOOL)_needsCompositingImageForThreadedDrawing;
- (void)_reconfigureAnimationState:(BOOL)arg1;
- (void)_setCompositingImage:(id)arg1;
- (void)_setCoreUIOptionsForBar:(struct __CFDictionary { }*)arg1 progressOnly:(BOOL)arg2;
- (void)_setCoreUIOptionsForSpinningIndicator:(struct __CFDictionary { }*)arg1 determinate:(BOOL)arg2 flipped:(BOOL)arg3;
- (void)_setWindow:(id)arg1;
- (void)_setupLayerAndStartSpinning:(BOOL)arg1;
- (BOOL)_shouldDirtyTheWindowOnLayerInvalidation;
- (void)_startAnimationWithThread:(BOOL)arg1;
- (void)_stopAnimationWithWait:(BOOL)arg1;
- (void)_stopAnimationWithWait:(BOOL)arg1 andRedisplay:(BOOL)arg2;
- (void)_systemColorChanged:(id)arg1;
- (id)_vibrancyFilter;
- (void)_windowChangedKeyState;
- (void)_windowExposed:(id)arg1;
- (void)_windowOcclusionChanged:(id)arg1;
- (void)dealloc;

// NSProgressIndicator (NSProgressIndicatorProKitExtra)

- (unsigned long long)_proAnimationIndex;
- (BOOL)_proDelayedStartup;
- (double)_proDrawingWidth;
- (BOOL)_proIsSpinning;
- (void)_setProAnimationIndex:(unsigned long long)arg1;
- (void)_setProDelayedStartup:(BOOL)arg1;
- (void)_setProDrawingWidth:(double)arg1;
- (void)_setProRevive:(BOOL)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSProgressIndicator (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (id)accessibilityMinValueAttribute;
- (id)accessibilityOrientationAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityValue;
- (id)accessibilityValueAttribute;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)allowsVibrancy;
- (void)animate:(id)arg1;
- (double)animationDelay;
- (unsigned long long)controlSize;
- (unsigned long long)controlTint;
- (double)doubleValue;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)heartBeat:(struct { double x1; double x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 31; } x4; }*)arg1;
- (void)incrementBy:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isBezeled;
- (BOOL)isDisplayedWhenStopped;
- (BOOL)isFlipped;
- (BOOL)isIndeterminate;
- (BOOL)isOpaque;
- (id)makeBackingLayer;
- (double)maxValue;
- (double)minValue;
- (id)ns_widgetType;
- (id)roundDeterminateColor;
- (void)setAnimationDelay:(double)arg1;
- (void)setBezeled:(BOOL)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setControlTint:(unsigned long long)arg1;
- (void)setDisplayedWhenStopped:(BOOL)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setRoundDeterminateColor:(id)arg1;
- (void)setSpinningTint:(long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setUsesThreadedAnimation:(BOOL)arg1;
- (void)setUsesVectorMovement:(BOOL)arg1;
- (void)sizeToFit;
- (long long)spinningTint;
- (void)startAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;
- (unsigned long long)style;
- (BOOL)usesThreadedAnimation;
- (BOOL)usesVectorMovement;
- (void)viewDidHide;
- (void)viewDidMoveToSuperview;
- (void)viewDidUnhide;
- (void)viewWillMoveToSuperview:(id)arg1;

@end
