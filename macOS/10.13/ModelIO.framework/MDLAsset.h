/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
 */

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration> {
    NSURL * _URL;
    double  __timeCodesPerSecond;
    <MDLObjectContainerComponent> * _animations;
    <MDLMeshBufferAllocator> * _bufferAllocator;
    NSMapTable * _components;
    double  _endTime;
    double  _frameInterval;
    <MDLObjectContainerComponent> * _masters;
    NSMutableArray * _objects;
    <MDLAssetResolver> * _resolver;
    double  _startTime;
    void _upAxis;
    MDLVertexDescriptor * _vertexDescriptor;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly) struct MDLAABB { } _bounds;
@property (nonatomic, readwrite) double _timeCodesPerSecond;
@property (nonatomic, readwrite, retain) <MDLObjectContainerComponent> *animations;
@property (nonatomic, readonly) struct { } boundingBox;
@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *bufferAllocator;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readwrite) double endTime;
@property (nonatomic, readwrite) double frameInterval;
@property (nonatomic, readwrite, retain) <MDLObjectContainerComponent> *masters;
@property (nonatomic, readwrite, retain) <MDLAssetResolver> *resolver;
@property (nonatomic, readwrite) double startTime;
@property (nonatomic, readwrite) void upAxis;
@property (nonatomic, readonly, retain) MDLVertexDescriptor *vertexDescriptor;

// Image: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO

+ (BOOL)canExportFileExtension:(id)arg1;
+ (BOOL)canImportFileExtension:(id)arg1;
+ (id)placeLightProbesWithDensity:(float)arg1 heuristic:(long long)arg2 usingIrradianceDataSource:(id)arg3;

- (void).cxx_destruct;
- (id)URL;
- (struct MDLAABB { })_bounds;
- (void)_commonInit;
- (void)_conformVertexBuffers:(id)arg1 error:(id*)arg2;
- (double)_timeCodesPerSecond;
- (void)addObject:(id)arg1;
- (id)animations;
- (struct { })boundingBox;
- (struct { })boundingBoxAtTime:(double)arg1;
- (id)bufferAllocator;
- (id)childObjectsOfClass:(Class)arg1;
- (id)componentConformingToProtocol:(id)arg1;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (double)endTime;
- (void)enumerateChildObjectsOfClass:(Class)arg1 usingBlock:(id)arg2 stopPointer:(BOOL*)arg3;
- (BOOL)exportAssetToURL:(id)arg1;
- (BOOL)exportAssetToURL:(id)arg1 error:(id*)arg2;
- (double)frameInterval;
- (id)init;
- (id)initWithBufferAllocator:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 preserveIndexing:(BOOL)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(BOOL)arg4 error:(id*)arg5;
- (void)loadTextures;
- (id)masters;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objects;
- (void)removeObject:(id)arg1;
- (void)resolveTextures;
- (id)resolver;
- (void)setAnimations:(id)arg1;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (void)setEndTime:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setMasters:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setResolver:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setUpAxis;
- (void)set_timeCodesPerSecond:(double)arg1;
- (double)startTime;
- (void)upAxis;
- (id)vertexDescriptor;

// Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit

// MDLAsset (SCNModelIO)

+ (id)assetWithSCNNode:(id)arg1;
+ (id)assetWithSCNNode:(id)arg1 bufferAllocator:(id)arg2;
+ (id)assetWithSCNScene:(id)arg1;
+ (id)assetWithSCNScene:(id)arg1 bufferAllocator:(id)arg2;

@end
