/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNEmptyAccountCollection : NSObject <CNAccountCollection> {
    NSURL * _baseURL;
    NSString * _tag;
}

@property (atomic, readonly, copy) NSArray *allAccounts;
@property (atomic, readwrite, copy) NSURL *baseURL;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly) <CNAccountDescription> *defaultAccount;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly, copy) NSArray *enabledAccounts;
@property (atomic, readonly) CNObservable *enabledAccountsObservable;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) BOOL includeLocalAccount;
@property (atomic, readonly, copy) NSArray *persistentAccounts;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSString *tag;

- (id)accountWithIdentifier:(id)arg1;
- (id)allAccounts;
- (id)baseURL;
- (void)dealloc;
- (id)defaultAccount;
- (id)enabledAccounts;
- (id)enabledAccountsObservable;
- (BOOL)includeLocalAccount;
- (id)initWithBaseURL:(id)arg1;
- (id)persistentAccounts;
- (void)setBaseURL:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;

@end
