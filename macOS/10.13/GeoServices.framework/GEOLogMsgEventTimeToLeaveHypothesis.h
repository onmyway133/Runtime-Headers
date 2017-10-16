/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying> {
    int  _arrival;
    int  _departure;
    double  _earliestArrivalOffset;
    double  _earliestDepartureOffset;
    struct { 
        unsigned int earliestArrivalOffset : 1; 
        unsigned int earliestDepartureOffset : 1; 
        unsigned int latestArrivalOffset : 1; 
        unsigned int latestDepartureOffset : 1; 
        unsigned int arrival : 1; 
        unsigned int departure : 1; 
        unsigned int numberOfReroutes : 1; 
        unsigned int ttlUiNotificationShown : 1; 
    }  _has;
    double  _latestArrivalOffset;
    double  _latestDepartureOffset;
    unsigned int  _numberOfReroutes;
    int  _ttlUiNotificationShown;
}

@property (nonatomic, readwrite) int arrival;
@property (nonatomic, readwrite) int departure;
@property (nonatomic, readwrite) double earliestArrivalOffset;
@property (nonatomic, readwrite) double earliestDepartureOffset;
@property (nonatomic, readwrite) BOOL hasArrival;
@property (nonatomic, readwrite) BOOL hasDeparture;
@property (nonatomic, readwrite) BOOL hasEarliestArrivalOffset;
@property (nonatomic, readwrite) BOOL hasEarliestDepartureOffset;
@property (nonatomic, readwrite) BOOL hasLatestArrivalOffset;
@property (nonatomic, readwrite) BOOL hasLatestDepartureOffset;
@property (nonatomic, readwrite) BOOL hasNumberOfReroutes;
@property (nonatomic, readwrite) BOOL hasTtlUiNotificationShown;
@property (nonatomic, readwrite) double latestArrivalOffset;
@property (nonatomic, readwrite) double latestDepartureOffset;
@property (nonatomic, readwrite) unsigned int numberOfReroutes;
@property (nonatomic, readwrite) int ttlUiNotificationShown;

- (int)StringAsArrival:(id)arg1;
- (int)StringAsDeparture:(id)arg1;
- (int)StringAsTtlUiNotificationShown:(id)arg1;
- (int)arrival;
- (id)arrivalAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)departure;
- (id)departureAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)earliestArrivalOffset;
- (double)earliestDepartureOffset;
- (BOOL)hasArrival;
- (BOOL)hasDeparture;
- (BOOL)hasEarliestArrivalOffset;
- (BOOL)hasEarliestDepartureOffset;
- (BOOL)hasLatestArrivalOffset;
- (BOOL)hasLatestDepartureOffset;
- (BOOL)hasNumberOfReroutes;
- (BOOL)hasTtlUiNotificationShown;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (double)latestArrivalOffset;
- (double)latestDepartureOffset;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfReroutes;
- (BOOL)readFrom:(id)arg1;
- (void)setArrival:(int)arg1;
- (void)setDeparture:(int)arg1;
- (void)setEarliestArrivalOffset:(double)arg1;
- (void)setEarliestDepartureOffset:(double)arg1;
- (void)setHasArrival:(BOOL)arg1;
- (void)setHasDeparture:(BOOL)arg1;
- (void)setHasEarliestArrivalOffset:(BOOL)arg1;
- (void)setHasEarliestDepartureOffset:(BOOL)arg1;
- (void)setHasLatestArrivalOffset:(BOOL)arg1;
- (void)setHasLatestDepartureOffset:(BOOL)arg1;
- (void)setHasNumberOfReroutes:(BOOL)arg1;
- (void)setHasTtlUiNotificationShown:(BOOL)arg1;
- (void)setLatestArrivalOffset:(double)arg1;
- (void)setLatestDepartureOffset:(double)arg1;
- (void)setNumberOfReroutes:(unsigned int)arg1;
- (void)setTtlUiNotificationShown:(int)arg1;
- (int)ttlUiNotificationShown;
- (id)ttlUiNotificationShownAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
