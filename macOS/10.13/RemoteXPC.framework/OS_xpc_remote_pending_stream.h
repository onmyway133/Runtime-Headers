/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteXPC.framework/Versions/A/RemoteXPC
 */

@interface OS_xpc_remote_pending_stream : NSObject {
    OS_xpc_remote_channel * channel;
    id  completion_handler;
    int  direction;
    int  error;
    NSObject<OS_dispatch_io> * io;
    OS_xpc_remote_pending_stream * next;
    unsigned long long  stream_id;
}

- (void).cxx_destruct;

@end
