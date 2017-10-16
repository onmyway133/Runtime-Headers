/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSXPCInterface : NSObject {
    Protocol * _protocol;
    id  _reserved1;
    void * _reserved2;
}

@property (atomic, readwrite) Protocol *protocol;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (id)interfaceWithProtocol:(id)arg1;
+ (id)signatureForBlock:(id)arg1;

- (id)_allowedClassesForSelector:(SEL)arg1 reply:(BOOL)arg2;
- (Class)_customSubclass;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg1;
- (BOOL)_hasProxiesInArgumentsOfSelector:(SEL)arg1;
- (BOOL)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg1;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(BOOL)arg3;
- (void)_methodSignature:(id*)arg1 allowedClasses:(id*)arg2 forSelector:(SEL)arg3 isReply:(BOOL)arg4;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (unsigned long long)_remoteVersion;
- (unsigned long long)_respondsToRemoteSelector:(SEL)arg1;
- (Class)_returnClassForSelector:(SEL)arg1;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (id)protocol;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
- (void)setProtocol:(id)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (void)setVersion:(unsigned long long)arg1 forSelector:(SEL)arg2;
- (void)set_remoteVersion:(unsigned long long)arg1;
- (unsigned long long)version;
- (unsigned long long)versionForSelector:(SEL)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList

// NSXPCInterface (SFLService)

+ (id)_SFL_serviceInterface;

// Image: /System/Library/PrivateFrameworks/BackgroundTaskManagement.framework/Versions/A/BackgroundTaskManagement

// NSXPCInterface (ServiceProtocol)

+ (id)__btm_serviceInterface;

@end