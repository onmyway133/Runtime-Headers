/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSQueryContext : NSObject

+ (id)defaultContext;

- (void)clearCaches;
- (id)init;
- (void)resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 completionHandler:(id)arg3;

// _LSQueryContext (Internal)

- (void)_resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 synchronously:(BOOL)arg3 XPCConnection:(id)arg4 completionHandler:(id)arg5;

// _LSQueryContext (Private)

- (id)_init;

// _LSQueryContext (SynchronousResolution)

- (void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(id)arg2;
- (id)resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 error:(id*)arg3;

@end
