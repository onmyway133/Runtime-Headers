/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppInstallation : NSObject <NSCopying> {
    LSApplicationWorkspace * __applicationWorkspace;
    NSString * _bundleIdentifier;
    UIImage * _icon;
    unsigned long long  _installState;
    double  _percentComplete;
    LSApplicationProxy * _proxy;
    double  _startTime;
}

@property (nonatomic, readonly) LSApplicationWorkspace *_applicationWorkspace;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic) unsigned long long installState;
@property (nonatomic, readonly) bool installed;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic) double percentComplete;
@property (nonatomic, readonly) NSString *pluginBundleIdentifier;
@property (nonatomic, retain) LSApplicationProxy *proxy;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (id)_applicationWorkspace;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)icon;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 startTime:(double)arg2;
- (unsigned long long)installState;
- (bool)installed;
- (id)localizedDisplayName;
- (double)percentComplete;
- (id)pluginBundleIdentifier;
- (id)proxy;
- (void)setInstallState:(unsigned long long)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setProxy:(id)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
