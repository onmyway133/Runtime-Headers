/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTCaptureVideoPreviewRenderHelper : NSObject {
    struct __CFDictionary { } * _basePixelBufferAttributes;
    QTCaptureConnection * _connection;
    NSDictionary * _currentAttributes;
    id  _delegate;
    QTImageConsumerFanOut * _fanOut;
    QTFigVisualContextImageProvider * _imageProvider;
    QTCaptureVideoPreviewOutput * _videoPreviewOutput;
    struct OpaqueFigVisualContext { } * _visualContext;
}

- (void)_initializeVisualContext;
- (void)_updateVisualContextAttributes;
- (void)addImageConsumer:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (void)flushImageBuffersAfterHostTime:(unsigned long long)arg1;
- (id)imageConsumers;
- (void)imageProvider:(id)arg1 willSendImageBuffer:(struct __CVBuffer { }*)arg2 imageBaggage:(id)arg3;
- (id)init;
- (id)initForVideoPreviewOutput:(id)arg1 connection:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeImageConsumer:(id)arg1 flush:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)tearDown;
- (void)videoPreviewOutputTimebaseDidChange:(id)arg1;

@end
