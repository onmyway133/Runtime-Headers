/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {
    NSNumber * _requestPriority;
    double  _timeout;
    unsigned long long  _urlType;
}

- (void).cxx_destruct;
- (id)additionalHTTPHeaders;
- (int)dataRequestKindForRequest:(id)arg1;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
- (long long)experimentType;
- (id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)serviceTypeNumber;
- (BOOL)shouldThrottleRequests;
- (double)timeout;
- (unsigned long long)urlType;

@end
