/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVPlayerItemOutput : NSObject {
    AVPlayerItemOutputInternal * _outputInternal;
}

@property (nonatomic, readwrite) BOOL suppressesPlayerRendering;

- (BOOL)_attachToPlayerItem:(id)arg1;
- (struct OpaqueCMTimebase { }*)_copyTimebase;
- (void)_detachFromPlayerItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_itemTimeForHostTimeAsCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (id)_weakReference;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForCVTimeStamp:(struct { unsigned int x1; int x2; long long x3; unsigned long long x4; double x5; long long x6; struct CVSMPTETime { short x_7_1_1; short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; short x_7_1_6; short x_7_1_7; short x_7_1_8; short x_7_1_9; } x7; unsigned long long x8; unsigned long long x9; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForHostTime:(double)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForMachAbsoluteTime:(long long)arg1;
- (void)setSuppressesPlayerRendering:(BOOL)arg1;
- (BOOL)suppressesPlayerRendering;

@end
