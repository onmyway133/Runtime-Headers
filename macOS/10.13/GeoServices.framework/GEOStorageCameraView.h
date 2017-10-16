/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOStorageCameraView : PBCodable <NSCopying> {
    GEOURLCamera * _camera;
    struct { 
        unsigned int mapType : 1; 
    }  _has;
    int  _mapType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOURLCamera *camera;
@property (nonatomic, readonly) BOOL hasCamera;
@property (nonatomic, readwrite) BOOL hasMapType;
@property (nonatomic, readwrite) int mapType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (id)camera;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCamera;
- (BOOL)hasMapType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setHasMapType:(BOOL)arg1;
- (void)setMapType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
