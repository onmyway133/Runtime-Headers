/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTCaptureFileOutputRecordingOperationDescriptor : NSObject <QTCaptureOperationDescriptor> {
    unsigned long long  _bufferDestination;
    BOOL  _didStartWriting;
    NSURL * _outputFileURL;
    BOOL  _paused;
    int  _pausedLock;
    NSError * _stopError;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)recordingOperationDescriptorWithOutputFileURL:(id)arg1 bufferDestination:(unsigned long long)arg2;

- (unsigned long long)bufferDestination;
- (void)dealloc;
- (id)init;
- (id)initWithOutputFileURL:(id)arg1 bufferDestination:(unsigned long long)arg2;
- (BOOL)isPaused;
- (id)operationDescriptorCoalescedWithExistingOperationDescriptor:(id)arg1;
- (id)outputFileURL;
- (BOOL)setDidStartWritingIfNotAlreadyStarted;
- (void)setPaused:(BOOL)arg1;
- (void)setStopError:(id)arg1;
- (id)stopError;

@end