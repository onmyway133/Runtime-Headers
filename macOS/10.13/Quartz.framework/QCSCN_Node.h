/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSCN_Node : NSObject <NSCopying, QCSCN_Animatable, QCSCN_BoundingVolume> {
    id  _reserved;
}

@property (nonatomic, readwrite, retain) QCSCN_Camera *camera;
@property (nonatomic, readonly, copy) NSArray *childNodes;
@property (nonatomic, readwrite, retain) QCSCN_Geometry *geometry;
@property (getter=isHidden, nonatomic, readwrite) BOOL hidden;
@property (nonatomic, readwrite, retain) QCSCN_Light *light;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readwrite) double opacity;
@property (nonatomic, readonly) QCSCN_Node *parentNode;
@property (nonatomic, readwrite) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } pivot;
@property (nonatomic, readwrite) struct _SCNVector3 { double x1; double x2; double x3; } position;
@property (nonatomic, readwrite) <QCSCN_NodeRendererDelegate> *rendererDelegate;
@property (nonatomic, readwrite) long long renderingOrder;
@property (nonatomic, readwrite) struct _SCNVector4 { double x1; double x2; double x3; double x4; } rotation;
@property (nonatomic, readwrite) struct _SCNVector3 { double x1; double x2; double x3; } scale;
@property (nonatomic, readwrite) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } worldTransform;

