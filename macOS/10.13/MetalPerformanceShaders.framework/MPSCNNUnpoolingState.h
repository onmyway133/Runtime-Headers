/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSCNNUnpoolingState : MPSState {
    unsigned long long  _imageHeight;
    unsigned long long  _imageWidth;
}

@property (nonatomic, readonly) unsigned long long imageHeight;
@property (nonatomic, readonly) unsigned long long imageWidth;

// MPSCNNUnpoolingState (null)

- (unsigned long long)imageHeight;
- (unsigned long long)imageWidth;
- (id)initWithResource:(id)arg1 cache:(struct MPSAutoCache { id x1; }*)arg2 imageWidth:(unsigned long long)arg3 imageHeight:(unsigned long long)arg4;

@end