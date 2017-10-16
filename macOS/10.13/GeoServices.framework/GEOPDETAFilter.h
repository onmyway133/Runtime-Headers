/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDETAFilter : PBCodable <NSCopying> {
    GEOAutomobileOptions * _automobileOptions;
    struct { 
        unsigned int includeHistoricTravelTime : 1; 
        unsigned int includeRouteTrafficDetail : 1; 
    }  _has;
    BOOL  _includeHistoricTravelTime;
    BOOL  _includeRouteTrafficDetail;
    GEOTransitOptions * _transitOptions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _transportTypes;
    PBUnknownFields * _unknownFields;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, readwrite, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) BOOL hasAutomobileOptions;
@property (nonatomic, readwrite) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic, readwrite) BOOL hasIncludeRouteTrafficDetail;
@property (nonatomic, readonly) BOOL hasTransitOptions;
@property (nonatomic, readonly) BOOL hasWalkingOptions;
@property (nonatomic, readwrite) BOOL includeHistoricTravelTime;
@property (nonatomic, readwrite) BOOL includeRouteTrafficDetail;
@property (nonatomic, readwrite, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) int*transportTypes;
@property (nonatomic, readonly) unsigned long long transportTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) GEOWalkingOptions *walkingOptions;

- (void).cxx_destruct;
- (int)StringAsTransportTypes:(id)arg1;
- (void)addTransportType:(int)arg1;
- (id)automobileOptions;
- (void)clearTransportTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAutomobileOptions;
- (BOOL)hasIncludeHistoricTravelTime;
- (BOOL)hasIncludeRouteTrafficDetail;
- (BOOL)hasTransitOptions;
- (BOOL)hasWalkingOptions;
- (unsigned long long)hash;
- (BOOL)includeHistoricTravelTime;
- (BOOL)includeRouteTrafficDetail;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setHasIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setHasIncludeRouteTrafficDetail:(BOOL)arg1;
- (void)setIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setIncludeRouteTrafficDetail:(BOOL)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setWalkingOptions:(id)arg1;
- (id)transitOptions;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (int*)transportTypes;
- (id)transportTypesAsString:(int)arg1;
- (unsigned long long)transportTypesCount;
- (id)unknownFields;
- (id)walkingOptions;
- (void)writeTo:(id)arg1;

@end
