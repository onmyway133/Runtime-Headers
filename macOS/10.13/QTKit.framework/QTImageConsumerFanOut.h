/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTImageConsumerFanOut : NSObject <QTImageConsumer> {
    NSDictionary * _attributes;
    int  _attributesLock;
    int  _consumerLock;
    NSCountedSet * _consumers;
    NSMutableSet * _liveConsumers;
    QTImageBufferQueue * _queue;
    int  _queueLock;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)addImageConsumer:(id)arg1;
- (void)dealloc;
- (void)flushImageBuffersAfterHostTime:(unsigned long long)arg1;
- (id)imageConsumers;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)preferredAttributes;
- (void)removeImageConsumer:(id)arg1 flush:(BOOL)arg2;
- (void)setImageBuffer:(struct __CVBuffer { }*)arg1 forHostTime:(unsigned long long)arg2;
- (void)setPreferredAttributes:(id)arg1;
- (void)updateAttributes;

@end
