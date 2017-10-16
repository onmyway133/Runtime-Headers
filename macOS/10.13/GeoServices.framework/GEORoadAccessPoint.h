/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORoadAccessPoint : PBCodable <NSCopying> {
    int  _drivingDirection;
    struct { 
        unsigned int drivingDirection : 1; 
        unsigned int walkingDirection : 1; 
        unsigned int isApproximate : 1; 
    }  _has;
    BOOL  _isApproximate;
    GEOLatLng * _location;
    PBUnknownFields * _unknownFields;
    int  _walkingDirection;
}

@property (nonatomic, readwrite) int drivingDirection;
@property (nonatomic, readwrite) BOOL hasDrivingDirection;
@property (nonatomic, readwrite) BOOL hasIsApproximate;
@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic, readwrite) BOOL hasWalkingDirection;
@property (nonatomic, readwrite) BOOL isApproximate;
@property (nonatomic, readwrite, retain) GEOLatLng *location;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite) int walkingDirection;

- (void).cxx_destruct;
- (int)StringAsDrivingDirection:(id)arg1;
- (int)StringAsWalkingDirection:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)drivingDirection;
- (id)drivingDirectionAsString:(int)arg1;
- (BOOL)hasDrivingDirection;
- (BOOL)hasIsApproximate;
- (BOOL)hasLocation;
- (BOOL)hasWalkingDirection;
- (unsigned long long)hash;
- (BOOL)isApproximate;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDrivingDirection:(int)arg1;
- (void)setHasDrivingDirection:(BOOL)arg1;
- (void)setHasIsApproximate:(BOOL)arg1;
- (void)setHasWalkingDirection:(BOOL)arg1;
- (void)setIsApproximate:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setWalkingDirection:(int)arg1;
- (id)unknownFields;
- (int)walkingDirection;
- (id)walkingDirectionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
