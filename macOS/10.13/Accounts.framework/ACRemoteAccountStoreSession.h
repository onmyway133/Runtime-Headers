/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
 */

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    NSXPCConnection * _connection;
    BOOL  _hasConfiguredRemoteAccountStore;
    BOOL  _notificationsEnabled;
    NSString * _spoofedBundleID;
    BOOL  _xpcConnectionHasBeenInvalidated;
}

@property (nonatomic, readwrite) BOOL notificationsEnabled;
@property (nonatomic, readwrite, copy) NSString *spoofedBundleID;

- (void).cxx_destruct;
- (void)_configureConnection;
- (void)_configureRemoteAccountStoreIfNecessary;
- (id)_connection;
- (void)connect;
- (void)disconnect;
- (id)initWithXPCConnection:(id)arg1;
- (BOOL)notificationsEnabled;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (void)setSpoofedBundleID:(id)arg1;
- (id)spoofedBundleID;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg1;

@end