/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEONavdServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _getNavigationStateListener;
    NSXPCListener * _monitorDestinationListener;
    GEONavigationServer * _navigationServer;
    NSXPCListener * _pushNavigationStateListener;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end