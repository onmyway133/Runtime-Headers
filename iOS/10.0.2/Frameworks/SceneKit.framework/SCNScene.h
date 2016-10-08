/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNScene : NSObject <NSSecureCoding> {
    SCNAuthoringEnvironment * _authoringEnvironment;
    SCNMaterialProperty * _background;
    SCNMaterialProperty * _environment;
    id  _fogColor;
    double  _fogDensityExponent;
    double  _fogEndDistance;
    double  _fogStartDistance;
    double  _lastEvalTime;
    SCNNode * _layerRootNode;
    bool  _paused;
    bool  _pausedForEditing;
    SCNPhysicsWorld * _physicsWorld;
    SCNNode * _rootNode;
    struct __C3DScene { } * _scene;
    SCNSceneSource * _sceneSource;
    NSMutableDictionary * _userAttributes;
}

@property (nonatomic, readonly) SCNMaterialProperty *background;
@property (nonatomic, retain) id fogColor;
@property (nonatomic) double fogDensityExponent;
@property (nonatomic) double fogEndDistance;
@property (nonatomic) double fogStartDistance;
@property (nonatomic, readonly) SCNMaterialProperty *lightingEnvironment;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, readonly) SCNPhysicsWorld *physicsWorld;
@property (nonatomic, readonly) SCNNode *rootNode;

+ (bool)canImportFileExtension:(id)arg1;
+ (bool)canImportFileUTI:(id)arg1;
+ (SEL)jsConstructor;
+ (id)scene;
+ (id)sceneNamed:(id)arg1;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)sceneNamed:(id)arg1 options:(id)arg2;
+ (id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithData:(id)arg1 options:(id)arg2;
+ (id)sceneWithMDLAsset:(id)arg1;
+ (id)sceneWithSceneRef:(struct __C3DScene { }*)arg1;
+ (id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)supportedFileUTIsForExport;
+ (id)supportedFileUTIsForImport;
+ (bool)supportsSecureCoding;

- (const void*)__CFObject;
- (void)_customDecodingOfSCNScene:(id)arg1;
- (void)_customEncodingOfSCNScene:(id)arg1;
- (void)_didDecodeSCNScene:(id)arg1;
- (void)_didEncodeSCNScene:(id)arg1;
- (id)_physicsWorldCreateIfNeeded:(bool)arg1;
- (void)_scaleSceneBy:(double)arg1;
- (id)_scenes;
- (void)_setRootNode:(id)arg1;
- (void)_syncObjCModel;
- (void)addParticleSystem:(id)arg1 withTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2;
- (void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3;
- (id)attributeForKey:(id)arg1;
- (id)background;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)debugQuickLookObjectWithPointOfView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)fogColor;
- (double)fogDensityExponent;
- (double)fogEndDistance;
- (double)fogStartDistance;
- (double)frameRate;
- (id)init;
- (id)initForJavascript:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneRef:(struct __C3DScene { }*)arg1;
- (bool)isPaused;
- (bool)isPausedForEditing;
- (bool)isPausedOrPausedByInheritance;
- (double)lastEvalTime;
- (id)lightingEnvironment;
- (void)lock;
- (id)particleSystems;
- (id)physicsWorld;
- (float)playbackSpeed;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(id)arg1;
- (id)root;
- (id)rootNode;
- (id)rootNodeForLayer:(int)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (id)sceneSource;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setEndTime:(double)arg1;
- (void)setFogColor:(id)arg1;
- (void)setFogDensityExponent:(double)arg1;
- (void)setFogEndDistance:(double)arg1;
- (void)setFogStartDistance:(double)arg1;
- (void)setFrameRate:(double)arg1;
- (void)setLastEvalTime:(double)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPausedForEditing:(bool)arg1;
- (void)setPlaybackSpeed:(float)arg1;
- (void)setRootNode:(id)arg1;
- (void)setRootNode:(id)arg1 forLayer:(int)arg2;
- (void)setSceneSource:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setUpAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (double)startTime;
- (void)unlock;
- (struct SCNVector3 { float x1; float x2; float x3; })upAxis;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)writeToURL:(id)arg1 options:(id)arg2;
- (bool)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(id /* block */)arg4;

@end
