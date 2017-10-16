/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/Versions/A/MPSImage
 */

@interface MPSImageArithmetic : MPSBinaryImageKernel {
    int  _arithmeticType;
    float  _bias;
    float  _primaryScale;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _primaryStrideInPixels;
    float  _secondaryScale;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _secondaryStrideInPixels;
}

@property (nonatomic, readwrite) float bias;
@property (nonatomic, readwrite) float primaryScale;
@property (nonatomic, readwrite) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } primaryStrideInPixels;
@property (nonatomic, readwrite) float secondaryScale;
@property (nonatomic, readwrite) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } secondaryStrideInPixels;

// MPSImageArithmetic (null)

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_4_1_1; int (*x_4_1_2)(); unsigned long long x_4_1_3; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_5_1_1; int (*x_5_1_2)(); unsigned long long x_5_1_3; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_6_1_1; int (*x_6_1_2)(); unsigned long long x_6_1_3; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_7_1_1; int (*x_7_1_2)(); unsigned long long x_7_1_3; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_8_1_1; int (*x_8_1_2)(); unsigned long long x_8_1_3; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_9_1_1; int (*x_9_1_2)(); unsigned long long x_9_1_3; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_10_1_1; int (*x_10_1_2)(); unsigned long long x_10_1_3; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_11_1_1; int (*x_11_1_2)(); unsigned long long x_11_1_3; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_12_1_1; int (*x_12_1_2)(); unsigned long long x_12_1_3; } x12; }*)libraryInfo;

- (float)bias;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 arithmeticType:(int)arg2;
- (float)primaryScale;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })primaryStrideInPixels;
- (float)secondaryScale;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })secondaryStrideInPixels;
- (void)setBias:(float)arg1;
- (void)setPrimaryScale:(float)arg1;
- (void)setPrimaryStrideInPixels:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setSecondaryScale:(float)arg1;
- (void)setSecondaryStrideInPixels:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;

@end
