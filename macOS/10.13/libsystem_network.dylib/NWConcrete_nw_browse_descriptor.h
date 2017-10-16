/* Generated by RuntimeBrowser
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {
    char * bonjour_domain;
    char * bonjour_type;
    id  browse_block;
    NSObject<OS_dispatch_data> * custom_data;
    NSObject<OS_nw_interface> * interface;
    int  type;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end