+ (int)_baseTypeForProperty:(id)arg1;
+ (id)argumentsForSelector:(SEL)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)keyPathsForValuesAffectingTransform;
+ (id)node;
+ (id)nodeWithGeometry:(id)arg1;
+ (id)nodeWithNodeRef:(struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DNode {} *x2; struct __CFArray {} *x3; struct __C3DSceneID {} *x4; struct __C3DTransforms {} *x5; float x6; bool x7; struct _SCNVector3 { double x_8_1_1; double x_8_1_2; double x_8_1_3; } x8[2]; struct _SCNVector3 { double x_9_1_1; double x_9_1_2; double x_9_1_3; } x9[2]; struct __C3DTransforms {} *x10; float x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; }*)arg1;
+ (id)propertyKeys;
+ (Class)typeForProperty:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void*)__CFObject;
- (id)__camera;
- (id)__geometry;
- (void)__insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2;
- (id)__light;
- (id)__morpher;
- (void)__removeAnimationForKey:(id)arg1;
- (void)__removeObjectFromChildNodesAtIndex:(unsigned long long)arg1;
- (id)__skinner;
- (BOOL)_childNodesAreExpanded;
- (BOOL)_childNodesPassingTest:(id)arg1 recursively:(BOOL)arg2 output:(id)arg3;
- (void)_childNodesWithAttribute:(Class)arg1 output:(id)arg2 recursively:(BOOL)arg3;
- (id)_copy:(BOOL)arg1;
- (id)_copyRecursively;
- (void)_dump:(id)arg1;
- (void)_expandChildArrayIfNeeded;
- (void)_initChildNodesArray;
- (id)_jsChildNodeWithName:(id)arg1 recursively:(id)arg2;
- (void)_jsInsertChildNode:(id)arg1 atIndex:(id)arg2;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (void)_registerAsObserver;
- (void)_sceneRefDidChange;
- (void)_setAttributes:(id)arg1;
- (void)_setCamera:(id)arg1;
- (void)_setGeometry:(id)arg1;
- (void)_setLight:(id)arg1;
- (void)_setMorpher:(id)arg1;
- (void)_setParent:(id)arg1;
- (void)_setSkinner:(id)arg1;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_transposeTargetsToClone:(id)arg1 cloneRoot:(id)arg2;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addChildNode:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFArray {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; bool x8; bool x9; double x10; double x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; int x13; int x14; }*)animationManager;
- (id)attributeForKey:(id)arg1;
- (id)camera;
- (BOOL)canAddChildNode:(id)arg1;
- (id)childNodeWithName:(id)arg1;
- (id)childNodeWithName:(id)arg1 recursively:(BOOL)arg2;
- (id)childNodes;
- (id)childNodesPassingTest:(id)arg1;
- (id)childNodesPassingTest:(id)arg1 recursively:(BOOL)arg2;
- (id)childNodesWithAttribute:(Class)arg1 recursively:(BOOL)arg2;
- (id)clone;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfChildNodes;
- (void)dealloc;
- (id)description;
- (void)dump;
- (void)finalize;
- (id)flattenedCopy;
- (id)geometry;
- (id)getBoundingBox;
- (BOOL)getBoundingBoxMin:(struct _SCNVector3 { double x1; double x2; double x3; }*)arg1 max:(struct _SCNVector3 { double x1; double x2; double x3; }*)arg2;
- (id)getBoundingSphere;
- (BOOL)getBoundingSphereCenter:(struct _SCNVector3 { double x1; double x2; double x3; }*)arg1 radius:(double*)arg2;
- (BOOL)hidden;
- (id)identifier;
- (unsigned long long)indexOfChildNode:(id)arg1;
- (id)init;
- (id)initPresentationNodeWithNodeRef:(struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DNode {} *x2; struct __CFArray {} *x3; struct __C3DSceneID {} *x4; struct __C3DTransforms {} *x5; float x6; bool x7; struct _SCNVector3 { double x_8_1_1; double x_8_1_2; double x_8_1_3; } x8[2]; struct _SCNVector3 { double x_9_1_1; double x_9_1_2; double x_9_1_3; } x9[2]; struct __C3DTransforms {} *x10; float x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; }*)arg1;
- (id)initWithNodeRef:(struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DNode {} *x2; struct __CFArray {} *x3; struct __C3DSceneID {} *x4; struct __C3DTransforms {} *x5; float x6; bool x7; struct _SCNVector3 { double x_8_1_1; double x_8_1_2; double x_8_1_3; } x8[2]; struct _SCNVector3 { double x_9_1_1; double x_9_1_2; double x_9_1_3; } x9[2]; struct __C3DTransforms {} *x10; float x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; }*)arg1;
- (void)insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2;
- (BOOL)isGizmo;
- (BOOL)isHidden;
- (BOOL)isJoint;
- (BOOL)isPresentationInstance;
- (id)jsChildNodesWithAttribute:(id)arg1;
- (id)light;
- (id)morpher;
- (id)mutableChildNodes;
- (id)name;
- (struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DNode {} *x2; struct __CFArray {} *x3; struct __C3DSceneID {} *x4; struct __C3DTransforms {} *x5; float x6; bool x7; struct _SCNVector3 { double x_8_1_1; double x_8_1_2; double x_8_1_3; } x8[2]; struct _SCNVector3 { double x_9_1_1; double x_9_1_2; double x_9_1_3; } x9[2]; struct __C3DTransforms {} *x10; float x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; }*)nodeRef;
- (id)objectInChildNodesAtIndex:(unsigned long long)arg1;
- (id)objectInChildNodesWithAttribute:(id)arg1 firstOnly:(BOOL)arg2;
- (id)objectInChildNodesWithName:(id)arg1;
- (double)opacity;
- (id)parentNode;
- (BOOL)parseKeyPath:(id)arg1 intoDestination:(id*)arg2 remainingPath:(id*)arg3;
- (void)pauseAnimationForKey:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })pivot;
- (struct _SCNVector3 { double x1; double x2; double x3; })position;
- (id)presentationNode;
- (id)propertyKeys;
- (void)removeAllAnimations;
- (void)removeAllAnimationsBeforeDying:(void*)arg1;
- (void)removeAllChilds;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeFromParentNode;
- (void)removeObjectFromChildNodesAtIndex:(unsigned long long)arg1;
- (void)renderInContext:(void*)arg1;
- (id)rendererDelegate;
- (long long)renderingOrder;
- (void)replaceChildNode:(id)arg1 with:(id)arg2;
- (void)replaceObjectInChildNodesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (struct _SCNVector4 { double x1; double x2; double x3; double x4; })rotation;
- (struct _SCNVector3 { double x1; double x2; double x3; })scale;
- (id)scene;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct __C3DNode {} *x3; struct __C3DAnimationManager {} *x4; double x5; double x6; double x7; double x8; struct __CFDictionary {} *x9; struct _SCNVector3 { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct __C3DFXDeformerManager {} *x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; }*)sceneRef;
- (void)sceneWillDie:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct __C3DNode {} *x3; struct __C3DAnimationManager {} *x4; double x5; double x6; double x7; double x8; struct __CFDictionary {} *x9; struct _SCNVector3 { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct __C3DFXDeformerManager {} *x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; }*)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setCamera:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGizmo:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLight:(id)arg1;
- (void)setMorpher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setPivot:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setPosition:(struct _SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setRendererDelegate:(id)arg1;
- (void)setRenderingOrder:(long long)arg1;
- (void)setRotation:(struct _SCNVector4 { double x1; double x2; double x3; double x4; })arg1;
- (void)setScale:(struct _SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setScene:(id)arg1;
- (void)setSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct __C3DNode {} *x3; struct __C3DAnimationManager {} *x4; double x5; double x6; double x7; double x8; struct __CFDictionary {} *x9; struct _SCNVector3 { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct __C3DFXDeformerManager {} *x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; }*)arg1;
- (void)setSkinner:(id)arg1;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWorldTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setupObserving;
- (id)skinner;
- (struct __C3DAnimationTarget { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; void *x2; void *x3; int x4; int x5; struct __CFString {} *x6; struct __CFArray {} *x7; }*)targetForKey:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (id)valueForUndefinedKey:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })worldTransform;

@end
