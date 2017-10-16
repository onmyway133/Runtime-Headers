/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureOperationDescriptorQueueItem : NSObject {
    <AVCaptureOperationDescriptor> * _operationDescriptor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _operationTime;
}

- (void)dealloc;
- (id)init;
- (id)initWithOperationDescriptor:(id)arg1 operationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)operationDescriptor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })operationTime;

@end
