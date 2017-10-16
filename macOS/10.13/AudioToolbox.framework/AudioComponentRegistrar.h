/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate> {
    struct AudioComponentRegistrarImpl { bool x1; bool x2; bool x3; struct RegistrarService { id x_4_1_1; id x_4_1_2; struct RegistrarService { id x_3_2_1; id x_3_2_2; id x_3_2_3; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x_3_2_4; double x_3_2_5; int x_3_2_6; out unsigned char x_3_2_7; out void*x_3_2_8; void*x_3_2_9; out in void*x_3_2_10; in void*x_3_2_11; oneway void*x_3_2_12; BOOL x_3_2_13; void*x_3_2_14; out const void*x_3_2_15; struct shared_ptr<APComponent> {} *x_3_2_16; struct shared_ptr<APComponent> {} *x_3_2_17; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> {} *x_18_3_1; } x_3_2_18; bool x_3_2_19; } x_4_1_3; struct PurgeableDataWrapper { struct function<NSData *()>={type=[32C] {} x_4_2_1; struct __base<NSData *()> {} *x_4_2_2; } x_4_1_4; id x_4_1_5; struct PurgeableDataWrapper { struct function<NSData *()>={type=[32C] {} x_6_2_1; struct __base<NSData *()> {} *x_6_2_2; } x_4_1_6; id x_4_1_7; struct unique_ptr<AudioComponentPluginScanner, std::__1::default_delete<AudioComponentPluginScanner> > { struct __compressed_pair<AudioComponentPluginScanner *, std::__1::default_delete<AudioComponentPluginScanner> > { struct AudioComponentPluginScanner {} *x_1_3_1; } x_8_2_1; } x_4_1_8; } x4; } * mImpl;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)initForMode:(BOOL)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resumeListeners;

@end
