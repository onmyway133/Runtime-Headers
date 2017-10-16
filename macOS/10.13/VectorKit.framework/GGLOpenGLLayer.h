/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface GGLOpenGLLayer : CAOpenGLLayer <GGLLayer> {
    struct CGSize { 
        double width; 
        double height; 
    }  _backingSize;
    struct unique_ptr<ggl::OGLContext, std::__1::default_delete<ggl::OGLContext> > { 
        struct __compressed_pair<ggl::OGLContext *, std::__1::default_delete<ggl::OGLContext> > { 
            struct OGLContext {} *__first_; 
        } __ptr_; 
    }  _context;
    <GGLLayerDelegate> * _delegate;
    struct shared_ptr<ggl::OGLDevice> { 
        struct OGLDevice {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _device;
    int  _framebuffer;
    BOOL  _readPixels;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> > { 
        struct __compressed_pair<ggl::Texture *, std::__1::default_delete<ggl::Texture> > { 
            struct Texture {} *__first_; 
        } __ptr_; 
    }  _texture;
}

@property (atomic, readonly) int backingFormat;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } backingSize;
@property (atomic, readwrite) <GGLLayerDelegate> *renderDelegate;
@property (nonatomic, readonly) struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*texture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deleteBuffers;
- (void)_updateTexture;
- (int)backingFormat;
- (struct CGSize { double x1; double x2; })backingSize;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject { }*)arg1 pixelFormat:(struct _CGLPixelFormatObject { }*)arg2 forLayerTime:(double)arg3 displayTime:(const struct { unsigned int x1; int x2; long long x3; unsigned long long x4; double x5; long long x6; struct CVSMPTETime { short x_7_1_1; short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; short x_7_1_6; short x_7_1_7; short x_7_1_8; short x_7_1_9; } x7; unsigned long long x8; unsigned long long x9; }*)arg4;
- (struct _CGLContextObject { }*)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject { }*)arg1;
- (struct _CGLPixelFormatObject { }*)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (void)dealloc;
- (void)didEnterBackground;
- (void)drawInCGLContext:(struct _CGLContextObject { }*)arg1 pixelFormat:(struct _CGLPixelFormatObject { }*)arg2 forLayerTime:(double)arg3 displayTime:(const struct { unsigned int x1; int x2; long long x3; unsigned long long x4; double x5; long long x6; struct CVSMPTETime { short x_7_1_1; short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; short x_7_1_6; short x_7_1_7; short x_7_1_8; short x_7_1_9; } x7; unsigned long long x8; unsigned long long x9; }*)arg4;
- (id)initWithDevice:(struct shared_ptr<ggl::OGLDevice> { struct OGLDevice {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)layoutSublayers;
- (void)onTimerFired:(double)arg1;
- (void)releaseCGLContext:(struct _CGLContextObject { }*)arg1;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject { }*)arg1;
- (id)renderDelegate;
- (void)setRenderDelegate:(id)arg1;
- (struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)texture;

@end
