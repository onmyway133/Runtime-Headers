/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/Versions/A/MPSImage
 */

@interface MPSImageScale : MPSUnaryImageKernel {
    struct MPSScaleTransform { double x1; double x2; double x3; double x4; } * _scaleTransform;
    struct MPSScaleTransform { 
        double scaleX; 
        double scaleY; 
        double translateX; 
        double translateY; 
    }  _transformStorage;
}

@property (nonatomic, readwrite) const struct MPSScaleTransform { double x1; double x2; double x3; double x4; }*scaleTransform;

// MPSImageScale (null)

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (const struct MPSScaleTransform { double x1; double x2; double x3; double x4; }*)scaleTransform;
- (void)setScaleTransform:(const struct MPSScaleTransform { double x1; double x2; double x3; double x4; }*)arg1;

@end
