/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAGrandSlamSigner : NSObject {
    NSString * _appTokenID;
    ACAccount * _appleAccount;
    ACAccount * _grandSlamAccount;
    ACAccountStore * _store;
    bool  _useAltDSID;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) ACAccount *appleAccount;
@property (nonatomic, readonly) ACAccount *grandSlamAccount;
@property (nonatomic) bool useAltDSID;

- (void).cxx_destruct;
- (id)accountStore;
- (id)appleAccount;
- (id)grandSlamAccount;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4;
- (void)setUseAltDSID:(bool)arg1;
- (bool)signURLRequest:(id)arg1;
- (bool)signURLRequest:(id)arg1 isUserInitiated:(bool)arg2;
- (bool)useAltDSID;

@end
