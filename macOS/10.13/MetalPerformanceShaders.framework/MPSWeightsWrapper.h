/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource> {
    MPSCNNConvolutionDescriptor * _descriptor;
    struct NeuronInfo { 
        int type; 
        float a; 
        float b; 
        NSData *aData; 
    }  _info;
    <MPSCNNConvolutionDataSource> * _source;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

// MPSWeightsWrapper (null)

- (float*)biasTerms;
- (unsigned int)dataType;
- (void)dealloc;
- (id)descriptor;
- (id)initWithSource:(id)arg1 neuronInfo:(/* Warning: unhandled struct encoding: '{NeuronInfo=iff@}' */ struct NeuronInfo { int x1; float x2; float x3; id x4; })arg2;
- (id)label;
- (BOOL)load;
- (float*)lookupTableForUInt8Kernel;
- (void)purge;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;
- (void*)weights;

@end
