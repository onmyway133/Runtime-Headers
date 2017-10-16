/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CABasicAnimation : CAPropertyAnimation

@property (atomic, readwrite, retain) id byValue;
@property (atomic, readwrite) double endAngle;
@property (atomic, readwrite, retain) id fromValue;
@property (atomic, readwrite) BOOL roundsToInteger;
@property (atomic, readwrite) double startAngle;
@property (atomic, readwrite, retain) id toValue;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

+ (id)CA_attributes;

- (void)CA_prepareRenderValue;
- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)_copyRenderAnimationForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (double)_timeFunction:(double)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)byValue;
- (id)fromValue;
- (void)setByValue:(id)arg1;
- (void)setFromValue:(id)arg1;
- (void)setToValue:(id)arg1;
- (id)toValue;

// CABasicAnimation (CAAnimationPrivate)

- (double)endAngle;
- (BOOL)roundsToInteger;
- (void)setEndAngle:(double)arg1;
- (void)setRoundsToInteger:(BOOL)arg1;
- (void)setStartAngle:(double)arg1;
- (double)startAngle;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// CABasicAnimation (NSInternal)

- (void)NS_takeImpliedValuesFromPresentationObject:(id)arg1 modelObject:(id)arg2;
- (void)NS_transformValuesAtKeyPath:(id)arg1 usingBlock:(id)arg2;

@end
