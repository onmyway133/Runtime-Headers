/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAssetResourceLoaderURLSessionDataDelegate : NSObject <NSURLSessionDataDelegate> {
    AVWeakReference * _weakReferenceToAsset;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id)arg4;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (void)invokeFigAssetDelegateWithBlock:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
