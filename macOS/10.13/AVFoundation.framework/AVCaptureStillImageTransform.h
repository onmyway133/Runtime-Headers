/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureStillImageTransform : NSObject {
    struct opaqueCMSampleBuffer { } * _resultBuffer;
    struct opaqueCMSampleBuffer { } * _sourceBuffer;
    int  _status;
}

@property (atomic, readwrite) int status;

+ (id)transform;

- (void)dealloc;
- (void)finalize;
- (struct opaqueCMSampleBuffer { }*)resultBuffer;
- (void)setResultBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setSourceBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setStatus:(int)arg1;
- (struct opaqueCMSampleBuffer { }*)sourceBuffer;
- (int)status;

@end
