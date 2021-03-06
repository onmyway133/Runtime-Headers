/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingConcurrentEventMonitor : NSObject {
    _NSScrollingPredominantAxisFilter * _backupPredominantAxisFilter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _backupVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _delta;
    int  _deviceType;
    id  _eventProcessingHandler;
    struct { 
        unsigned int shouldUseUnacceleratedDelta : 1; 
        unsigned int shouldCoalesceDeltas : 1; 
        unsigned int shouldIgnoreConsumption : 1; 
        unsigned int wantsGestureEvents : 1; 
        unsigned int shouldStopMonitoringOnMomentumEnd : 1; 
        unsigned int didProcessMomentumEnd : 1; 
        unsigned int didPostPhysicalBegan : 1; 
        unsigned int didPostMomentumBegan : 1; 
        unsigned int deltaIsAccelerated : 1; 
        unsigned int reserved : 23; 
    }  _flags;
    BOOL * _isCancelledPtr;
    id  _monitorID;
    unsigned long long  _originalGestureMask;
    _NSScrollingPredominantAxisFilter * _predominantAxisFilter;
    <_NSScrollStateEventListener> * _scrollStateDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } delta;
@property (nonatomic, readonly) BOOL deltaIsAccelerated;
@property (nonatomic, readonly) int deviceType;
@property (nonatomic, readwrite, copy) id eventProcessingHandler;
@property (nonatomic, readwrite) long long predominantAxisMode;
@property (nonatomic, readwrite) <_NSScrollStateEventListener> *scrollStateDelegate;
@property (nonatomic, readwrite) BOOL shouldCoalesceDeltas;
@property (nonatomic, readwrite) BOOL shouldIgnoreConsumption;
@property (nonatomic, readwrite) BOOL shouldStopMonitoringOnMomentumEnd;
@property (nonatomic, readwrite) BOOL shouldUseUnacceleratedDelta;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } velocity;
@property (nonatomic, readwrite) BOOL wantsGestureEvents;

+ (void)initialize;

- (void)_monitorEvent:(id)arg1;
- (void)consumePropertiesWithBlock:(id)arg1;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })delta;
- (BOOL)deltaIsAccelerated;
- (int)deviceType;
- (id)eventProcessingHandler;
- (id)initWithEvent:(id)arg1 predominantAxisMode:(long long)arg2;
- (long long)predominantAxisMode;
- (id)scrollStateDelegate;
- (void)setEventProcessingHandler:(id)arg1;
- (void)setPredominantAxisMode:(long long)arg1;
- (void)setScrollStateDelegate:(id)arg1;
- (void)setShouldCoalesceDeltas:(BOOL)arg1;
- (void)setShouldIgnoreConsumption:(BOOL)arg1;
- (void)setShouldStopMonitoringOnMomentumEnd:(BOOL)arg1;
- (void)setShouldUseUnacceleratedDelta:(BOOL)arg1;
- (void)setWantsGestureEvents:(BOOL)arg1;
- (BOOL)shouldCoalesceDeltas;
- (BOOL)shouldIgnoreConsumption;
- (BOOL)shouldStopMonitoringOnMomentumEnd;
- (BOOL)shouldUseUnacceleratedDelta;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)threadSafeMultiPropertyAccess:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocity;
- (BOOL)wantsGestureEvents;

@end
