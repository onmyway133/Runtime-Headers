/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOProgressForSendingOverXPC : _GEOMirroredProgress {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_xpc_object> * _endpoint;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _remoteConnections;
}

@property (atomic, readonly) NSObject<OS_xpc_object> *endpoint;

- (void).cxx_destruct;
- (void)_broadcastOverXPCConnections:(id)arg1;
- (void)_connectionDidInvalidate;
- (void)_update;
- (void)cancel;
- (void)dealloc;
- (id)endpoint;
- (id)initWithMirroredProgress:(id)arg1;
- (id)initWithMirroredProgress:(id)arg1 endpoint:(id)arg2;

@end
