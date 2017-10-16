/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVSampleBufferRenderSynchronizer : NSObject {
    AVSampleBufferRenderSynchronizerInternal * _synchronizerInternal;
}

@property (nonatomic, readwrite) float rate;
@property (atomic, readonly) NSArray *renderers;
@property (atomic, readonly, retain) struct OpaqueCMTimebase { }*timebase;

- (int)_initializeTimebase;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (float)rate;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct OpaqueCMTimebase { }*)timebase;

// AVSampleBufferRenderSynchronizer (AVSampleBufferRenderSynchronizerRendererManagement)

- (BOOL)_addRenderer:(id)arg1 error:(id*)arg2;
- (id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)_getClientCompletionHandlerForRenderer:(id)arg1;
- (id)_getTimebaseObserverForRenderer:(id)arg1;
- (void)_removeTimebaseObserverForRenderer:(id)arg1;
- (BOOL)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withClientCompletionHandler:(id)arg3;
- (void)_storeObserver:(id)arg1 clientCompletionHandler:(id)arg2 forRenderer:(id)arg3;
- (void)addRenderer:(id)arg1;
- (void)removeRenderer:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id)arg3;
- (void)removeRenderer:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withCompletionHandler:(id)arg3;
- (id)renderers;

// AVSampleBufferRenderSynchronizer (AVSampleBufferRenderSynchronizerRendererRestrictions)

- (long long)_addedAudioRendererCount;
- (long long)_addedAudioRendererCountInternal;
- (BOOL)_canAddRendererInternal:(id)arg1 error:(id*)arg2;
- (BOOL)_multipleAudioRenderersDisallowed;
- (BOOL)_rendererConfigurationIsValid:(id*)arg1;

// AVSampleBufferRenderSynchronizer (AVSampleBufferRenderSynchronizerTimeObservation)

- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)removeTimeObserver:(id)arg1;

@end
