/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSCN_View : NSView <QCSCN_SceneRenderer> {
    id  _reserved;
}

@property (nonatomic, readwrite) BOOL allowsCameraControl;
@property (nonatomic, readwrite) BOOL autoenablesDefaultLighting;
@property (nonatomic, readwrite, copy) NSColor *backgroundColor;
@property (nonatomic, readonly) void*context;
@property (nonatomic, readwrite) double currentTime;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <QCSCN_SceneRendererDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isJitteringEnabled, nonatomic, readwrite) BOOL jitteringEnabled;
@property (nonatomic, readwrite) BOOL loops;
@property (nonatomic, readwrite, retain) NSOpenGLContext *openGLContext;
@property (nonatomic, readwrite, retain) NSOpenGLPixelFormat *pixelFormat;
@property (getter=isPlaying, atomic, readwrite) BOOL playing;
@property (nonatomic, readwrite, retain) QCSCN_Node *pointOfView;
@property (nonatomic, readwrite, retain) QCSCN_Scene *scene;
@property (atomic, readonly) Class superclass;

+ (int)_baseTypeForProperty:(id)arg1;
+ (id)defaultPixelFormat;
+ (id)defaultPixelFormatWithSampleCount:(unsigned long long)arg1;
+ (void)initialize;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)propertyKeys;
+ (Class)typeForProperty:(id)arg1;

- (void*)__CFObject;
- (void)__renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)__renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (int)__setupDisplayLink;
- (BOOL)_canJitter;
- (void)_commonInit:(id)arg1;
- (BOOL)_dirtyFlag;
- (int)_displayLinkCallback:(const struct { unsigned int x1; int x2; long long x3; unsigned long long x4; double x5; long long x6; struct CVSMPTETime { short x_7_1_1; short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; short x_7_1_6; short x_7_1_7; short x_7_1_8; short x_7_1_9; } x7; unsigned long long x8; unsigned long long x9; }*)arg1;
- (void)_draw;
- (void)_drawInCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (id)_getPixelFormat;
- (void)_installViewport:(void*)arg1;
- (void)_jitter;
- (void)_jitterRedisplay:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (void)_loadScene:(id)arg1;
- (void)_notifyAsynchLoadingDidEnd:(id)arg1;
- (void)_notifyAsynchLoadingWillStart:(id)arg1;
- (void)_notifyLoading:(id)arg1;
- (void)_openGLContextDidChange;
- (id)_privateOpenGLContext;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_setBackgroundColor:(id)arg1;
- (void)_setDirtyFlag:(BOOL)arg1;
- (void)_setNeedsDisplay;
- (void)_setPointOfView:(id)arg1;
- (void)_setScene:(id)arg1;
- (void)_setupDisplayLink;
- (void)_setupGLContext:(id)arg1;
- (BOOL)_shouldRedraw;
- (void)_startRepetitiveDisplay;
- (void)_stopDisplayLink;
- (void)_stopRepetitiveDisplay;
- (void)_stopRepetitiveDisplayIfPossible;
- (void)_surfaceNeedsUpdate:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (void)_timerCallback:(id)arg1;
- (void)_willDrawForJittering;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsBrowsing;
- (BOOL)allowsCameraControl;
- (BOOL)asychronousLoading;
- (BOOL)autoAdjustCamera;
- (BOOL)autoAdjustClippingPlanes;
- (BOOL)autoenablesDefaultLighting;
- (id)backgroundColor;
- (BOOL)becomeFirstResponder;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInPixels;
- (void)clearBuffers:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (void)clearGLContext;
- (BOOL)clearViewportWhenDrawing;
- (id)contentLayer;
- (void*)context;
- (double)currentTime;
- (void)dealloc;
- (void)defaultDoubleClickAction:(int)arg1;
- (id)delegate;
- (id)description;
- (void)draw;
- (void)drawInBackingLayerWithCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)enableDefaultLight;
- (void)encodeWithCoder:(id)arg1;
- (id)eventHandler;
- (void)finalize;
- (BOOL)hasFocus;
- (BOOL)hasSystemTimeAnimationRuning;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2;
- (void)installLoadingLayer;
- (BOOL)isJitteringEnabled;
- (BOOL)isOpaque;
- (BOOL)isPlaying;
- (void)jitter:(id)arg1;
- (void)jitterFromSecondaryThread;
- (void)jitterRedisplayInBackingLayerWithCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)jitteringCGLContext;
- (BOOL)jitteringEnabled;
- (id)jitteringLayer;
- (BOOL)jitteringSupported;
- (void)keyDown:(id)arg1;
- (void)lock;
- (BOOL)lockFocusIfCanDraw;
- (void)lockJittering;
- (BOOL)loops;
- (void)magnifyWithEvent:(id)arg1;
- (id)makeBackingLayer;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)openGLContext;
- (void)pause;
- (void)pause:(id)arg1;
- (id)pixelFormat;
- (void)play;
- (void)play:(id)arg1;
- (id)pointOfView;
- (void)prepareOpenGL;
- (id)propertyKeys;
- (void)removeLoadingLayer;
- (id)renderer;
- (id)rendererID;
- (void)renewGState;
- (void)resetBrowseMode;
- (void)reshape;
- (BOOL)resignFirstResponder;
- (void)restartJittering;
- (void)rotateOf:(double)arg1;
- (void)rotateWithEvent:(id)arg1;
- (id)scene;
- (void)scrollWheel:(id)arg1;
- (void)setAllowsBrowsing:(BOOL)arg1;
- (void)setAllowsCameraControl:(BOOL)arg1;
- (void)setAsynchronousLoading:(BOOL)arg1;
- (void)setAutoAdjustCamera:(BOOL)arg1;
- (void)setAutoAdjustClippingPlanes:(BOOL)arg1;
- (void)setAutoenablesDefaultLighting:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setClearViewportWhenDrawing:(BOOL)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableDefaultLight:(BOOL)arg1;
- (void)setEventHandler:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setJitteringEnabled:(BOOL)arg1;
- (void)setLoops:(BOOL)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setOpenGLContext:(id)arg1;
- (void)setPixelFormat:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setPointOfView:(id)arg1 animate:(BOOL)arg2;
- (void)setRendererID:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setWantsLayer:(BOOL)arg1;
- (void)setZoomFactor:(double)arg1;
- (BOOL)shouldForceFixedPipeline;
- (void)stop;
- (void)stop:(id)arg1;
- (void)stopJittering;
- (void)stopJitteringIfNeeded;
- (void)switchToCameraNamed:(id)arg1;
- (void)switchToNextCamera;
- (void)testHitTest:(id)arg1;
- (void)unbind:(id)arg1;
- (void)unlock;
- (void)unlockJittering;
- (void)update;
- (BOOL)usesDisplayLink;
- (Class)valueClassForBinding:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)wantsBestResolutionOpenGLSurface;
- (void)windowChangedScreen:(id)arg1;
- (double)zoomFactor;

@end
