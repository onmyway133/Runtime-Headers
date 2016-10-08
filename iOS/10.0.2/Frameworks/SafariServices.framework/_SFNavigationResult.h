/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationResult : NSObject {
    NSURL * _URL;
    LSApplicationProxy * _externalApplication;
    long long  _externalApplicationCategory;
    long long  _type;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) LSApplicationProxy *externalApplication;
@property (nonatomic, readonly) long long externalApplicationCategory;
@property (nonatomic, readonly) long long type;

+ (id)resultOfLoadingRequest:(id)arg1 isMainFrame:(bool)arg2 disallowRedirectToExternalApps:(bool)arg3;
+ (id)resultOfType:(long long)arg1 withURL:(id)arg2;
+ (id)resultWithRedirectToExternalURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 externalApplication:(id)arg3;
- (id)externalApplication;
- (long long)externalApplicationCategory;
- (long long)type;

@end
