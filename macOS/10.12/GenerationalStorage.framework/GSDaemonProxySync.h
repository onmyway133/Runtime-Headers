/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
 */

@interface GSDaemonProxySync : NSProxy <GSProtocol> {
    NSError * _error;
    id  _result;
    NSObject<GSProtocol> * _target;
}

@property (nonatomic, readwrite, retain) NSError *error;
@property (nonatomic, readwrite, retain) id result;

+ (id)proxy;

- (struct __CFError { }*)CFError;
- (void)dealloc;
- (id)error;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (void)handleBoolResult:(BOOL)arg1 error:(id)arg2;
- (void)handleObjResult:(id)arg1 error:(id)arg2;
- (id)initWithXPCObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)result;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;

@end
