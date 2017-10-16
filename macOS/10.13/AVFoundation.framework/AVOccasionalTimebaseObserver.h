/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {
    id  _block;
    NSArray * _times;
}

- (void)_effectiveRateChanged;
- (void)_fireBlock;
- (void)_handleTimeDiscontinuity;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_nextFiringTimeAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_previousFiringTimeBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_resetNextFireTime;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 times:(id)arg2 queue:(id)arg3 block:(id)arg4;

@end
