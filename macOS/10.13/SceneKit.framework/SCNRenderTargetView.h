/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNRenderTargetView : SCNView {
    int  _filterChannel;
    SCNPlane * _plane;
    NSOpenGLContext * _sourceContext;
    struct __C3DTexture { } * _texture;
}

@property (nonatomic, readwrite, retain) NSOpenGLContext *sourceContext;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dealloc;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)setFilterChannel:(id)arg1;
- (void)setSourceContext:(id)arg1;
- (void)setTexture:(struct __C3DTexture { }*)arg1;
- (id)sourceContext;

@end
