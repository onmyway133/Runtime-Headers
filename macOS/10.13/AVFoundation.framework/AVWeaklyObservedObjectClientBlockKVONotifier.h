/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier> {
    id  _block;
    AVCallbackContextRegistry * _callbackContextRegistry;
    void * _callbackContextToken;
    NSString * _keyPath;
    NSObject * _observer;
    unsigned long long  _options;
    NSObject<AVWeakObservable> * _unsafeUnretainedObject;
    AVWeakReference * _weakReferenceToObject;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)cancelCallbacks;
- (void)dealloc;
- (void)finalize;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(id)arg6;
- (void)start;

@end