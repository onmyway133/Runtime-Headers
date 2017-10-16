/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNEventHandler : NSObject {
    BOOL  _autoSwitchToFreeCamera;
    NSMutableArray * _controllers;
    BOOL  _enableFreeCamera;
    struct __IOHIDManager { } * _hidManager;
    SCNView * _view;
}

@property (atomic, readwrite) BOOL autoSwitchToFreeCamera;
@property (atomic, readwrite) BOOL enableFreeCamera;
@property (atomic, readonly) SCNNode *freeCamera;
@property (atomic, readonly) SCNView *view;

- (void)activateFreeCamera;
- (BOOL)autoSwitchToFreeCamera;
- (void)becomeFirstResponder;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)dealloc;
- (BOOL)enableFreeCamera;
- (id)freeCamera;
- (id)init;
- (BOOL)magnifyWithEvent:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (void)resignFirstResponder;
- (BOOL)rotateWithEvent:(id)arg1;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (BOOL)scrollWheel:(id)arg1;
- (void)setAutoSwitchToFreeCamera:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableFreeCamera:(BOOL)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (BOOL)wantsRedraw;

@end
