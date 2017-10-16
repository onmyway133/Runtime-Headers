/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORouteDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int timeSinceRouteResponse : 1; 
        unsigned int resultIndex : 1; 
        unsigned int stepID : 1; 
        unsigned int isNearCurrentlyDisplayedStep : 1; 
        unsigned int isNearRoute : 1; 
        unsigned int isUserTrackingOn : 1; 
    }  _has;
    BOOL  _isNearCurrentlyDisplayedStep;
    BOOL  _isNearRoute;
    BOOL  _isUserTrackingOn;
    int  _resultIndex;
    unsigned int  _stepID;
    double  _timeSinceRouteResponse;
}

@property (nonatomic, readwrite) BOOL hasIsNearCurrentlyDisplayedStep;
@property (nonatomic, readwrite) BOOL hasIsNearRoute;
@property (nonatomic, readwrite) BOOL hasIsUserTrackingOn;
@property (nonatomic, readwrite) BOOL hasResultIndex;
@property (nonatomic, readwrite) BOOL hasStepID;
@property (nonatomic, readwrite) BOOL hasTimeSinceRouteResponse;
@property (nonatomic, readwrite) BOOL isNearCurrentlyDisplayedStep;
@property (nonatomic, readwrite) BOOL isNearRoute;
@property (nonatomic, readwrite) BOOL isUserTrackingOn;
@property (nonatomic, readwrite) int resultIndex;
@property (nonatomic, readwrite) unsigned int stepID;
@property (nonatomic, readwrite) double timeSinceRouteResponse;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsNearCurrentlyDisplayedStep;
- (BOOL)hasIsNearRoute;
- (BOOL)hasIsUserTrackingOn;
- (BOOL)hasResultIndex;
- (BOOL)hasStepID;
- (BOOL)hasTimeSinceRouteResponse;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNearCurrentlyDisplayedStep;
- (BOOL)isNearRoute;
- (BOOL)isUserTrackingOn;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)resultIndex;
- (void)setHasIsNearCurrentlyDisplayedStep:(BOOL)arg1;
- (void)setHasIsNearRoute:(BOOL)arg1;
- (void)setHasIsUserTrackingOn:(BOOL)arg1;
- (void)setHasResultIndex:(BOOL)arg1;
- (void)setHasStepID:(BOOL)arg1;
- (void)setHasTimeSinceRouteResponse:(BOOL)arg1;
- (void)setIsNearCurrentlyDisplayedStep:(BOOL)arg1;
- (void)setIsNearRoute:(BOOL)arg1;
- (void)setIsUserTrackingOn:(BOOL)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimeSinceRouteResponse:(double)arg1;
- (unsigned int)stepID;
- (double)timeSinceRouteResponse;
- (void)writeTo:(id)arg1;

// GEORouteDetails (Extras)

+ (id)routeDetailsWithResultIndex:(int)arg1;
+ (id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2;
+ (id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 nearRoute:(BOOL)arg3 nearCurrentlyDisplayedStep:(BOOL)arg4 userTrackingOn:(BOOL)arg5 timeSinceResponse:(double)arg6;

- (id)initWithResultIndex:(int)arg1;

@end
