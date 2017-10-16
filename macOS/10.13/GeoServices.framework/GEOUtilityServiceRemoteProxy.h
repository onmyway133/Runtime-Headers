/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOUtilityServiceRemoteProxy : NSObject <GEOUtilityServiceProxy> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(id)arg2;
- (id)init;

@end