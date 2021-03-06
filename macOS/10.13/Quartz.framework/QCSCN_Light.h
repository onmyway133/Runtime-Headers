/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSCN_Light : NSObject <NSCopying, QCSCN_Animatable> {
    id  _reserved;
}

@property (nonatomic, readwrite) BOOL castsShadow;
@property (nonatomic, readwrite, retain) id color;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readwrite, retain) id shadowColor;
@property (nonatomic, readwrite) double shadowRadius;
@property (nonatomic, readwrite, copy) NSString *type;

+ (int)_baseTypeForProperty:(id)arg1;
+ (id)argumentsForSelector:(SEL)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)light;
+ (id)lightWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_3_1_1; } x3; int x4; float x5[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_6_1_1; } x6; bool x7; bool x8; float x9; double x10; double x11; struct { /* ? */ } *x12; }*)arg1;
+ (id)propertyKeys;
+ (Class)typeForProperty:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void*)__CFObject;
- (void)__removeAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (void)_sceneRefDidChange;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFArray {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; bool x8; bool x9; double x10; double x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; int x13; int x14; }*)animationManager;
- (double)attenuationEnd;
- (double)attenuationFalloffExponent;
- (double)attenuationStart;
- (id)attributeForKey:(id)arg1;
- (BOOL)castsShadow;
- (id)color;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)identifier;
- (id)init;
- (id)initPresentationLightWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_3_1_1; } x3; int x4; float x5[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_6_1_1; } x6; bool x7; bool x8; float x9; double x10; double x11; struct { /* ? */ } *x12; }*)arg1;
- (id)initWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_3_1_1; } x3; int x4; float x5[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_6_1_1; } x6; bool x7; bool x8; float x9; double x10; double x11; struct { /* ? */ } *x12; }*)arg1;
- (struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_3_1_1; } x3; int x4; float x5[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_6_1_1; } x6; bool x7; bool x8; float x9; double x10; double x11; struct { /* ? */ } *x12; }*)lightRef;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationLight;
- (id)propertyKeys;
- (void)removeAllAnimations;
- (void)removeAllAnimationsBeforeDying:(void*)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct __C3DNode {} *x3; struct __C3DAnimationManager {} *x4; double x5; double x6; double x7; double x8; struct __CFDictionary {} *x9; struct _SCNVector3 { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct __C3DFXDeformerManager {} *x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; }*)sceneRef;
- (void)setAttenuationEnd:(double)arg1;
- (void)setAttenuationFalloffExponent:(double)arg1;
- (void)setAttenuationStart:(double)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setCastsShadow:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct __C3DNode {} *x3; struct __C3DAnimationManager {} *x4; double x5; double x6; double x7; double x8; struct __CFDictionary {} *x9; struct _SCNVector3 { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct __C3DFXDeformerManager {} *x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; }*)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setSpotFalloffExponent:(double)arg1;
- (void)setSpotInnerAngle:(double)arg1;
- (void)setSpotOuterAngle:(double)arg1;
- (void)setType:(id)arg1;
- (void)setZFar:(double)arg1;
- (void)setZNear:(double)arg1;
- (id)shadowColor;
- (double)shadowRadius;
- (double)spotFalloffExponent;
- (double)spotInnerAngle;
- (double)spotOuterAngle;
- (struct __C3DAnimationTarget { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; void *x2; void *x3; int x4; int x5; struct __CFString {} *x6; struct __CFArray {} *x7; }*)targetForKey:(id)arg1;
- (id)type;
- (double)zFar;
- (double)zNear;

@end
