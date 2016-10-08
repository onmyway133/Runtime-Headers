/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageThresholdBinaryInverse : MPSUnaryImageKernel {
    struct { 
        float threshold_value; 
        float max_value; 
        float matrix[3]; 
    }  filterInfo;
}

@property (nonatomic, readonly) float maximumValue;
@property (nonatomic, readonly) float thresholdValue;
@property (nonatomic, readonly) const float*transform;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (id)debugDescription;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 thresholdValue:(float)arg2 maximumValue:(float)arg3 linearGrayColorTransform:(const float*)arg4;
- (float)maximumValue;
- (float)thresholdValue;
- (const float*)transform;

@end
