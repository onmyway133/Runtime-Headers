/* Generated by RuntimeBrowser
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_path_observer : NSObject <OS_nw_path_observer> {
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_fd_wrapper> * fd;
    NSObject<OS_nw_dictionary> * known_paths;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    void * source;
    id  update_block;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
