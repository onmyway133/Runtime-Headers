/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUIShapeEffectPreset : NSObject {
    unsigned int  _effectIndex;
    float  _minimumShadowSpread;
    struct { 
        unsigned int effectType; 
        unsigned int effectParameter; 
        union { 
            double floatValue; 
            unsigned long long intValue; 
            struct _rgbcolor { 
                unsigned char r; 
                unsigned char g; 
                unsigned char b; 
            } colorValue; 
            short angleValue; 
            unsigned int enumValue; 
        } effectValue; 
    }  _parameterList;
    double  _scaleFactor;
}

@property (atomic, readwrite) float minimumShadowSpread;

+ (unsigned int)cuiEffectBlendModeFromCGBlendMode:(int)arg1;
+ (id)requiredEffectParametersForEffectType:(unsigned int)arg1;

- (void)_insertEffectTuple:(struct { unsigned int x1; unsigned int x2; union { double x_3_1_1; unsigned long long x_3_1_2; struct _rgbcolor { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; } x_3_1_3; short x_3_1_4; unsigned int x_3_1_5; } x3; })arg1 atEffectIndex:(unsigned long long)arg2;
- (void)addBevelEmbossWithHighlightColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 shadowColorRed:(unsigned int)arg5 green:(unsigned int)arg6 blue:(unsigned int)arg7 opacity:(double)arg8 blur:(int)arg9 soften:(int)arg10 bevelStyle:(unsigned int)arg11;
- (void)addColorFillWithRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blendMode:(unsigned int)arg5 tintable:(BOOL)arg6;
- (void)addColorValueRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 forParameter:(unsigned int)arg4 withNewEffectType:(unsigned int)arg5;
- (void)addDropShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8;
- (void)addEffectsFromPreset:(id)arg1;
- (void)addEnumValue:(unsigned int)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addExtraShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8;
- (void)addFloatValue:(double)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addGradientFillWithTopColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 bottomColorRed:(unsigned int)arg4 green:(unsigned int)arg5 blue:(unsigned int)arg6 opacity:(double)arg7 blendMode:(unsigned int)arg8;
- (void)addHueSaturationWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 angle:(int)arg4 width:(int)arg5 tintable:(BOOL)arg6;
- (void)addInnerGlowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 blendMode:(unsigned int)arg6;
- (void)addInnerShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7 blendMode:(unsigned int)arg8;
- (void)addIntValue:(unsigned long long)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addOuterGlowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6;
- (void)addOutputOpacityWithOpacity:(double)arg1;
- (void)addShapeOpacityWithOpacity:(double)arg1;
- (void)addValue:(union { double x1; unsigned long long x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; unsigned int x5; })arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3 atEffectIndex:(unsigned long long)arg4;
- (void)addValue:(union { double x1; unsigned long long x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; unsigned int x5; })arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)appendAngleValue:(long long)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendColorValueRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 forParameter:(unsigned int)arg4 withEffectType:(unsigned int)arg5;
- (void)appendEnumValue:(unsigned int)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendFloatValue:(double)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendIntValue:(unsigned long long)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendValue:(union { double x1; unsigned long long x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; unsigned int x5; })arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (id)debugDescription;
- (unsigned long long)effectCount;
- (double)effectScale;
- (unsigned int)effectTypeAtIndex:(unsigned long long)arg1;
- (void)getEffectTuples:(struct { /* ? */ }**)arg1 count:(unsigned long long*)arg2 atEffectIndex:(unsigned long long)arg3;
- (id)init;
- (id)initWithEffectScale:(double)arg1;
- (float)minimumShadowSpread;
- (void)setMinimumShadowSpread:(float)arg1;
- (union { double x1; unsigned long long x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; unsigned int x5; })valueForParameter:(unsigned int)arg1 inEffectAtIndex:(unsigned long long)arg2;

// CUIShapeEffectPreset (CUIEffectRegistryAdditions)

- (id)initWithConstantPreset:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { unsigned int x_5_1_1; unsigned int x_5_1_2; union { double x_3_2_1; unsigned long long x_3_2_2; struct _rgbcolor { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned char x_3_3_3; } x_3_2_3; short x_3_2_4; unsigned int x_3_2_5; } x_5_1_3; } x5[125]; }*)arg1;

// CUIShapeEffectPreset (CUIShapeEffectPresetLayerEffectsSupport)

- (id)layerEffectsRepresentation;

// CUIShapeEffectPreset (CUIThemeDataAdditions)

- (id)CUIEffectDataRepresentation;
- (unsigned long long)_parameterCount;

@end
