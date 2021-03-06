/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider> {
    CMActivityManager * _activityManager;
    <GEOMotionContextProviderDelegate> * _delegate;
    MNTraceRecorder * _traceRecorder;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) <GEOMotionContextProviderDelegate> *motionDelegate;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTraceRecorder:(id)arg1;
- (id)motionDelegate;
- (void)setMotionDelegate:(id)arg1;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;

@end
