/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCGLSurface : NSCGLSurface {
    unsigned int  _atomic;
    unsigned int  _connectionID;
    struct CGImage { } * _image;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    unsigned int  _surfaceID;
    unsigned int  _windowID;
}

- (void*)_copyNonatomicRenderValue;
- (void)attachToCGLContext:(struct _CGLContextObject { }*)arg1;
- (unsigned long long)bitsPerComponent;
- (unsigned long long)bitsPerPixel;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (unsigned int)displayMask;
- (void)flushRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)image;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorSpace:(struct CGColorSpace { }*)arg2 atomic:(BOOL)arg3;
- (BOOL)isAttachedToCGLContext:(struct _CGLContextObject { }*)arg1;
- (BOOL)isFloatingPoint;
- (BOOL)isOpaque;
- (BOOL)isStereo;
- (id)layerContents;
- (struct CGImage { }*)leftImage;
- (struct CGImage { }*)rightImage;
- (struct CGSize { double x1; double x2; })size;

@end
