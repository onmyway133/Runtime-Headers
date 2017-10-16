/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {
    <GEOMapItem> * _mapItemToRefine;
    GEOPDPlaceRequest * _request;
    GEOPDPlaceResponse * _response;
}

- (void).cxx_destruct;
- (void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(id)arg4 refinedHandler:(id)arg5 networkActivity:(id)arg6;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)cancel;
- (id)description;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3;
- (id)resultSectionHeader;
- (void)submitWithHandler:(id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id)arg4;
- (void)submitWithRefinedHandler:(id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id)arg4;

@end