/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTFigVisualContextImageProvider : NSObject {
    QTFigVisualContextImageProviderInternal * _internal;
}

- (id)_data;
- (void)_markNeedToFlushOnNextFrameNoLock;
- (BOOL)_testAndResetNeedToFlushOnNextFrame;
- (void)_updateLatencyFromAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)imageConsumer;
- (id)init;
- (id)initWithVisualContext:(struct OpaqueFigVisualContext { }*)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setImageConsumer:(id)arg1;
- (void)setTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (struct OpaqueCMTimebase { }*)timebase;
- (struct OpaqueFigVisualContext { }*)visualContext;

@end
