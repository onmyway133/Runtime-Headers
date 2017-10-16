/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSCNNUpsamplingNearestNode : MPSNNFilterNode {
    double  _scaleFactorX;
    double  _scaleFactorY;
}

@property (nonatomic, readonly) double scaleFactorX;
@property (nonatomic, readonly) double scaleFactorY;

// MPSCNNUpsamplingNearestNode (null)

+ (id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3;

- (id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3;
- (struct FilterGraphNode { int (**x1)(); struct ResourceGraphNode {} *x2; struct ResourceGraphNode {} *x3; struct FilterGraphNode {} *x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode {} **x_5_1_1; unsigned long long x_5_1_2; unsigned long long x_5_1_3; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode {} **x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode {} **x_7_1_1; unsigned long long x_7_1_2; unsigned long long x_7_1_3; } x7; union { id x_8_1_1; id x_8_1_2; id x_8_1_3; bool x_8_1_4; /* Warning: Unrecognized filer type: '}' using 'void*' */ void*x_8_1_5; } x8; }*)newFilterNode;
- (double)scaleFactorX;
- (double)scaleFactorY;

@end
