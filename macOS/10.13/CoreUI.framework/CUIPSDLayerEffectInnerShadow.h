/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent {
    short  _angle;
    int  _blendMode;
    unsigned long long  _blurSize;
    CUIColor * _color;
    unsigned long long  _distance;
    double  _opacity;
}

@property (atomic, readwrite) short angle;
@property (atomic, readwrite) int blendMode;
@property (atomic, readwrite) unsigned long long blurSize;
@property (atomic, readwrite, retain) CUIColor *color;
@property (atomic, readwrite) unsigned long long distance;
@property (atomic, readwrite) double opacity;

- (short)angle;
- (int)blendMode;
- (unsigned long long)blurSize;
- (id)color;
- (void)dealloc;
- (unsigned long long)distance;
- (unsigned int)effectType;
- (id)init;
- (double)opacity;
- (void)setAngle:(short)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setBlurSize:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setDistance:(unsigned long long)arg1;
- (void)setOpacity:(double)arg1;

// CUIPSDLayerEffectInnerShadow (CUIShapeEffectPresetLayerEffectsSupport)

- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end
