/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
 */

@interface CLTilesManagerClient : NSObject {
    CLTilesManagerClientInternal * _internal;
}

+ (void)initialize;
+ (id)sharedClient;

- (void)dealloc;
- (BOOL)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(id)arg3;
- (id)init;
- (void)onNotificationReceived:(id)arg1;
- (BOOL)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(id)arg3;
- (void)reconnect;
- (BOOL)registerTo:(id)arg1 onQueue:(id)arg2 block:(id)arg3;
- (void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(BOOL)arg2;
- (BOOL)unregisterFrom:(id)arg1;

@end
