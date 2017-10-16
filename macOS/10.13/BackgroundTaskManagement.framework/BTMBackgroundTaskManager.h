/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackgroundTaskManagement.framework/Versions/A/BackgroundTaskManagement
 */

@interface BTMBackgroundTaskManager : NSObject

+ (id)sharedInstance;

- (id)_init;
- (void)canLoadLaunchdJobWithURL:(id)arg1 completion:(id)arg2;
- (void)canLoadLaunchdJobWithURLs:(id)arg1 completion:(id)arg2;
- (void)canLoadServiceLoginItemWithURL:(id)arg1 completion:(id)arg2;
- (void)canLoadServiceLoginItemWithURLs:(id)arg1 completion:(id)arg2;
- (void)getPromptingEnabledWithCompletion:(id)arg1;
- (void)openLoginItemsWithCompletion:(id)arg1;
- (void)setPromptingEnabled:(BOOL)arg1 completion:(id)arg2;

@end
