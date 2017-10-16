/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface _CNSamplingObservable : CNObservable {
    <CNObservable> * _observable;
    id  _sample;
    <CNObservable> * _sampler;
    <CNCancelable> * _timer;
}

@property (nonatomic, readonly) <CNObservable> *observable;
@property (atomic, readwrite, retain) id sample;
@property (nonatomic, readonly) <CNObservable> *sampler;
@property (atomic, readwrite, retain) <CNCancelable> *timer;

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 sampler:(id)arg2;
- (id)observable;
- (void)receiveResult:(id)arg1;
- (id)sample;
- (id)sampler;
- (void)sendSampleToObserver:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)timer;

@end
