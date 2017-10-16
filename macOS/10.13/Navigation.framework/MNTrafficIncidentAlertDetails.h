/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNTrafficIncidentAlertDetails : PBCodable <NSCopying> {
    NSData * _alertID;
    double  _alertTimestamp;
    unsigned int  _alertType;
    GEORoute * _alternateRoute;
    double  _distanceToIncident;
    MNRouteCoordinate * _endValidCoordinateRange;
    NSData * _etaResponseID;
    GEOETARoute * _etaRoute;
    double  _etaTimestamp;
    struct { 
        unsigned int alertTimestamp : 1; 
        unsigned int distanceToIncident : 1; 
        unsigned int etaTimestamp : 1; 
        unsigned int alertType : 1; 
        unsigned int isAutomaticReroute : 1; 
    }  _has;
    MNRouteCoordinate * _incidentCoordinate;
    BOOL  _isAutomaticReroute;
    GEORoute * _originalRoute;
    NSMutableArray * _originalRouteIncidentsDatas;
    MNRouteCoordinate * _startValidCoordinateRange;
}

@property (nonatomic, readwrite, retain) NSData *alertID;
@property (nonatomic, readwrite) double alertTimestamp;
@property (nonatomic, readwrite) unsigned int alertType;
@property (nonatomic, readwrite, retain) GEORoute *alternateRoute;
@property (nonatomic, readwrite) double distanceToIncident;
@property (nonatomic, readwrite, retain) MNRouteCoordinate *endValidCoordinateRange;
@property (nonatomic, readwrite, retain) NSData *etaResponseID;
@property (nonatomic, readwrite, retain) GEOETARoute *etaRoute;
@property (nonatomic, readwrite) double etaTimestamp;
@property (nonatomic, readonly) BOOL hasAlertID;
@property (nonatomic, readwrite) BOOL hasAlertTimestamp;
@property (nonatomic, readwrite) BOOL hasAlertType;
@property (nonatomic, readonly) BOOL hasAlternateRoute;
@property (nonatomic, readwrite) BOOL hasDistanceToIncident;
@property (nonatomic, readonly) BOOL hasEndValidCoordinateRange;
@property (nonatomic, readonly) BOOL hasEtaResponseID;
@property (nonatomic, readonly) BOOL hasEtaRoute;
@property (nonatomic, readwrite) BOOL hasEtaTimestamp;
@property (nonatomic, readonly) BOOL hasIncidentCoordinate;
@property (nonatomic, readwrite) BOOL hasIsAutomaticReroute;
@property (nonatomic, readonly) BOOL hasOriginalRoute;
@property (nonatomic, readonly) BOOL hasStartValidCoordinateRange;
@property (nonatomic, readwrite, retain) MNRouteCoordinate *incidentCoordinate;
@property (nonatomic, readwrite) BOOL isAutomaticReroute;
@property (nonatomic, readwrite, retain) GEORoute *originalRoute;
@property (nonatomic, readwrite, retain) NSMutableArray *originalRouteIncidentsDatas;
@property (nonatomic, readwrite, retain) MNRouteCoordinate *startValidCoordinateRange;

+ (Class)originalRouteIncidentsDataType;

- (void).cxx_destruct;
- (void)addOriginalRouteIncidentsData:(id)arg1;
- (id)alertID;
- (double)alertTimestamp;
- (unsigned int)alertType;
- (id)alternateRoute;
- (void)clearOriginalRouteIncidentsDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceToIncident;
- (id)endValidCoordinateRange;
- (id)etaResponseID;
- (id)etaRoute;
- (double)etaTimestamp;
- (BOOL)hasAlertID;
- (BOOL)hasAlertTimestamp;
- (BOOL)hasAlertType;
- (BOOL)hasAlternateRoute;
- (BOOL)hasDistanceToIncident;
- (BOOL)hasEndValidCoordinateRange;
- (BOOL)hasEtaResponseID;
- (BOOL)hasEtaRoute;
- (BOOL)hasEtaTimestamp;
- (BOOL)hasIncidentCoordinate;
- (BOOL)hasIsAutomaticReroute;
- (BOOL)hasOriginalRoute;
- (BOOL)hasStartValidCoordinateRange;
- (unsigned long long)hash;
- (id)incidentCoordinate;
- (BOOL)isAutomaticReroute;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalRoute;
- (id)originalRouteIncidentsDataAtIndex:(unsigned long long)arg1;
- (id)originalRouteIncidentsDatas;
- (unsigned long long)originalRouteIncidentsDatasCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAlertID:(id)arg1;
- (void)setAlertTimestamp:(double)arg1;
- (void)setAlertType:(unsigned int)arg1;
- (void)setAlternateRoute:(id)arg1;
- (void)setDistanceToIncident:(double)arg1;
- (void)setEndValidCoordinateRange:(id)arg1;
- (void)setEtaResponseID:(id)arg1;
- (void)setEtaRoute:(id)arg1;
- (void)setEtaTimestamp:(double)arg1;
- (void)setHasAlertTimestamp:(BOOL)arg1;
- (void)setHasAlertType:(BOOL)arg1;
- (void)setHasDistanceToIncident:(BOOL)arg1;
- (void)setHasEtaTimestamp:(BOOL)arg1;
- (void)setHasIsAutomaticReroute:(BOOL)arg1;
- (void)setIncidentCoordinate:(id)arg1;
- (void)setIsAutomaticReroute:(BOOL)arg1;
- (void)setOriginalRoute:(id)arg1;
- (void)setOriginalRouteIncidentsDatas:(id)arg1;
- (void)setStartValidCoordinateRange:(id)arg1;
- (id)startValidCoordinateRange;
- (void)writeTo:(id)arg1;

// MNTrafficIncidentAlertDetails (Extras)

+ (id)detailsForTrafficIncidentAlert:(id)arg1;

@end
