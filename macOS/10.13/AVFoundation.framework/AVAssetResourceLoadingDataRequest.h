/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAssetResourceLoadingDataRequest : NSObject {
    AVAssetResourceLoadingDataRequestInternal * _dataRequest;
}

@property (nonatomic, readonly) long long currentOffset;
@property (nonatomic, readonly) long long requestedLength;
@property (nonatomic, readonly) long long requestedOffset;
@property (nonatomic, readonly) BOOL requestsAllDataToEndOfResource;

- (id)_loadingRequest;
- (struct __CFDictionary { }*)_requestInfo;
- (long long)currentOffset;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(BOOL)arg4 canSupplyIncrementalDataImmediately:(BOOL)arg5;
- (long long)requestedLength;
- (long long)requestedOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (void)respondWithData:(id)arg1;

@end
