/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarColorPickerSliders : NSControl <NSTouchBarColorPickerSliderMinimizationDelegate, NSTouchBarColorPickerView> {
    NSArray * _allowedColorSpaces;
    unsigned int  _allowsAlpha;
    NSTouchBarColorPickerSlider * _alphaSlider;
    id  _autounbinder;
    NSArray * _componentSliders;
    NSColor * _currentColor;
    unsigned long long  _unminimizedComponents;
}

@property (atomic, readwrite) unsigned long long _unminimizedComponents;
@property (atomic, readwrite) SEL action;
@property (atomic, readwrite, copy) NSArray *allowedColorSpaces;
@property (atomic, readwrite) BOOL allowsAlpha;
@property (atomic, readonly, copy) NSColor *colorSpaceColor;
@property (atomic, readwrite, copy) NSColor *currentColor;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) id target;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)_fallbackColorSpaceWithAllowedColorSpaces:(id)arg1;
+ (id)accessibilityIdentifierForComponent:(long long)arg1;
+ (id)artworkProviderKeyForComponent:(long long)arg1;
+ (unsigned long long)colorComponentsMask:(unsigned long long)arg1 byAddingComponent:(long long)arg2;
+ (unsigned long long)colorComponentsMask:(unsigned long long)arg1 byRemovingComponent:(long long)arg2;
+ (id)colorSpaceNormalizedColor:(id)arg1 withinAllowedColorSpaces:(id)arg2;
+ (id)colorValueKeyForComponent:(long long)arg1;
+ (id)defaultColorSpace;
+ (void)enumerateColorComponentsInMask:(unsigned long long)arg1 enumerator:(id)arg2;
+ (id)keyPathsForValuesAffectingColorSpaceColor;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)keyPathsForValuesInvalidatingConstraints;
+ (long long)numberOfColorComponents;
+ (void)orderedColorComponentsEnumerator:(id)arg1;
+ (long long)preferredColorSwatchType;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)thumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 inView:(id)arg2;

- (long long)_componentForSlider:(id)arg1;
- (void)_selectComponentValueFrom:(id)arg1;
- (void)_sliderDidEndTracking;
- (void)_sliderWillBeginTracking;
- (unsigned long long)_unminimizedComponents;
- (void)dealloc;

// NSTouchBarColorPickerSliders (NSAccessibility)

+ (BOOL)accessibilityIsSingleCelled;

// NSTouchBarColorPickerSliders (_NSAutounbinder)

- (id)_autounbinder;
- (oneway void)release;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)allowedColorSpaces;
- (BOOL)allowsAlpha;
- (void)colorPickerSliderCompletedInteraction:(id)arg1;
- (BOOL)colorPickerSliderWantsToBeUnminimized:(id)arg1 completionHandler:(id)arg2;
- (id)colorSpaceColor;
- (id)colorWithValue:(double)arg1 forComponent:(long long)arg2 baseColor:(id)arg3;
- (id)currentColor;
- (id)declaredLayoutConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (void)setAllowedColorSpaces:(id)arg1;
- (void)setAllowsAlpha:(BOOL)arg1;
- (void)setCurrentColor:(id)arg1;
- (void)set_unminimizedComponents:(unsigned long long)arg1;
- (id)sliderForComponent:(long long)arg1;

@end