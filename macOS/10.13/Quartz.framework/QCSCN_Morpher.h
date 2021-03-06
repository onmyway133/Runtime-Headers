/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSCN_Morpher : NSObject <QCSCN_Animatable> {
    id  _reserved;
}

@property (nonatomic, readwrite, copy) NSString *name;
@property (atomic, readwrite) BOOL normalizeWeights;

+ (int)_baseTypeForProperty:(id)arg1;
+ (id)argumentsForSelector:(SEL)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)morpherWithMorpherRef:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DMorph {} *x2; }*)arg1;
+ (id)propertyKeys;
+ (Class)typeForProperty:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void*)__CFObject;
- (void)__removeAnimationForKey:(id)arg1;
- (void)_jsSetWeight:(id)arg1 atIndex:(id)arg2;
- (id)_jsWeightAtIndex:(id)arg1;
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
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)identifier;
- (id)initPresentationMorpherWithMorpherRef:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DMorph {} *x2; }*)arg1;
- (id)initWithMorpherRef:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DMorph {} *x2; }*)arg1;
- (struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DMorph {} *x2; }*)morpherRef;
- (id)name;
- (BOOL)normalizeWeights;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationMorpher;
- (id)propertyKeys;
- (void)removeAllAnimations;
- (void)removeAllAnimationsBeforeDying:(void*)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct __C3DNode {} *x3; struct __C3DAnimationManager {} *x4; double x5; double x6; double x7; double x8; struct __CFDictionary {} *x9; struct _SCNVector3 { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct __C3DFXDeformerManager {} *x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; }*)sceneRef;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNormalizeWeights:(BOOL)arg1;
- (void)setSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct __C3DNode {} *x3; struct __C3DAnimationManager {} *x4; double x5; double x6; double x7; double x8; struct __CFDictionary {} *x9; struct _SCNVector3 { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct __C3DFXDeformerManager {} *x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; }*)arg1;
- (void)setWeight:(double)arg1 atIndex:(unsigned long long)arg2;
- (struct __C3DAnimationTarget { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; void *x2; void *x3; int x4; int x5; struct __CFString {} *x6; struct __CFArray {} *x7; }*)targetForKey:(id)arg1;
- (double)weightAtIndex:(unsigned long long)arg1;

@end
