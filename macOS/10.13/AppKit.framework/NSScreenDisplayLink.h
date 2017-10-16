/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScreenDisplayLink : NSDisplayLink1 {
    unsigned int  _firing;
    id  _handler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _paused;
    unsigned long long  _scheduleCount;
    long long  _screenNumber;
    struct { 
        unsigned long long serial; 
        unsigned long long timestamp; 
        unsigned long long delta; 
    }  _targetTime;
    struct __CFRunLoopTimer { } * _timer;
}

- (void)_fire;
- (void)_schedule;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (double)duration;
- (id)init;
- (id)initWithScreen:(id)arg1 handler:(id)arg2;
- (void)invalidate;
- (BOOL)isPaused;
- (BOOL)isValid;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setPaused:(BOOL)arg1;
- (double)timestamp;

@end