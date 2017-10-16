/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICCallbackInfo : NSObject {
    id  _cmdObj;
    id  _delegate;
    id  _failureBlock;
    void * _info;
    SEL  _selector;
    unsigned long long  _sessionID;
}

@property (atomic, readwrite, retain) id cmdObj;
@property (atomic, readwrite, retain) id delegate;
@property (atomic, readwrite) id failureBlock;
@property (atomic, readwrite) void*info;
@property (atomic, readwrite) SEL selector;
@property (atomic, readwrite) unsigned long long sessionID;

- (id)cmdObj;
- (void)dealloc;
- (id)delegate;
- (id)failureBlock;
- (void*)info;
- (id)init;
- (SEL)selector;
- (unsigned long long)sessionID;
- (void)setCmdObj:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFailureBlock:(id)arg1;
- (void)setInfo:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setSessionID:(unsigned long long)arg1;

@end
