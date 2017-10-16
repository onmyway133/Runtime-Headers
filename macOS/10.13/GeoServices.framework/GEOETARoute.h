/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOETARoute : PBCodable <NSCopying> {
    NSMutableArray * _enrouteNotices;
    struct { 
        unsigned int historicTravelTime : 1; 
        unsigned int staticTravelTime : 1; 
        unsigned int travelTimeAggressiveEstimate : 1; 
        unsigned int travelTimeBestEstimate : 1; 
        unsigned int travelTimeConservativeEstimate : 1; 
        unsigned int routeNoLongerValid : 1; 
    }  _has;
    unsigned int  _historicTravelTime;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentEndOffsetsInETARoutes;
    NSMutableArray * _incidentsOffReRoutes;
    NSMutableArray * _incidentsOnETARoutes;
    NSMutableArray * _incidentsOnReRoutes;
    NSMutableArray * _invalidSectionZilchPoints;
    NSMutableArray * _reroutedRoutes;
    NSData * _routeID;
    BOOL  _routeNoLongerValid;
    unsigned int  _staticTravelTime;
    NSMutableArray * _steps;
    GEOTrafficBannerText * _trafficBannerText;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColors;
    unsigned int  _travelTimeAggressiveEstimate;
    unsigned int  _travelTimeBestEstimate;
    unsigned int  _travelTimeConservativeEstimate;
    NSData * _zilchPoints;
}

@property (nonatomic, readwrite, retain) NSMutableArray *enrouteNotices;
@property (nonatomic, readonly) double expectedTime;
@property (nonatomic, readwrite) BOOL hasHistoricTravelTime;
@property (nonatomic, readonly) BOOL hasRouteID;
@property (nonatomic, readwrite) BOOL hasRouteNoLongerValid;
@property (nonatomic, readwrite) BOOL hasStaticTravelTime;
@property (nonatomic, readonly) BOOL hasTrafficBannerText;
@property (nonatomic, readonly) BOOL hasTrafficIncidentAlert;
@property (nonatomic, readwrite) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic, readwrite) BOOL hasTravelTimeBestEstimate;
@property (nonatomic, readwrite) BOOL hasTravelTimeConservativeEstimate;
@property (nonatomic, readonly) BOOL hasValidTrafficIncidentAlertText;
@property (nonatomic, readonly) BOOL hasZilchPoints;
@property (nonatomic, readwrite) unsigned int historicTravelTime;
@property (nonatomic, readonly) unsigned int*incidentEndOffsetsInETARoutes;
@property (nonatomic, readonly) unsigned long long incidentEndOffsetsInETARoutesCount;
@property (nonatomic, readwrite, retain) NSMutableArray *incidentsOffReRoutes;
@property (nonatomic, readwrite, retain) NSMutableArray *incidentsOnETARoutes;
@property (nonatomic, readwrite, retain) NSMutableArray *incidentsOnReRoutes;
@property (nonatomic, readwrite, retain) NSMutableArray *invalidSectionZilchPoints;
@property (nonatomic, readwrite, retain) NSMutableArray *reroutedRoutes;
@property (nonatomic, readwrite, retain) NSData *routeID;
@property (nonatomic, readwrite) BOOL routeNoLongerValid;
@property (nonatomic, readwrite) unsigned int staticTravelTime;
@property (nonatomic, readwrite, retain) NSMutableArray *steps;
@property (nonatomic, readwrite, retain) GEOTrafficBannerText *trafficBannerText;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic, readwrite) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic, readwrite) unsigned int travelTimeBestEstimate;
@property (nonatomic, readwrite) unsigned int travelTimeConservativeEstimate;
@property (nonatomic, readwrite, retain) NSData *zilchPoints;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

+ (Class)enrouteNoticeType;
+ (Class)incidentsOffReRoutesType;
+ (Class)incidentsOnETARouteType;
+ (Class)incidentsOnReRoutesType;
+ (Class)invalidSectionZilchPointsType;
+ (Class)reroutedRouteType;
+ (Class)stepType;

