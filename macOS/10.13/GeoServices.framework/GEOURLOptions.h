/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {
    GEOURLCamera * _camera;
    GEOURLCenterSpan * _centerSpan;
    BOOL  _connectedToCar;
    BOOL  _enableTraffic;
    struct { 
        unsigned int mapType : 1; 
        unsigned int transportType : 1; 
        unsigned int userTrackingMode : 1; 
        unsigned int connectedToCar : 1; 
        unsigned int enableTraffic : 1; 
    }  _has;
    int  _mapType;
    NSString * _referralIdentifier;
    GEOURLRouteHandle * _routeHandle;
    GEOURLTimePoint * _timePoint;
    int  _transportType;
    int  _userTrackingMode;
}

@property (nonatomic, readwrite, retain) GEOURLCamera *camera;
@property (nonatomic, readwrite, retain) GEOURLCenterSpan *centerSpan;
@property (nonatomic, readwrite) BOOL connectedToCar;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) BOOL enableTraffic;
@property (nonatomic, readonly) BOOL hasCamera;
@property (nonatomic, readonly) BOOL hasCenterSpan;
@property (nonatomic, readwrite) BOOL hasConnectedToCar;
@property (nonatomic, readwrite) BOOL hasEnableTraffic;
@property (nonatomic, readwrite) BOOL hasMapType;
@property (nonatomic, readonly) BOOL hasReferralIdentifier;
@property (nonatomic, readonly) BOOL hasRouteHandle;
@property (nonatomic, readonly) BOOL hasTimePoint;
@property (nonatomic, readwrite) BOOL hasTransportType;
@property (nonatomic, readwrite) BOOL hasUserTrackingMode;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) int mapType;
@property (nonatomic, readwrite, retain) NSString *referralIdentifier;
@property (nonatomic, readwrite, retain) GEOURLRouteHandle *routeHandle;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) GEOURLTimePoint *timePoint;
@property (nonatomic, readwrite) int transportType;
@property (nonatomic, readwrite) int userTrackingMode;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (int)StringAsUserTrackingMode:(id)arg1;
- (id)camera;
- (id)centerSpan;
- (BOOL)connectedToCar;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enableTraffic;
- (BOOL)hasCamera;
- (BOOL)hasCenterSpan;
- (BOOL)hasConnectedToCar;
- (BOOL)hasEnableTraffic;
- (BOOL)hasMapType;
- (BOOL)hasReferralIdentifier;
- (BOOL)hasRouteHandle;
- (BOOL)hasTimePoint;
- (BOOL)hasTransportType;
- (BOOL)hasUserTrackingMode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)referralIdentifier;
- (id)routeHandle;
- (void)setCamera:(id)arg1;
- (void)setCenterSpan:(id)arg1;
- (void)setConnectedToCar:(BOOL)arg1;
- (void)setEnableTraffic:(BOOL)arg1;
- (void)setHasConnectedToCar:(BOOL)arg1;
- (void)setHasEnableTraffic:(BOOL)arg1;
- (void)setHasMapType:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasUserTrackingMode:(BOOL)arg1;
- (void)setMapType:(int)arg1;
- (void)setReferralIdentifier:(id)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)setTimePoint:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setUserTrackingMode:(int)arg1;
- (id)timePoint;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (int)userTrackingMode;
- (id)userTrackingModeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

// GEOURLOptions (GEOURLExtras)

- (id)initWithUrlRepresentation:(id)arg1;
- (id)urlRepresentation;

// Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit

// GEOURLOptions (MKURLSerializerExtras)

- (id)initWithLaunchOptions:(id)arg1;
- (id)launchOptions;

@end
