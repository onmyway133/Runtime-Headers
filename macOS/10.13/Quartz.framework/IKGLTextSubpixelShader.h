/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKGLTextSubpixelShader : NSObject {
    unsigned int  _framebufferTexture;
    void * _program;
    unsigned int  _surfaceID;
    int  _viewportHeight;
    int  _viewportWidth;
}

@property (atomic, readwrite) unsigned int framebufferTexture;
@property (atomic, readonly) void*program;
@property (atomic, readwrite) unsigned int surfaceID;
@property (atomic, readwrite) int viewportHeight;
@property (atomic, readwrite) int viewportWidth;

- (unsigned int)framebufferTexture;
- (id)initWithFragmentCode:(const char *)arg1;
- (void*)program;
- (void)setFramebufferTexture:(unsigned int)arg1;
- (void)setSurfaceID:(unsigned int)arg1;
- (void)setViewportHeight:(int)arg1;
- (void)setViewportWidth:(int)arg1;
- (unsigned int)surfaceID;
- (int)viewportHeight;
- (int)viewportWidth;

@end