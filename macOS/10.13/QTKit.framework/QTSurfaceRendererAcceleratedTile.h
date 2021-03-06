/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTSurfaceRendererAcceleratedTile : QTSurfaceRendererTile {
    BOOL  _canUseCoreImage;
    struct { 
        struct __CVBuffer {} *imageBuffer; 
        struct CGColor {} *contentBackgroundColor; 
        struct CGColorSpace {} *colorSpace; 
        struct CGColorSpace {} *forcedContentColorSpace; 
        struct CGSize { 
            double width; 
            double height; 
        } contentSize; 
        struct CGSize { 
            double width; 
            double height; 
        } surfaceSize; 
        struct CGSize { 
            double width; 
            double height; 
        } offset; 
    }  _config;
    CIContext * _filterContext;
    QTOpenGLContext * _glContext;
    QTOpenGLTexture * _glTexture;
}

- (void)_clearConfig;
- (void)bindSurface;
- (void)dealloc;
- (id)diagnosticString;
- (void)finalize;
- (id)graphicsDevice;
- (id)initWithGraphicsDevice:(id)arg1;
- (id)openGLContext;
- (id)pixelBufferAttributes;
- (void)render;
- (int)syncConfig;
- (void)unbindSurface;
- (void)updateBinding;

@end
