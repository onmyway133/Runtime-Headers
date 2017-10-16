/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCProvider_SceneKit : QCImageProvider {
    struct CGColorSpace { } * _colorSpace;
    QCRegion * _domainOfDefinition;
    struct __C3DImage { } * _image;
    NSArray * _pixelFormats;
    struct __C3DTextureSampler { } * _sampler;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSArray * _targets;
}

+ (id)createProviderWithSource:(id)arg1 options:(id)arg2;
+ (BOOL)isCompatibleWithSource:(id)arg1 sourceMD5:(struct { unsigned char x1[16]; }*)arg2;

- (struct CGColorSpace { }*)colorSpace;
- (id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 colorSpace:(struct CGColorSpace { }*)arg5 options:(id)arg6;
- (id)createTextureBufferForManager:(id)arg1 withFormat:(id)arg2 target:(unsigned int)arg3 transformation:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 colorSpace:(struct CGColorSpace { }*)arg6 options:(id)arg7;
- (void)dealloc;
- (id)domainOfDefinition;
- (void)finalize;
- (BOOL)hasAlpha;
- (id)initWithC3DImage:(struct __C3DImage { }*)arg1 options:(id)arg2;
- (id)nativePixelFormat;
- (unsigned int)nativeTextureTarget;
- (id)sourceRepresentation;
- (id)sourceRepresentationType;
- (id)supportedPixelBufferFormatsForManager:(id)arg1;
- (id)supportedTextureBufferFormatsForManager:(id)arg1;
- (id)supportedTextureBufferTargetsForManager:(id)arg1;

@end
