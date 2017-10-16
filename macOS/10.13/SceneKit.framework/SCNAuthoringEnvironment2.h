/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNAuthoringEnvironment2 : NSObject {
    NSColor * _blue;
    SCNGeometry * _cameraFrustumGeometry;
    SCNGeometry * _cameraGeometry;
    SCNGeometry * _cameraNearPlaneGeometry;
    SCNNode * _cameraRoot;
    SCNNode * _cameraTarget;
    struct __CFDictionary { } * _camerasDictionary;
    NSColor * _cyan;
    long long  _displayMask;
    SCNGeometry * _fieldGeometry;
    NSColor * _grayDark;
    NSColor * _grayLight;
    NSColor * _grayMedium;
    NSColor * _green;
    SCNNode * _layerRoot;
    SCNGeometry * _lightGeometry;
    SCNNode * _lightRoot;
    struct __CFDictionary { } * _lightsDictionary;
    NSColor * _orange;
    NSColor * _paleBlue;
    NSColor * _paleGreen;
    struct __CFDictionary { } * _particlesDictionary;
    SCNGeometry * _particlesGeometry;
    SCNNode * _particlesRoot;
    struct __CFDictionary { } * _physicsFieldsDictionary;
    SCNNode * _physicsFieldsRoot;
    NSColor * _pink;
    SCNNode * _pointsOfViewRoot;
    long long  _readDepthMask;
    NSColor * _red;
    SCNRenderer * _renderer;
    struct __C3DScene { } * _scene;
    NSMutableSet * _selection;
    NSColor * _white;
    NSColor * _yellow;
}

@property (atomic, readwrite) long long displayMask;
@property (atomic, readwrite) long long readDepthMask;

+ (id)authoringEnvironmentForScene:(id)arg1;

- (void)addCameraNode:(id)arg1;
- (void)addLightNode:(id)arg1;
- (void)addNodeToSelection:(id)arg1;
- (void)addParticlesNode:(id)arg1;
- (void)addPhysicsFieldNode:(id)arg1;
- (void)addedNode:(id)arg1;
- (id)authoringCamera:(long long)arg1;
- (id)authoringCameraNodes;
- (id)cameraFrustumGeometry;
- (id)cameraGeometry;
- (id)cameraNearPlaneGeometry;
- (void)cancelSelection;
- (void)dealloc;
- (long long)displayMask;
- (id)fieldGeometry;
- (id)initWithScene:(id)arg1;
- (id)lightGeometry;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (id)particlesGeometry;
- (void)prepareScene:(id)arg1;
- (long long)readDepthMask;
- (void)removeCameraNode:(id)arg1;
- (void)removeLightNode:(id)arg1;
- (void)removeParticlesNode:(id)arg1;
- (void)removePhysicsFieldNode:(id)arg1;
- (void)removedNode:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)selectNodes:(id)arg1;
- (void)setAuthoringCamera:(long long)arg1 forView:(id)arg2;
- (void)setDisplayMask:(long long)arg1;
- (void)setReadDepthMask:(long long)arg1;
- (void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateFieldNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 andRatio:(float)arg4;
- (void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateWithRenderer:(id)arg1;

@end
