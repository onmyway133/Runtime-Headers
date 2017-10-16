/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOComposedWaypoint : PBCodable <NSCopying> {
    GEOLatLng * _latLng;
    GEOMapItemStorage * _mapItemStorage;
    GEOWaypointTyped * _waypoint;
}

@property (nonatomic, readonly) int destinationType;
@property (nonatomic, readonly) BOOL hasLatLng;
@property (nonatomic, readonly) BOOL hasMapItemStorage;
@property (nonatomic, readonly) BOOL hasWaypoint;
@property (nonatomic, readwrite, retain) GEOLatLng *latLng;
@property (nonatomic, readwrite, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readwrite, retain) GEOWaypointTyped *waypoint;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLatLng;
- (BOOL)hasMapItemStorage;
- (BOOL)hasWaypoint;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)latLng;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLatLng:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setWaypoint:(id)arg1;
- (id)waypoint;
- (void)writeTo:(id)arg1;

// GEOComposedWaypoint (GEOProtoExtras)

- (double)distanceToWaypoint:(id)arg1;

// GEOComposedWaypoint (GEOWaypointExtras)

+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(id)arg4;
+ (id)composedWaypointForID:(unsigned long long)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(id)arg6;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(id)arg6;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(id)arg6;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(id)arg4;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(id)arg6;
+ (id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(struct { double x1; double x2; })arg2 isCurrentLocation:(BOOL)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(id)arg6 networkActivityHandler:(id)arg7;
+ (id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(id)arg2 networkActivityHandler:(id)arg3;

- (id)geoMapItem;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(BOOL)arg2;
- (id)initWithMapItem:(id)arg1;
- (BOOL)isCurrentLocation;
- (BOOL)isLocationWaypointType;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (id)timezone;

// Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit

// GEOComposedWaypoint (MKGeoServicesExtras)

+ (void)composedWaypointForMapItem:(id)arg1 useAsLocation:(BOOL)arg2 forQuickETA:(BOOL)arg3 traits:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(id)arg6;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation

// GEOComposedWaypoint (MNExtras)

- (int)destinationType;
- (id)localeIdentifier;
- (id)navAnnouncementAddress;
- (id)navAnnouncementName;
- (id)navDisplayAddress;
- (id)navDisplayName;
- (id)navDisplayNameWithSpecialContacts:(BOOL)arg1;

@end
