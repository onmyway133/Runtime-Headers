/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCProvider_CoreGraphics : QCImageProvider {
    struct CGColor { } * _backgroundColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGImage { } * _cachedImage;
    struct CGColorSpace { } * _colorSpace;
    QCRegion * _domainOfDefinition;
    BOOL  _hasAlpha;
    double  _imageHeight;
    double  _imageWidth;
    unsigned long long  _index;
    struct { 
        unsigned char bytes[16]; 
    }  _md5;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    QCPixelFormat * _pixelFormat;
    NSArray * _pixelFormats;
    void * _source;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

+ (id)createProviderWithSource:(id)arg1 options:(id)arg2;
+ (BOOL)isCompatibleWithSource:(id)arg1 sourceMD5:(struct { unsigned char x1[16]; }*)arg2;

- (void)_finalize_QCProvider_CoreGraphics;
- (struct CGColorSpace { }*)colorSpace;
- (id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 colorSpace:(struct CGColorSpace { }*)arg5 options:(id)arg6;
- (void)dealloc;
- (id)domainOfDefinition;
- (void)finalize;
- (BOOL)hasAlpha;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)imageTransform;
- (id)initWithCGSource:(void*)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithNSBitmapImageRep:(id)arg1 options:(id)arg2;
- (id)initWithNSImage:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)nativePixelFormat;
- (struct { unsigned char x1[16]; })providerMD5;
- (id)sourceRepresentation;
- (id)sourceRepresentationType;
- (id)supportedPixelBufferFormatsForManager:(id)arg1;
- (BOOL)supportsColorMatching;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;

// QCProvider_CoreGraphics (QCImage)

- (id)createOptimizedProviderWithTransformation:(id)arg1 cropping:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
