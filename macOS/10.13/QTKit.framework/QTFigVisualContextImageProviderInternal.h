/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTFigVisualContextImageProviderInternal : NSObject {
    id  delegate;
    int  delegateLock;
    struct __CFRunLoopSource { } * flushSource;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  highWater;
    NSObject<QTImageConsumer> * imageConsumer;
    int  imageConsumerLock;
    struct __CFRunLoopSource { } * inFlightFlushSource;
    BOOL  inFlightFlushSourceNeedsScheduling;
    struct __CFRunLoopSource { } * inFlightImageDumpSource;
    QTFigTimeImageQueue * inFlightImages;
    long long  lastNonZeroDirection;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  lowWater;
    struct __CVBuffer { } * mostRecentlyDisplayedImageBuffer;
    struct __CFRunLoopSource { } * mostRecentlyDisplayedImageReenqueueSource;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  mostRecentlyDisplayedImageTime;
    int  mutex;
    BOOL  needToFlush;
    struct QTFigTimeQueue { } * pendingImageTimes;
    QTFigTimeImageQueue * replayImages;
    struct __CFRunLoop { } * runLoop;
    NSCondition * runLoopExistenceCondition;
    struct __CFRunLoopSource { } * stopRunLoopSource;
    struct OpaqueCMTimebase { } * timebase;
    int  timebaseLock;
    struct OpaqueFigVisualContext { } * visualContext;
    struct __CFRunLoopSource { } * workLoopSource;
    struct __CFRunLoopTimer { } * workLoopTimer;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)tearDown;

@end
