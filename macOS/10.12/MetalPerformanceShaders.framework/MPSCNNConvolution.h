/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalPerformanceShaders.framework/Versions/A/MetalPerformanceShaders
 */

@interface MPSCNNConvolution : MPSCNNKernel {
    <MTLBuffer> * _bias;
    unsigned long long  _featureChannelsLayout;
    unsigned long long  _flags;
    unsigned long long  _groups;
    unsigned long long  _inputFeatureChannels;
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelWidth;
    unsigned long long  _layout;
    MPSCNNNeuron * _neuron;
    unsigned long long  _outputFeatureChannels;
    unsigned long long  _strideInPixelsX;
    unsigned long long  _strideInPixelsY;
    <MTLBuffer> * _weights;
    <MTLBuffer> * _weightsArray;
}

@property (nonatomic, readonly) unsigned long long featureChannelsLayout;
@property (nonatomic, readonly) unsigned long long groups;
@property (nonatomic, readonly) unsigned long long inputFeatureChannels;
@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long kernelWidth;
@property (nonatomic, readonly) MPSCNNNeuron *neuron;
@property (nonatomic, readonly) unsigned long long outputFeatureChannels;
@property (nonatomic, readonly) unsigned long long strideInPixelsX;
@property (nonatomic, readonly) unsigned long long strideInPixelsY;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (unsigned long long)featureChannelsLayout;
- (unsigned long long)groups;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5;
- (unsigned long long)inputFeatureChannels;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (id)neuron;
- (unsigned long long)outputFeatureChannels;
- (unsigned long long)strideInPixelsX;
- (unsigned long long)strideInPixelsY;

@end
