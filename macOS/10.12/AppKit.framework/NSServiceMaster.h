/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSServiceMaster : NSObject <NSServiceMasterProto> {
    NSMutableDictionary * _localObjects;
    id  _reserved;
    struct { 
        unsigned int serviceVendingIsActive : 1; 
        unsigned int reserved : 31; 
    }  _serviceFlags;
}

+ (id)copyServiceForAppIdentifier:(id)arg1 messageName:(id)arg2;
+ (id)copyServiceForUUID:(id)arg1;
+ (id)internalRunService:(id)arg1 pboard:(id)arg2 flags:(unsigned long long)arg3 cancelledHint:(const BOOL*)arg4;
+ (id)sharedServiceMaster;

- (void)dealloc;
- (id)init;
- (id)objectForServicePath:(id)arg1;
- (id)objectForServicePath:(id)arg1 app:(id)arg2 doLaunch:(BOOL)arg3 limitDate:(id)arg4;
- (id)objectForServicePath:(id)arg1 app:(id)arg2 doLaunch:(BOOL)arg3 limitDate:(id)arg4 basePortName:(id)arg5;
- (void)registerObject:(id)arg1 withServicePath:(id)arg2;
- (id)serviceListener;
- (void)unregisterObjectWithServicePath:(id)arg1;

@end