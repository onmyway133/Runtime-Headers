/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MXExtensionVendorContext : _MXExtensionContext <_MXExtensionVendorContextType> {
    <_MXExtensionResponseObserver> * _observer;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2;
- (void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(id)arg3;
- (void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;

@end