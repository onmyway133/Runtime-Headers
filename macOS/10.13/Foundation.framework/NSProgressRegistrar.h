/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSProgressRegistrar : NSObject <NSProgressRegistrar, NSXPCListenerDelegate> {
    NSMutableSet * _pendingFileSubscriberIDs;
    NSMutableDictionary * _publisherTransactionsByID;
    NSMutableDictionary * _publishersByID;
    NSObject<OS_dispatch_queue> * _queue;
    NSFileAccessNode * _rootFileAccessNode;
    NSMutableDictionary * _subscriberTransactionsByID;
    NSMutableDictionary * _subscribersByID;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)_getRemoteProcessWithIdentifier:(int)arg1 canReadItemAtURL:(id)arg2 completionHandler:(id)arg3;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(id)arg7;
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(id)arg5;
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(id)arg5;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4;
- (oneway void)removePublisherForID:(id)arg1;
- (oneway void)removeSubscriberForID:(id)arg1;

@end
