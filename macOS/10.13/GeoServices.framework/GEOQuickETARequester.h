/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOQuickETARequester : NSObject {
    GEODirectionsRequest * _directionsETARequest;
    NSString * _loggingFacility;
    GEOQuickETARequest * _request;
    int  _requestMode;
    GEOETARequest * _simpleETARequest;
}

@property (nonatomic, readwrite, copy) NSString *loggingFacility;

+ (BOOL)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(id)arg5;
+ (BOOL)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 withShortTrafficString:(BOOL)arg5 handler:(id)arg6;

- (void).cxx_destruct;
- (void)_calculateRoutingETAWithHandler:(id)arg1;
- (void)_calculateRoutingETAWithSummary:(BOOL)arg1 handler:(id)arg2;
- (void)_calculateSimpleETAFromAPI:(BOOL)arg1 WithHandler:(id)arg2;
- (void)_calculateSimpleETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithHandler:(id)arg3;
- (void)calculateETAFromAPI:(BOOL)arg1 WithResponseHandler:(id)arg2;
- (void)calculateETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithResponseHandler:(id)arg3;
- (void)calculateETAWithResponseHandler:(id)arg1;
- (void)cancel;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 requestMode:(int)arg2;
- (id)loggingFacility;
- (void)setLoggingFacility:(id)arg1;

@end
