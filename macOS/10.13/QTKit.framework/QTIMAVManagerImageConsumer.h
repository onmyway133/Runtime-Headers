/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTIMAVManagerImageConsumer : NSObject <QTImageConsumer> {
    id  _delegate;
    NSString * _name;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) id delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)delegate;
- (void)flushImageBuffersAfterHostTime:(unsigned long long)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setDelegate:(id)arg1;
- (void)setImageBuffer:(struct __CVBuffer { }*)arg1 forHostTime:(unsigned long long)arg2;
- (void)setName:(id)arg1;

@end
