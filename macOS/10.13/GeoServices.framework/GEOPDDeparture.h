/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {
    double  _absDepartureTime;
    struct { 
        unsigned int absDepartureTime : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
    NSString * _vehicleNumber;
}

@property (nonatomic, readwrite) double absDepartureTime;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *departureDate;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) BOOL hasAbsDepartureTime;
@property (nonatomic, readonly) BOOL hasVehicleNumber;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, readwrite, retain) NSString *vehicleNumber;

- (void).cxx_destruct;
- (double)absDepartureTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAbsDepartureTime;
- (BOOL)hasVehicleNumber;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAbsDepartureTime:(double)arg1;
- (void)setHasAbsDepartureTime:(BOOL)arg1;
- (void)setVehicleNumber:(id)arg1;
- (id)unknownFields;
- (id)vehicleNumber;
- (void)writeTo:(id)arg1;

// GEOPDDeparture (GEOTransitExtrasInternal)

- (id)departureDate;
- (id)vehicleIdentifier;

@end
