/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCView : NSView <DebugHierarchyObject, QCCompositionRenderer> {
    void * _QCViewPrivate;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer

+ (id)defaultRenderingOptions;
+ (void)initialize;
+ (void)setDefaultOptionFlags:(unsigned long long)arg1;

- (void)__stateUpdated:(id)arg1;
- (void)__timebaseChanged:(id)arg1;
- (id)_backingLayer;
- (void)_cleanUpOpenGLContext;
- (void)_cleanupRendering;
- (id)_compositionInfo;
- (id)_createLayer;
- (void)_finishInitialization;
- (unsigned long long)_flags;
- (void)_forwardEvent:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (id)_fullScreenWindow;
- (BOOL)_hasSurface;
- (BOOL)_hasTimer;
- (void)_initializeRenderView;
- (void)_purgeImageManagerResourcesIfNeeded;
- (void)_reconfigure;
- (void)_releaseRenderView;
- (void)_renderGLContext;
- (void)_renderTimer;
- (void)_setupOpenGLContext;
- (void)_setupRendering;
- (void)_surfaceDidComeBack;
- (void)_surfaceWillGoAway;
- (void)_updateColorSpace;
- (void)_viewGlobalFrameDidChange:(id)arg1;
- (void)_windowDidOrderOffScreen:(id)arg1;
- (void)_windowScreenDidChange:(id)arg1;
- (void)_windowWillOrderOnScreen:(id)arg1;
- (struct CGSize { double x1; double x2; })aspectRatio;
- (id)attributes;
- (BOOL)autostartsRendering;
- (float)averageFPS;
- (float)averageLoad;
- (unsigned long long)backgroundCheckerboardSize;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cleanAperture;
- (BOOL)clearsBackground;
- (id)createSnapshotImageOfType:(id)arg1;
- (void)dealloc;
- (id)defaultRenderingOptions;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)drawsBackground;
- (void)encodeWithCoder:(id)arg1;
- (void)erase;
- (id)eraseColor;
- (unsigned long long)eventForwardingMask;
- (void)finalize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 optionFlags:(unsigned long long)arg2;
- (id)inputKeys;
- (BOOL)isCompositionLoaded;
- (BOOL)isFullScreen;
- (BOOL)isPausedRendering;
- (BOOL)isRendering;
- (BOOL)loadComposition:(id)arg1;
- (BOOL)loadComposition:(id)arg1 options:(id)arg2 stateOK:(BOOL*)arg3;
- (BOOL)loadCompositionFromFile:(id)arg1;
- (BOOL)loadCompositionFromFile:(id)arg1 stateOK:(BOOL*)arg2;
- (id)loadedComposition;
- (void)lockFocus;
- (void)lockGraph;
- (float)maxRenderingFrameRate;
- (BOOL)mouseDownCanMoveWindow;
- (double)nextExecutionTime:(double)arg1 arguments:(id)arg2;
- (void*)observationInfo;
- (id)openGLContext;
- (id)openGLPixelFormat;
- (unsigned long long)optionFlags;
- (id)outputKeys;
- (id)patch;
- (void)pauseRendering;
- (struct CGSize { double x1; double x2; })pixelAspectRatio;
- (id)propertyListFromInputValues;
- (BOOL)render:(double)arg1 arguments:(id)arg2;
- (BOOL)renderAtTime:(double)arg1 arguments:(id)arg2;
- (double)renderTime;
- (id)renderingContext;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)resumeRendering;
- (id)saveComposition:(BOOL)arg1;
- (BOOL)saveCompositionToFile:(id)arg1;
- (BOOL)saveCompositionToFile:(id)arg1 flatten:(BOOL)arg2;
- (void)setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setAsynchronous:(BOOL)arg1;
- (void)setAutostartsRendering:(BOOL)arg1;
- (void)setBackgroundCheckerboardSize:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCleanAperture:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClearsBackground:(BOOL)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setEraseColor:(id)arg1;
- (void)setEventForwardingMask:(unsigned long long)arg1;
- (void)setFullScreen:(id)arg1 options:(id)arg2;
- (void)setInputValuesWithPropertyList:(id)arg1;
- (void)setInteractive:(BOOL)arg1;
- (void)setLayer:(id)arg1;
- (void)setMaxRenderingFrameRate:(float)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setOptionFlags:(unsigned long long)arg1;
- (void)setPatch:(id)arg1;
- (void)setPixelAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRenderTime:(double)arg1;
- (BOOL)setValue:(id)arg1 forInputKey:(id)arg2;
- (id)snapshotImage;
- (BOOL)startRendering;
- (BOOL)startRendering:(id)arg1;
- (void)stopRendering;
- (void)unloadComposition;
- (void)unlockGraph;
- (id)userInfo;
- (Class)valueClassForBinding:(id)arg1;
- (id)valueForInputKey:(id)arg1;
- (id)valueForOutputKey:(id)arg1;
- (id)valueForOutputKey:(id)arg1 ofType:(id)arg2;
- (void)viewDidMoveToWindow;

// QCView (EventHandling)

- (struct CGPoint { double x1; double x2; })_normalizedMouseLocationWithOptionalEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)beginGestureWithEvent:(id)arg1;
- (void)copy:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (BOOL)wantsBestResolutionOpenGLSurface;

// QCView (IBExtensions)

- (void)play:(id)arg1;
- (void)start:(id)arg1;
- (void)stop:(id)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// QCView (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

@end
