/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface myDeli : NSObject <NSURLSessionDelegate> {
    NSError * _errorResult;
    BOOL  _hasCanceled;
    BOOL  _receivedResponse;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) BOOL hasCanceled;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL receivedResponse;
@property (atomic, readwrite, retain) NSError *someError;
@property (atomic, readonly) Class superclass;

- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (BOOL)hasCanceled;
- (id)init;
- (BOOL)receivedResponse;
- (void)setHasCanceled:(BOOL)arg1;
- (void)setReceivedResponse:(BOOL)arg1;
- (void)setSomeError:(id)arg1;
- (id)someError;

@end
