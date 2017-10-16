/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDDepartureSequence : PBCodable <NSCopying> {
    NSMutableArray * _departureFrequencys;
    NSMutableArray * _departures;
    NSString * _directionNameString;
    struct { 
        unsigned int lineId : 1; 
        unsigned int stopId : 1; 
    }  _has;
    NSString * _headsignString;
    unsigned long long  _lineId;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _nextStopIds;
    struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _operatingHours;
    unsigned long long  _operatingHoursCount;
    unsigned long long  _operatingHoursSpace;
    unsigned long long  _stopId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSMutableArray *departureFrequencys;
@property (nonatomic, readwrite, retain) NSMutableArray *departures;
@property (nonatomic, readwrite, retain) NSString *directionNameString;
@property (nonatomic, readonly) BOOL hasDirectionNameString;
@property (nonatomic, readonly) BOOL hasHeadsignString;
@property (nonatomic, readwrite) BOOL hasLineId;
@property (nonatomic, readwrite) BOOL hasStopId;
@property (nonatomic, readwrite, retain) NSString *headsignString;
@property (nonatomic, readwrite) unsigned long long lineId;
@property (nonatomic, readonly) unsigned long long*nextStopIds;
@property (nonatomic, readonly) unsigned long long nextStopIdsCount;
@property (nonatomic, readonly) struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*operatingHours;
@property (nonatomic, readonly) unsigned long long operatingHoursCount;
@property (nonatomic, readwrite) unsigned long long stopId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)departureFrequencyType;
+ (Class)departureType;

- (void).cxx_destruct;
- (void)addDeparture:(id)arg1;
- (void)addDepartureFrequency:(id)arg1;
- (void)addNextStopId:(unsigned long long)arg1;
- (void)addOperatingHours:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearDepartureFrequencys;
- (void)clearDepartures;
- (void)clearNextStopIds;
- (void)clearOperatingHours;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)departureAtIndex:(unsigned long long)arg1;
- (id)departureFrequencyAtIndex:(unsigned long long)arg1;
- (id)departureFrequencys;
- (unsigned long long)departureFrequencysCount;
- (id)departures;
- (unsigned long long)departuresCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionNameString;
- (BOOL)hasDirectionNameString;
- (BOOL)hasHeadsignString;
- (BOOL)hasLineId;
- (BOOL)hasStopId;
- (unsigned long long)hash;
- (id)headsignString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)lineId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)nextStopIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)nextStopIds;
- (unsigned long long)nextStopIdsCount;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)operatingHours;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })operatingHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)operatingHoursCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDepartureFrequencys:(id)arg1;
- (void)setDepartures:(id)arg1;
- (void)setDirectionNameString:(id)arg1;
- (void)setHasLineId:(BOOL)arg1;
- (void)setHasStopId:(BOOL)arg1;
- (void)setHeadsignString:(id)arg1;
- (void)setLineId:(unsigned long long)arg1;
- (void)setNextStopIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setOperatingHours:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setStopId:(unsigned long long)arg1;
- (unsigned long long)stopId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
