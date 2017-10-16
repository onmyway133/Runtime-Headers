/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKThumbnailBuilder : NSObject {
    IKCacheManager * _cache;
    IKCacheDatabaseEntry * _cacheEntry;
    id  _cell;
    BOOL  _completed;
    IKImageWrapper * _image;
    BOOL  _modelIsOriginalImage;
    int  _modelSize;
    int  _quality;
    NSDictionary * _quicklookOptions;
    NSURL * _quicklookURL;
    BOOL  _requiresQuicklook;
    BOOL  _supportsConcurrent;
    IKImageWrapper * _thumbnail;
    BOOL  _thumbnailAlreadyExistInCache;
    double  _thumbnailSize;
    NSString * _uid;
    unsigned long long  _version;
}

+ (void)splitBuilders:(id)arg1 intoSequentialList:(id)arg2 andConcurrentList:(id)arg3;
+ (id)thumbnailBuilderQueueWithThumbnails:(id)arg1 withDelegate:(id)arg2 didEndSelector:(SEL)arg3;

- (id)cache;
- (id)cacheEntry;
- (id)cell;
- (void)clear;
- (BOOL)completed;
- (void)computeThumbnail;
- (void)dealloc;
- (id)image;
- (int)modelSize;
- (BOOL)needComputeThumbnail;
- (void)prepareComputeWithCache:(id)arg1 uid:(id)arg2 version:(unsigned long long)arg3 size:(double)arg4 quality:(int)arg5;
- (int)quality;
- (id)quicklookOptions;
- (id)quicklookURL;
- (BOOL)requiresQuicklook;
- (void)setCell:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (BOOL)supportsConcurrent;
- (void)tagImage;
- (id)thumbnail;
- (double)thumbnailSize;
- (id)uid;
- (void)unlockCache;
- (unsigned long long)version;

@end