- (void).cxx_destruct;
- (void)addEnrouteNotice:(id)arg1;
- (void)addIncidentEndOffsetsInETARoute:(unsigned int)arg1;
- (void)addIncidentsOffReRoutes:(id)arg1;
- (void)addIncidentsOnETARoute:(id)arg1;
- (void)addIncidentsOnReRoutes:(id)arg1;
- (void)addInvalidSectionZilchPoints:(id)arg1;
- (void)addReroutedRoute:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearEnrouteNotices;
- (void)clearIncidentEndOffsetsInETARoutes;
- (void)clearIncidentsOffReRoutes;
- (void)clearIncidentsOnETARoutes;
- (void)clearIncidentsOnReRoutes;
- (void)clearInvalidSectionZilchPoints;
- (void)clearReroutedRoutes;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;
- (id)enrouteNotices;
- (unsigned long long)enrouteNoticesCount;
- (BOOL)hasHistoricTravelTime;
- (BOOL)hasRouteID;
- (BOOL)hasRouteNoLongerValid;
- (BOOL)hasStaticTravelTime;
- (BOOL)hasTrafficBannerText;
- (BOOL)hasTravelTimeAggressiveEstimate;
- (BOOL)hasTravelTimeBestEstimate;
- (BOOL)hasTravelTimeConservativeEstimate;
- (BOOL)hasZilchPoints;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (unsigned int)incidentEndOffsetsInETARouteAtIndex:(unsigned long long)arg1;
- (unsigned int*)incidentEndOffsetsInETARoutes;
- (unsigned long long)incidentEndOffsetsInETARoutesCount;
- (id)incidentsOffReRoutes;
- (id)incidentsOffReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffReRoutesCount;
- (id)incidentsOnETARouteAtIndex:(unsigned long long)arg1;
- (id)incidentsOnETARoutes;
- (unsigned long long)incidentsOnETARoutesCount;
- (id)incidentsOnReRoutes;
- (id)incidentsOnReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnReRoutesCount;
- (id)invalidSectionZilchPoints;
- (id)invalidSectionZilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)invalidSectionZilchPointsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reroutedRouteAtIndex:(unsigned long long)arg1;
- (id)reroutedRoutes;
- (unsigned long long)reroutedRoutesCount;
- (id)routeID;
- (BOOL)routeNoLongerValid;
- (void)setEnrouteNotices:(id)arg1;
- (void)setHasHistoricTravelTime:(BOOL)arg1;
- (void)setHasRouteNoLongerValid:(BOOL)arg1;
- (void)setHasStaticTravelTime:(BOOL)arg1;
- (void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1;
- (void)setHasTravelTimeBestEstimate:(BOOL)arg1;
- (void)setHasTravelTimeConservativeEstimate:(BOOL)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setIncidentEndOffsetsInETARoutes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIncidentsOffReRoutes:(id)arg1;
- (void)setIncidentsOnETARoutes:(id)arg1;
- (void)setIncidentsOnReRoutes:(id)arg1;
- (void)setInvalidSectionZilchPoints:(id)arg1;
- (void)setReroutedRoutes:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteNoLongerValid:(BOOL)arg1;
- (void)setStaticTravelTime:(unsigned int)arg1;
- (void)setSteps:(id)arg1;
- (void)setTrafficBannerText:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTravelTimeAggressiveEstimate:(unsigned int)arg1;
- (void)setTravelTimeBestEstimate:(unsigned int)arg1;
- (void)setTravelTimeConservativeEstimate:(unsigned int)arg1;
- (void)setZilchPoints:(id)arg1;
- (unsigned int)staticTravelTime;
- (id)stepAtIndex:(unsigned long long)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (id)trafficBannerText;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (unsigned int)travelTimeAggressiveEstimate;
- (unsigned int)travelTimeBestEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

// GEOETARoute (GEORouteExtras)

- (void)_addDebugArguments:(id)arg1;
- (id)bannerDescription;
- (id)bannerSpoken;
- (id)bannerTitle;
- (double)expectedTime;
- (double)remainingTimeAlongRoute:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (void)setDebugBannerTitle:(id)arg1 bannerDescription:(id)arg2 bannerSpoken:(id)arg3;
- (unsigned long long)stepIndexOfStepWithID:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation

// GEOETARoute (MNExtras)

- (id)initForRoute:(id)arg1 usingETAsFromOtherRoute:(id)arg2;

// GEOETARoute (MNTrafficIncidentAlertExtras)

- (BOOL)hasTrafficIncidentAlert;
- (BOOL)hasValidTrafficIncidentAlertText;

@end
