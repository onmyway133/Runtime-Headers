/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSExternalCNNUnary : MPSExternalPluginBase <MPSExternalCNNUnary>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

// MPSExternalCNNUnary (null)

- (unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const struct { unsigned long long x1; unsigned long long x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; } x3; unsigned long long x4; }*)arg5 destinationTexture:(id)arg6 destinationInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; } x_4_1_1; struct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; } x_4_1_2; } x4; }*)arg7;
- (unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const struct { struct MPSImageInfo { id x_1_1_1; struct MPSPixelInfo {} x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; id x_1_1_5; } x1; struct MPSImageInfo { id x_2_1_1; struct MPSPixelInfo {} x_2_1_2; unsigned long long x_2_1_3; unsigned long long x_2_1_4; id x_2_1_5; } x2; struct MPSImageInfo { id x_3_1_1; struct MPSPixelInfo {} x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; id x_3_1_5; } x3; struct { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; } x_4_1_1; struct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; } x_4_1_2; } x4; struct { long long x_5_1_1; long long x_5_1_2; long long x_5_1_3; } x5; unsigned long long x6; }*)arg4;

@end
