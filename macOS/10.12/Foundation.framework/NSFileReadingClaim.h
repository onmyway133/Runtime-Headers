/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFileReadingClaim : NSFileAccessClaim {
    long long  _linkResolutionCount;
    NSFileAccessNode * _location;
    unsigned long long  _options;
    NSFileAccessNode * _rootNode;
    NSURL * _url;
    BOOL  _urlDidChange;
}

+ (BOOL)supportsSecureCoding;

- (id)allURLs;
- (BOOL)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id)arg2;
- (void)granted;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(id)arg4;
- (void)invokeClaimer;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(id)arg1;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (BOOL)shouldCancelInsteadOfWaiting;

@end
