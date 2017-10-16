/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKMipmapImage : NSObject {
    unsigned int  _dirty;
    unsigned int  _isReference;
    unsigned int  _mark;
    IKMipmapItem * _mipmaps;
    unsigned int  _originalImageIsInvalid;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalImageSizeCache;
    IKMipmapItem * _originalMipmap;
    IKMipmapItem * _varyingMipmap;
}

- (void)_cacheMipmapSize:(struct CGSize { double x1; double x2; })arg1 fromModel:(id)arg2;
- (void)_cleanUp;
- (id)_fastMipmapItemForSize:(struct CGSize { double x1; double x2; })arg1 forOpenGL:(BOOL)arg2 useMinimumQualityThreshold:(BOOL)arg3;
- (void)_mipmapCommonInit;
- (BOOL)allMipmapItemsAreValid;
- (BOOL)atLeastOneMipmapItemIsValid;
- (int)bestMipmapIndexToValidateForSize:(int)arg1;
- (void)checkAndMarkMipmapAsInvalid;
- (void)clearMark;
- (BOOL)containsMipmapItem:(id)arg1;
- (void)dealloc;
- (id)fastImageForSize:(struct CGSize { double x1; double x2; })arg1 forGLRendering:(BOOL)arg2;
- (id)fastMipmapItemForSize:(struct CGSize { double x1; double x2; })arg1 forGLRendering:(BOOL)arg2;
- (id)fastMipmapItemForSize:(int)arg1 forOpenGL:(BOOL)arg2 useMinimumQualityThreshold:(BOOL)arg3;
- (id)fastMipmapItemWithExactSize:(struct CGSize { double x1; double x2; })arg1;
- (id)fastestImageForSize:(struct CGSize { double x1; double x2; })arg1 forGLRendering:(BOOL)arg2;
- (id)fastestMipmapItemForSize:(struct CGSize { double x1; double x2; })arg1 forGLRendering:(BOOL)arg2;
- (void)finalize;
- (void)freeAllCaches;
- (void)freeOriginalImageCache;
- (void)freeTemporaryCache;
- (id)highestMipmapItem;
- (int)highestMipmapItemIndex;
- (id)image;
- (long long)indexOfMipmapItem:(id)arg1;
- (id)init;
- (id)initWithMipmapSizes:(id)arg1 VMUsagePolicy:(id)arg2;
- (void)integrateReferenceInstance:(id)arg1;
- (void)invalidateMipMaps;
- (void)invalidateOriginalImageSizeCache;
- (BOOL)isDirty;
- (id)lockMipmapAtIndex:(int)arg1;
- (void)mark;
- (BOOL)marked;
- (id)mipmapItemAtIndex:(long long)arg1;
- (id*)mipmapItems;
- (id)mipmapWithSize:(int)arg1;
- (id)niceImageForSize:(struct CGSize { double x1; double x2; })arg1 forGLRendering:(BOOL)arg2 cacheIt:(BOOL)arg3;
- (id)niceMipmapItemForSize:(struct CGSize { double x1; double x2; })arg1 forGLRendering:(BOOL)arg2 cacheIt:(BOOL)arg3;
- (id)nicestImageForSize:(struct CGSize { double x1; double x2; })arg1 forGLRendering:(BOOL)arg2 cacheIt:(BOOL)arg3;
- (id)nicestMipmapItemForSize:(struct CGSize { double x1; double x2; })arg1 forGLRendering:(BOOL)arg2 cacheIt:(BOOL)arg3;
- (float)originalAspectRatio;
- (BOOL)originalImageIsInvalid;
- (struct CGSize { double x1; double x2; })originalImageSize;
- (struct CGSize { double x1; double x2; })originalImageSizeCache;
- (id)originalItem;
- (BOOL)preloadMipmapsWithQuality:(int)arg1;
- (id)referenceInstance;
- (void)referenceWillDie;
- (void)setDirty:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 forMipmapSize:(int)arg2;
- (void)setImageWithoutInvalidate:(id)arg1;
- (void)setIsReference:(BOOL)arg1;
- (void)setMipmapSizes:(id)arg1;
- (void)setMipmapVMUsagePolicy:(id)arg1;
- (void)setOriginalImageIsInvalid:(BOOL)arg1;
- (void)setOriginalImageSizeCache:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)shouldUseOriginalImageToCacheNiceImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)unlockMipmapItem:(id)arg1;
- (id)validMipmapItems;
- (BOOL)validateMipmap:(id)arg1 withModel:(id)arg2 withQuality:(int)arg3;
- (BOOL)validateMipmap:(id)arg1 withQuality:(int)arg2;
- (BOOL)validateMipmapAtIndex:(int)arg1 withQuality:(int)arg2;
- (id)varyingMipmap;
- (BOOL)varyingMipmapIsValidAndMatchSize:(struct CGSize { double x1; double x2; })arg1 andQuality:(int)arg2;

@end
