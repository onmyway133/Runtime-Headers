/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTSurfaceRendererSoftwareTile : QTSurfaceRendererTile {
    unsigned int  _backBufferConnectionID;
    struct CGContext { } * _backBufferContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _backBufferDimensions;
    unsigned int  _backBufferWindowID;
    struct CGImage { } * _image;
    struct CGColor { } * _lastRenderedBackgroundColor;
    struct __CVBuffer { } * _lastRenderedImageBuffer;
}

- (unsigned int)backBufferConnectionID;
- (struct CGContext { }*)backBufferContext;
- (unsigned int)backBufferWindowID;
- (void)bindSurface;
- (id)diagnosticString;
- (void)ensureBackBuffer;
- (id)pixelBufferAttributes;
- (void)render;
- (void)setConnectionID:(unsigned int)arg1;
- (void)tearDown;
- (void)unbindSurface;

@end
