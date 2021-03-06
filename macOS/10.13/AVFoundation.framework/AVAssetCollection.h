/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAssetCollection : NSObject <AVAsynchronousKeyValueLoading> {
    AVAssetCollectionInternal * _internal;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) NSString *type;

+ (id)assetCollectionWithURL:(id)arg1 options:(id)arg2;

- (id)_avAssetCollectionTypeFromFigType:(id)arg1;
- (id)_avassetWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (id)_avassetWithFigAsset:(struct OpaqueFigAsset { }*)arg1 optionalCreationURL:(id)arg2;
- (id)_inspectorLoader;
- (void)_willDeallocOrFinalize;
- (unsigned long long)assetCount;
- (id)assetsWithIndexes:(id)arg1 options:(id)arg2;
- (void)cancelLoading;
- (void)dealloc;
- (void)finalize;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)type;

// AVAssetCollection (AVAssetCollection_Internal)

- (id)URL;
- (struct OpaqueFigAsset { }*)_copyFigAssetForURL:(id)arg1 options:(id)arg2 figErr:(int*)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)weakReference;

// AVAssetCollection (AVAssetCollection_Private)

+ (id)_URLByRemovingFragmentFromURL:(id)arg1;
+ (id)_fragmentParamsFromURL:(id)arg1;
+ (id)baseCollectionURLFromURL:(id)arg1;
+ (unsigned long long)indexHintFromURL:(id)arg1;
+ (BOOL)isURLForAssetInCollection:(id)arg1;
+ (BOOL)isURLForCollection:(id)arg1;

@end
