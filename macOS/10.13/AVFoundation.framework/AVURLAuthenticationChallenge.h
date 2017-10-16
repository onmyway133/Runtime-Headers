/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {
    NSDictionary * _requestDictionary;
    unsigned long long  _requestID;
    struct __CFDictionary { } * _requestInfo;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) unsigned long long _requestID;
@property (nonatomic, readonly) struct __CFDictionary { }*_requestInfo;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (void)_performCancellationByClient;
- (id)_requestDictionary;
- (unsigned long long)_requestID;
- (struct __CFDictionary { }*)_requestInfo;
- (BOOL)_shouldInformDelegateOfFigCancellation;
- (id)_weakReference;
- (void)dealloc;
- (id)init;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestDictionary:(id)arg3;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestInfo:(struct __CFDictionary { }*)arg3 requestID:(unsigned long long*)arg4;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end
