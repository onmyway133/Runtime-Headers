/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKPlatform : NSObject {
    BOOL  _isMac;
    BOOL  _lowPerformanceDevice;
    unsigned long long  _memSize;
    int  _numCPUs;
    BOOL  _proceduralRoadAlpha;
    BOOL  _supports3DBuildingStrokes;
    BOOL  _supportsARMode;
    BOOL  _supportsBuildingStrokes;
    BOOL  _supportsCoastlineGlows;
    BOOL  _supportsPerFragmentLighting;
    BOOL  _useCheapTrafficShader;
}

@property (nonatomic, readonly) BOOL canMakeSharingThumbnails;
@property (nonatomic, readonly) BOOL isPad;
@property (nonatomic, readonly) BOOL lowPerformanceDevice;
@property (nonatomic, readonly) unsigned long long memorySize;
@property (nonatomic, readonly) BOOL proceduralRoadAlpha;
@property (nonatomic, readonly) unsigned char processingQueueWidth;
@property (nonatomic, readonly) BOOL roadsWithSimpleLineMeshesAvailable;
@property (nonatomic, readonly) double routeLineSimplificationEpsilon;
@property (nonatomic, readonly) BOOL shouldDrawWhenReady;
@property (nonatomic, readonly) BOOL shouldLayoutLabelsInParallel;
@property (nonatomic, readonly) BOOL shouldPregenerateLabelGlyphs;
@property (nonatomic, readonly) BOOL shouldStyleLabelsInParallel;
@property (nonatomic, readonly) BOOL supports3DBuildingStrokes;
@property (nonatomic, readonly) BOOL supports3DBuildings;
@property (nonatomic, readonly) BOOL supportsARMode;
@property (nonatomic, readonly) BOOL supportsBuildingShadows;
@property (nonatomic, readonly) BOOL supportsBuildingStrokes;
@property (nonatomic, readonly) BOOL supportsCoastlineGlows;
@property (nonatomic, readonly) BOOL supportsHiResBuildings;
@property (nonatomic, readonly) BOOL supportsHiResRTT;
@property (nonatomic, readonly) BOOL supportsPerFragmentLighting;
@property (nonatomic, readonly) unsigned char tileDecodeQueueWidth;
@property (nonatomic, readonly) unsigned int tilePrefetchNumberOfScreens;
@property (nonatomic, readonly) BOOL useCheapTrafficShader;

+ (id)sharedPlatform;

- (unsigned long long)_calculateMemSize;
- (void)_determineHardware;
- (BOOL)canMakeSharingThumbnails;
- (void)dealloc;
- (id)init;
- (BOOL)isPad;
- (BOOL)lowPerformanceDevice;
- (unsigned long long)memorySize;
- (BOOL)proceduralRoadAlpha;
- (unsigned char)processingQueueWidth;
- (BOOL)roadsWithSimpleLineMeshesAvailable;
- (double)routeLineSimplificationEpsilon;
- (BOOL)shouldDrawWhenReady;
- (BOOL)shouldLayoutLabelsInParallel;
- (BOOL)shouldPregenerateLabelGlyphs;
- (BOOL)shouldStyleLabelsInParallel;
- (BOOL)supports3DBuildingStrokes;
- (BOOL)supports3DBuildings;
- (BOOL)supportsARMode;
- (BOOL)supportsBuildingShadows;
- (BOOL)supportsBuildingStrokes;
- (BOOL)supportsCoastlineGlows;
- (BOOL)supportsHiResBuildings;
- (BOOL)supportsHiResRTT;
- (BOOL)supportsPerFragmentLighting;
- (unsigned char)tileDecodeQueueWidth;
- (unsigned long long)tileMaximumLimit:(unsigned long long)arg1;
- (unsigned int)tilePrefetchNumberOfScreens;
- (BOOL)useCheapTrafficShader;

@end
