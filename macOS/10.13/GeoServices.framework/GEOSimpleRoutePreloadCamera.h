/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera> {
    unsigned long long  _zoomLevel;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)implicateTilesForCoordinate:(struct { double x1; double x2; })arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(BOOL)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8;
- (id)initWithZoomLevel:(unsigned long long)arg1;
- (unsigned long long)zoomLevel;

@end
