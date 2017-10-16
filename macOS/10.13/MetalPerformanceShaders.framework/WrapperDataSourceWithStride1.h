/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface WrapperDataSourceWithStride1 : NSObject <MPSCNNConvolutionDataSource> {
    <MPSCNNConvolutionDataSource> * _dataSource;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

// WrapperDataSourceWithStride1 (null)

- (float*)biasTerms;
- (unsigned int)dataType;
- (void)dealloc;
- (id)descriptor;
- (id)initWithDataSource:(id)arg1;
- (id)label;
- (BOOL)load;
- (void)purge;
- (void*)weights;

@end