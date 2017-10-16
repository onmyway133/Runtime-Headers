/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying> {
    unsigned long long  _featureId;
    struct { 
        unsigned int featureId : 1; 
    }  _has;
    GEOLatLng * _location;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) unsigned long long featureId;
@property (nonatomic, readwrite) BOOL hasFeatureId;
@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic, readwrite, retain) GEOLatLng *location;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (BOOL)hasFeatureId;
- (BOOL)hasLocation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setHasFeatureId:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end