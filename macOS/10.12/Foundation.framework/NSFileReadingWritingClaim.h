/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFileReadingWritingClaim : NSFileAccessClaim {
    long long  _readingLinkResolutionCount;
    NSFileAccessNode * _readingLocation;
    unsigned long long  _readingOptions;
    NSURL * _readingURL;
    BOOL  _readingURLDidChange;
    NSFileAccessNode * _rootNode;
    NSFileAccessNode * _writingLocation;
    unsigned long long  _writingOptions;
    NSURL * _writingURL;
    BOOL  _writingURLDidChange;
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
- (id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned long long)arg3 writingURL:(id)arg4 options:(unsigned long long)arg5 claimer:(id)arg6;
- (void)invokeClaimer;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id)arg1;
- (BOOL)shouldCancelInsteadOfWaiting;

@end