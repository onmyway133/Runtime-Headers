/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingConcurrentEventVBLPreprocessFilter : _NSScrollingConcurrentVBLPreprocessFilter {
    _NSScrollingConcurrentEventMonitor * _eventMonitor;
    BOOL  _isStretched;
    _NSScrollingRubberbandFilter * _rubberbandFilter;
}

@property (nonatomic, readwrite, retain) _NSScrollingConcurrentEventMonitor *eventMonitor;

- (void)dealloc;
- (id)eventMonitor;
- (id)initWithConstantData:(id)arg1;
- (void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4;
- (void)setEventMonitor:(id)arg1;

@end