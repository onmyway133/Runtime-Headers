/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOURLManifestListener : NSObject {
    NSMutableArray * _handlers;
    NSLock * _lock;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

+ (id)sharedListener;

- (void).cxx_destruct;
- (void)_finish:(BOOL)arg1;
- (id)init;
- (void)waitForManifestWithCallback:(id)arg1;

@end
