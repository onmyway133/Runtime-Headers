/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalPerformanceShaders.framework/Versions/A/MetalPerformanceShaders
 */

@interface MPSImageTransformSequence : MPSImageTransform <NSCopying> {
    <MTLDevice> * _device;
}

@property (nonatomic, readonly) <MTLDevice> *device;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)device;
- (id)initWithConversionNodeList:(struct ConversionNode { int (**x1)(); long long x2; struct ConversionNode {} *x3; unsigned char x4; unsigned char x5; unsigned char x6; }*)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 transformArray:(id)arg2;
- (id)initWithDevice:(id)arg1 transforms:(id*)arg2 count:(unsigned long long)arg3;

@end