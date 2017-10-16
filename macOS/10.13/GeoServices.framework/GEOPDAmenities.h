/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDAmenities : PBCodable <NSCopying> {
    struct GEOPDAmenityValue { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _amenitys;
    unsigned long long  _amenitysCount;
    unsigned long long  _amenitysSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) struct GEOPDAmenityValue { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*amenitys;
@property (nonatomic, readonly) unsigned long long amenitysCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addAmenity:(struct GEOPDAmenityValue { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct GEOPDAmenityValue { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })amenityAtIndex:(unsigned long long)arg1;
- (struct GEOPDAmenityValue { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)amenitys;
- (unsigned long long)amenitysCount;
- (void)clearAmenitys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAmenitys:(struct GEOPDAmenityValue { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPDAmenities (PlaceDataExtras)

+ (id)amentiesForPlaceData:(id)arg1;

- (BOOL)hasAmenityType:(int)arg1;
- (BOOL)valueForAmenityType:(int)arg1;

@end