/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORouteManager : NSObject {
    GEOApplicationAuditToken * _auditToken;
    <GEORouteManagerDelegate> * _delegate;
}

@property (nonatomic, readwrite, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readwrite) <GEORouteManagerDelegate> *delegate;

+ (void)setShouldRequestServerLatencyInfo:(BOOL)arg1;

- (void).cxx_destruct;
- (void)addedRoutesToRouteSet:(id)arg1;
- (id)auditToken;
- (id)delegate;
- (void)fetchDirectionsForTicket:(id)arg1 routeSet:(id)arg2 networkActivity:(id)arg3 completionHandler:(id)arg4;
- (void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3;
- (void)handleResponse:(id)arg1 routeSet:(id)arg2 forTicket:(id)arg3;
- (id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2;
- (void)setAuditToken:(id)arg1;
- (void)setDelegate:(id)arg1;

@end