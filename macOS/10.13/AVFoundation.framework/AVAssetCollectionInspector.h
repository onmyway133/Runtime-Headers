/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAssetCollectionInspector : AVFigObjectInspector <NSCopying> {
    struct OpaqueFigAssetCollection { } * _figCollection;
}

@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) NSString *type;

- (void)_cleanUpUncollectables;
- (id)_figAssetCreationOptionsFromAVFOptions:(id)arg1;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (unsigned long long)assetCount;
- (struct OpaqueFigAsset { }*)copyFigAssetAtIndex:(unsigned long long)arg1 options:(id)arg2 figErr:(int*)arg3;
- (struct OpaqueFigAsset { }*)copyFigAssetWithURL:(id)arg1 options:(id)arg2 figErr:(int*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithFigCollection:(struct OpaqueFigAssetCollection { }*)arg1;
- (id)type;

@end
